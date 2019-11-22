// ------------------------------------------------------------
// -----                R3BMusicOnlineSpectra             -----
// -----    Created 06/10/19  by J.L. Rodriguez-Sanchez   -----
// -----           Fill MusIC online histograms           -----
// ------------------------------------------------------------

#ifndef R3BMusicOnlineSpectra_H
#define R3BMusicOnlineSpectra_H

#include "FairTask.h"
#include "TCanvas.h"
#include "TH1.h"
#include "TH2F.h"
#include "TMath.h"
#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

#define NbAnodesMus 8

class TClonesArray;
class R3BEventHeader;

/**
 * This taks reads MusIC data and plots online histograms
 */
class R3BMusicOnlineSpectra : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BMusicOnlineSpectra();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BMusicOnlineSpectra(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BMusicOnlineSpectra();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /**
     * Method for event loop implementation.
     * Is called by the framework every time a new event is read.
     * @param option an execution option.
     */
    virtual void Exec(Option_t* option);

    /**
     * A method for finish of processing of an event.
     * Is called by the framework for each event after executing
     * the tasks.
     */
    virtual void FinishEvent();

    /**
     * Method for finish of the task execution.
     * Is called by the framework after processing the event loop.
     */
    virtual void FinishTask();

    /**
     * Methods to clean histograms.
     */
    virtual void Reset_Histo();

  private:
    TClonesArray* fMappedItemsMus; /**< Array with mapped items. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header.      */
    Int_t fNEvents;         /**< Event counter.     */

    // Canvas
    TCanvas* cMusMap_E;
    TCanvas* cMusMap_EvsDT;
    TCanvas* cMusMap_DT;
    TCanvas *cMusMap_ESum, *cMusMap_ESum1, *cMusMap_ESum2;

    // Histograms for Mapped data
    TH1F* fh1_Musmap_mult;
    TH2F* fh2_Musmap_multhit;
    TH1F* fh1_Musmap_E[NbAnodesMus];
    TH1F* fh1_Musmap_DT[NbAnodesMus];
    TH1F* fh1_Mus_ESum[3];
    TH2F* fh2_Mus_ESum;
    TH2F* fh2_Mus_EneRawVsDriftTime[NbAnodesMus];

    // Histograms for Cal data

  public:
    ClassDef(R3BMusicOnlineSpectra, 1)
};

#endif
