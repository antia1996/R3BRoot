/******************************************************************************
 *   Copyright (C) 2019 GSI Helmholtzzentrum für Schwerionenforschung GmbH    *
 *   Copyright (C) 2019 Members of R3B Collaboration                          *
 *                                                                            *
 *             This software is distributed under the terms of the            *
 *                 GNU General Public Licence (GPL) version 3,                *
 *                    copied verbatim in the file "LICENSE".                  *
 *                                                                            *
 * In applying this license GSI does not waive the privileges and immunities  *
 * granted to it by virtue of its status as an Intergovernmental Organization *
 * or submit itself to any jurisdiction.                                      *
 ******************************************************************************/

#include "R3BTofdDigitizer.h"
#include "FairLogger.h"
#include "FairRootManager.h"
#include "FairRunAna.h"
#include "FairRuntimeDb.h"
#include "TClonesArray.h"

// includes for modeling
#include "TGeoBBox.h"
#include "TGeoCompositeShape.h"
#include "TGeoManager.h"
#include "TGeoMaterial.h"
#include "TGeoMatrix.h"
#include "TGeoMedium.h"
#include "TGeoShapeAssembly.h"
#include "TParticle.h"
#include "TVirtualMC.h"

#include "TH1F.h"
#include "TH2F.h"
#include "TMath.h"
#include "TRandom.h"
#include "TRandom3.h"
#include "TVector3.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "R3BMCTrack.h"
#include "R3BTofPoint.h"

using namespace std;
using std::cout;
using std::endl;

R3BTofdDigitizer::R3BTofdDigitizer()
    : FairTask("R3B Tofd Digitization scheme ")
{

    // set default values for smearing
    fsigma_y = 10.;
    fsigma_t = 1.;
    fsigma_ELoss = 0.1;
}

R3BTofdDigitizer::~R3BTofdDigitizer() {}

InitStatus R3BTofdDigitizer::Init()
{

    //  cout<<"Init "<<endl;
    // Get input array
    FairRootManager* ioman = FairRootManager::Instance();
    if (!ioman)
        LOG(fatal) << "Init: No FairRootManager";
    fTofdPoints = (TClonesArray*)ioman->GetObject("TofPoint");
    fMCTrack = (TClonesArray*)ioman->GetObject("MCTrack");

    // Register output array fTofdHits
    fTofdHits = new TClonesArray("R3BTofdHitData", 1000);
    ioman->Register("TofdHit", "Digital response in Tofd", fTofdHits, kTRUE);

    // Get random number for smearing in y, t, ELoss

    fRnd = new TRandom3();

    fHist1 = new TH1F("fHist1", "Energy loss histogram of Monte Carlo Points", 5000, 0., 5.);
    fHist2 = new TH1F("fHist2", "Energy loss histogram without merging", 5000, 0., 5.);
    fHist3 = new TH1F("fHist3", "Energy loss histogram with merging", 5000, 0., 5.);

    return kSUCCESS;
}

void R3BTofdDigitizer::Exec(Option_t* opt)
{

    Reset();

    // detector parameter
    Int_t number_layers = 2;   // number of layers
    Int_t number_paddles = 44; // number of paddles per layer

    Float_t paddle_width = 2.70000;
    Float_t paddle_thickness = 0.50000;
    Float_t air_gap_paddles = 0.04;
    Float_t air_gap_layer = 5.;

    Float_t detector_width = number_paddles * paddle_width + (number_paddles - 1) * air_gap_paddles + paddle_width;
    Float_t detector_thickness = (number_layers - 1) * air_gap_layer + number_layers * paddle_thickness;

    vector<R3BTofPoint*> vPoints[1000];
    Int_t n_entries = fTofdPoints->GetEntries();
    Bool_t ChannelFired[1000] = { kFALSE };

    Float_t X_Pos[1000] = { 0 };
    Float_t Y_Pos[1000] = { 0 };
    Float_t Time[1000] = { 0 };
    Float_t Energy_Loss[1000] = { 0 };
    Int_t number_paddles_hit = 0;

    for (Int_t entry = 0; entry < n_entries; entry++)
    {

        R3BTofPoint* data_element = (R3BTofPoint*)fTofdPoints->At(entry);

        Int_t DetectorID = data_element->GetDetectorID();
        Double_t energy_loss = data_element->GetEnergyLoss();

        cout << "det ID " << DetectorID << endl;
        // discard all hits with an energy loss < cut
        if (energy_loss < 0.01)
            continue;

        // add hits to vector
        vPoints[DetectorID].push_back(data_element);

        ChannelFired[DetectorID] = kTRUE;
    }

    R3BTofdHitData* hit = nullptr;
    map<Int_t, R3BTofdHitData*> MapOfHits;

    for (Int_t channel = 0; channel < 1000; channel++)
    {
        if (ChannelFired[channel] == kTRUE)
        {

            sort(vPoints[channel].begin(), vPoints[channel].end(), [](const R3BTofPoint* lhs, const R3BTofPoint* rhs) {
                return lhs->GetTime() < rhs->GetTime();
            });

            for (Int_t point = 0; point < vPoints[channel].size(); point++)
            {

                // energy threshold
                if (vPoints[channel].at(point)->GetEnergyLoss() < 0.01)
                    continue;
                fHist1->Fill(vPoints[channel].at(point)->GetEnergyLoss());

                if (0 == point || (vPoints[channel].at(point)->GetTime() - MapOfHits[channel]->GetTime()) > 30)
                { // add new hits

                    int layer_label;
                    int paddle_number;
                    if (channel < number_paddles)
                    {
                        layer_label = 0;
                        paddle_number = channel;
                    }
                    else if (channel - 100 < number_paddles)
                    {
                        layer_label = 1;
                        paddle_number = channel - number_paddles * layer_label;
                    }

                    //            Float_t paddle_xposition = -detector_width/2 + paddle_width/2*(1+layer_label) +
                    //            paddle_number*paddle_width+paddle_number*air_gap_paddles;

                    X_Pos[channel] = -detector_width / 2. + paddle_width / 2. * (1 + layer_label) +
                                     paddle_number * paddle_width + paddle_number * air_gap_paddles;
                    Y_Pos[channel] = vPoints[channel].at(point)->GetYIn() - 0.523976; // get y-position //local
                    Time[channel] = vPoints[channel].at(point)->GetTime();
                    Energy_Loss[channel] = vPoints[channel].at(point)->GetEnergyLoss();

                    // add to HitData and introduce smearing of y-position, time and energy loss
                    cout << "Hit: ch = " << channel << " paddle = " << paddle_number << " x = " << X_Pos[channel]
                         << " y = " << Y_Pos[channel] << " t = " << Time[channel] << " eloss = " << Energy_Loss[channel]
                         << endl;
                    MapOfHits.insert(pair<Int_t, R3BTofdHitData*>(
                        channel,
                        new R3BTofdHitData(0.,
                                           fRnd->Uniform((X_Pos[channel] - 1.35), (X_Pos[channel] + 1.35)),
                                           fRnd->Gaus(Y_Pos[channel], fsigma_y),
                                           0.,
                                           fRnd->Gaus(Time[channel], fsigma_t),
                                           fRnd->Gaus(Energy_Loss[channel], fsigma_ELoss),
                                           channel)));
                }

                else
                { // update hit
                    MapOfHits[channel]->SetTime(vPoints[channel].at(point)->GetTime());
                    MapOfHits[channel]->SetEloss(vPoints[channel].at(point)->GetEnergyLoss() +
                                                 MapOfHits[channel]->GetEloss());
                }
            }
        }
    }

    // merge energy loss of adjacent paddles in different layers

    Int_t counter = 0;
    vector<R3BTofdHitData*> vHits;

    for (auto& i : MapOfHits)
    {

        fHist2->Fill(i.second->GetEloss());

        if (i.first >= number_paddles)
        {
            continue;
        }

        vHits.push_back(i.second);

        Int_t k1 = i.first + number_paddles;
        Int_t k2 = i.first + number_paddles - 1;

        // check which paddle(s) in 2nd layer were hit
        if (MapOfHits.count(k1))
        {
            vHits.push_back(MapOfHits[k1]);
        }

        if (i.first != 0)
        {
            if (MapOfHits.count(k2))
            {
                vHits.push_back(MapOfHits[k2]);
            }
        }

        // sum over energy loss
        Double_t sum_eloss = 0;
        for (Int_t j = 0; j < vHits.size(); j++)
        {
            sum_eloss += vHits[j]->GetEloss();
        }

        // average over energy loss
        Double_t merged_eloss = sum_eloss / (vHits.size());

        // set merged energy loss as new energy loss for hits
        for (Int_t j = 0; j < vHits.size(); j++)
        {
            vHits[j]->SetEloss(merged_eloss);
        }

        vHits.clear();
    }

    for (auto& i : MapOfHits)
    {
        new ((*fTofdHits)[counter]) R3BTofdHitData(*(i.second));
        fHist3->Fill(i.second->GetEloss());
        delete i.second;
        counter++;
    }
}
// -------------------------------------------------------------------------

void R3BTofdDigitizer::Reset()
{
    // Clear the structure
    //   cout << " -I- Digit Reset() called " << endl;

    if (fTofdHits)
        fTofdHits->Clear();
}

void R3BTofdDigitizer::Finish()
{
    fHist1->Write();
    fHist2->Write();
    fHist3->Write();
}

ClassImp(R3BTofdDigitizer)
