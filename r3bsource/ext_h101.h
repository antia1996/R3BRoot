/********************************************************
 *
 * Structure for ext_data_fetch_event() filling.
 *
 * Do not edit - automatically generated.
 */

#ifndef __GUARD_H101_EXT_H101_H__
#define __GUARD_H101_EXT_H101_H__

#ifndef __CINT__
# include <stdint.h>
#else
/* For CINT (old version trouble with stdint.h): */
# ifndef uint32_t
typedef unsigned int uint32_t;
typedef          int  int32_t;
# endif
#endif
#ifndef EXT_STRUCT_CTRL
# define EXT_STRUCT_CTRL(x)
#endif

/********************************************************
 *
 * Plain structure (layout as ntuple/root file):
 */

typedef struct EXT_STR_h101_t
{
  /* UNPACK */
  uint32_t TRIGGER /* [0,15] */;
  uint32_t EVENTNO /* [-1,-1] */;
  /* RAW */
  uint32_t LOS1TFM /* [1,5] */;
  uint32_t LOS1TFMI[5 EXT_STRUCT_CTRL(LOS1TFM)] /* [1,5] */;
  uint32_t LOS1TFME[5 EXT_STRUCT_CTRL(LOS1TFM)] /* [1,50] */;
  uint32_t LOS1TF /* [0,50] */;
  uint32_t LOS1TFv[50 EXT_STRUCT_CTRL(LOS1TF)] /* [-1,-1] */;
  uint32_t LOS1TCM /* [1,5] */;
  uint32_t LOS1TCMI[5 EXT_STRUCT_CTRL(LOS1TCM)] /* [1,5] */;
  uint32_t LOS1TCME[5 EXT_STRUCT_CTRL(LOS1TCM)] /* [1,50] */;
  uint32_t LOS1TC /* [0,50] */;
  uint32_t LOS1TCv[50 EXT_STRUCT_CTRL(LOS1TC)] /* [-1,-1] */;
  uint32_t LOS2TFM /* [1,5] */;
  uint32_t LOS2TFMI[5 EXT_STRUCT_CTRL(LOS2TFM)] /* [1,5] */;
  uint32_t LOS2TFME[5 EXT_STRUCT_CTRL(LOS2TFM)] /* [1,50] */;
  uint32_t LOS2TF /* [0,50] */;
  uint32_t LOS2TFv[50 EXT_STRUCT_CTRL(LOS2TF)] /* [-1,-1] */;
  uint32_t LOS2TCM /* [1,5] */;
  uint32_t LOS2TCMI[5 EXT_STRUCT_CTRL(LOS2TCM)] /* [1,5] */;
  uint32_t LOS2TCME[5 EXT_STRUCT_CTRL(LOS2TCM)] /* [1,50] */;
  uint32_t LOS2TC /* [0,50] */;
  uint32_t LOS2TCv[50 EXT_STRUCT_CTRL(LOS2TC)] /* [-1,-1] */;
  uint32_t ROLU1_1T /* [-1,-1] */;
  uint32_t ROLU1_2T /* [-1,-1] */;
  uint32_t ROLU1_3T /* [-1,-1] */;
  uint32_t ROLU1_4T /* [-1,-1] */;
  uint32_t ROLU2_1T /* [-1,-1] */;
  uint32_t ROLU2_2T /* [-1,-1] */;
  uint32_t ROLU2_3T /* [-1,-1] */;
  uint32_t ROLU2_4T /* [-1,-1] */;
  uint32_t TOFD1_1TF /* [-1,-1] */;
  uint32_t TOFD1_1TC /* [-1,-1] */;
  uint32_t TOFD1_2TF /* [-1,-1] */;
  uint32_t TOFD1_2TC /* [-1,-1] */;
  uint32_t TOFD2_1TF /* [-1,-1] */;
  uint32_t TOFD2_1TC /* [-1,-1] */;
  uint32_t TOFD2_2TF /* [-1,-1] */;
  uint32_t TOFD2_2TC /* [-1,-1] */;
  uint32_t TOFD3_1TF /* [-1,-1] */;
  uint32_t TOFD3_1TC /* [-1,-1] */;
  uint32_t TOFD3_2TF /* [-1,-1] */;
  uint32_t TOFD3_2TC /* [-1,-1] */;
  uint32_t TOFD4_1TF /* [-1,-1] */;
  uint32_t TOFD4_1TC /* [-1,-1] */;
  uint32_t TOFD4_2TF /* [-1,-1] */;
  uint32_t TOFD4_2TC /* [-1,-1] */;
  uint32_t TOFD5_1TF /* [-1,-1] */;
  uint32_t TOFD5_1TC /* [-1,-1] */;
  uint32_t TOFD5_2TF /* [-1,-1] */;
  uint32_t TOFD5_2TC /* [-1,-1] */;
  uint32_t TOFD6_1TF /* [-1,-1] */;
  uint32_t TOFD6_1TC /* [-1,-1] */;
  uint32_t TOFD6_2TF /* [-1,-1] */;
  uint32_t TOFD6_2TC /* [-1,-1] */;
  uint32_t TOFD7_1TF /* [-1,-1] */;
  uint32_t TOFD7_1TC /* [-1,-1] */;
  uint32_t TOFD7_2TF /* [-1,-1] */;
  uint32_t TOFD7_2TC /* [-1,-1] */;
  uint32_t TOFD8_1TF /* [-1,-1] */;
  uint32_t TOFD8_1TC /* [-1,-1] */;
  uint32_t TOFD8_2TF /* [-1,-1] */;
  uint32_t TOFD8_2TC /* [-1,-1] */;
  uint32_t TOFD9_1TF /* [-1,-1] */;
  uint32_t TOFD9_1TC /* [-1,-1] */;
  uint32_t TOFD9_2TF /* [-1,-1] */;
  uint32_t TOFD9_2TC /* [-1,-1] */;
  uint32_t TOFD10_1TF /* [-1,-1] */;
  uint32_t TOFD10_1TC /* [-1,-1] */;
  uint32_t TOFD10_2TF /* [-1,-1] */;
  uint32_t TOFD10_2TC /* [-1,-1] */;
  uint32_t TOFD11_1TF /* [-1,-1] */;
  uint32_t TOFD11_1TC /* [-1,-1] */;
  uint32_t TOFD11_2TF /* [-1,-1] */;
  uint32_t TOFD11_2TC /* [-1,-1] */;
  uint32_t TOFD12_1TF /* [-1,-1] */;
  uint32_t TOFD12_1TC /* [-1,-1] */;
  uint32_t TOFD12_2TF /* [-1,-1] */;
  uint32_t TOFD12_2TC /* [-1,-1] */;
  uint32_t TOFD13_1TF /* [-1,-1] */;
  uint32_t TOFD13_1TC /* [-1,-1] */;
  uint32_t TOFD13_2TF /* [-1,-1] */;
  uint32_t TOFD13_2TC /* [-1,-1] */;
  uint32_t TOFD14_1TF /* [-1,-1] */;
  uint32_t TOFD14_1TC /* [-1,-1] */;
  uint32_t TOFD14_2TF /* [-1,-1] */;
  uint32_t TOFD14_2TC /* [-1,-1] */;
  uint32_t TOFD15_1TF /* [-1,-1] */;
  uint32_t TOFD15_1TC /* [-1,-1] */;
  uint32_t TOFD15_2TF /* [-1,-1] */;
  uint32_t TOFD15_2TC /* [-1,-1] */;
  uint32_t NNP1_1_1TAC /* [0,65535] */;
  uint32_t NNP1_1_1CLK /* [0,65535] */;
  uint32_t NNP1_1_1ADC /* [0,65535] */;
  uint32_t NNP1_1_2TAC /* [0,65535] */;
  uint32_t NNP1_1_2CLK /* [0,65535] */;
  uint32_t NNP1_1_2ADC /* [0,65535] */;
  uint32_t NNP1_2_1TAC /* [0,65535] */;
  uint32_t NNP1_2_1CLK /* [0,65535] */;
  uint32_t NNP1_2_1ADC /* [0,65535] */;
  uint32_t NNP1_2_2TAC /* [0,65535] */;
  uint32_t NNP1_2_2CLK /* [0,65535] */;
  uint32_t NNP1_2_2ADC /* [0,65535] */;
  uint32_t NNP1_3_1TAC /* [0,65535] */;
  uint32_t NNP1_3_1CLK /* [0,65535] */;
  uint32_t NNP1_3_1ADC /* [0,65535] */;
  uint32_t NNP1_3_2TAC /* [0,65535] */;
  uint32_t NNP1_3_2CLK /* [0,65535] */;
  uint32_t NNP1_3_2ADC /* [0,65535] */;
  uint32_t NNP1_4_1TAC /* [0,65535] */;
  uint32_t NNP1_4_1CLK /* [0,65535] */;
  uint32_t NNP1_4_1ADC /* [0,65535] */;
  uint32_t NNP1_4_2TAC /* [0,65535] */;
  uint32_t NNP1_4_2CLK /* [0,65535] */;
  uint32_t NNP1_4_2ADC /* [0,65535] */;
  uint32_t NNP1_5_1TAC /* [0,65535] */;
  uint32_t NNP1_5_1CLK /* [0,65535] */;
  uint32_t NNP1_5_1ADC /* [0,65535] */;
  uint32_t NNP1_5_2TAC /* [0,65535] */;
  uint32_t NNP1_5_2CLK /* [0,65535] */;
  uint32_t NNP1_5_2ADC /* [0,65535] */;
  uint32_t NNP1_6_1TAC /* [0,65535] */;
  uint32_t NNP1_6_1CLK /* [0,65535] */;
  uint32_t NNP1_6_1ADC /* [0,65535] */;
  uint32_t NNP1_6_2TAC /* [0,65535] */;
  uint32_t NNP1_6_2CLK /* [0,65535] */;
  uint32_t NNP1_6_2ADC /* [0,65535] */;
  uint32_t NNP1_7_1TAC /* [0,65535] */;
  uint32_t NNP1_7_1CLK /* [0,65535] */;
  uint32_t NNP1_7_1ADC /* [0,65535] */;
  uint32_t NNP1_7_2TAC /* [0,65535] */;
  uint32_t NNP1_7_2CLK /* [0,65535] */;
  uint32_t NNP1_7_2ADC /* [0,65535] */;
  uint32_t NNP1_8_1TAC /* [0,65535] */;
  uint32_t NNP1_8_1CLK /* [0,65535] */;
  uint32_t NNP1_8_1ADC /* [0,65535] */;
  uint32_t NNP1_8_2TAC /* [0,65535] */;
  uint32_t NNP1_8_2CLK /* [0,65535] */;
  uint32_t NNP1_8_2ADC /* [0,65535] */;
  uint32_t NNP1_9_1TAC /* [0,65535] */;
  uint32_t NNP1_9_1CLK /* [0,65535] */;
  uint32_t NNP1_9_1ADC /* [0,65535] */;
  uint32_t NNP1_9_2TAC /* [0,65535] */;
  uint32_t NNP1_9_2CLK /* [0,65535] */;
  uint32_t NNP1_9_2ADC /* [0,65535] */;
  uint32_t NNP1_10_1TAC /* [0,65535] */;
  uint32_t NNP1_10_1CLK /* [0,65535] */;
  uint32_t NNP1_10_1ADC /* [0,65535] */;
  uint32_t NNP1_10_2TAC /* [0,65535] */;
  uint32_t NNP1_10_2CLK /* [0,65535] */;
  uint32_t NNP1_10_2ADC /* [0,65535] */;
  uint32_t NNP1_11_1TAC /* [0,65535] */;
  uint32_t NNP1_11_1CLK /* [0,65535] */;
  uint32_t NNP1_11_1ADC /* [0,65535] */;
  uint32_t NNP1_11_2TAC /* [0,65535] */;
  uint32_t NNP1_11_2CLK /* [0,65535] */;
  uint32_t NNP1_11_2ADC /* [0,65535] */;
  uint32_t NNP1_12_1TAC /* [0,65535] */;
  uint32_t NNP1_12_1CLK /* [0,65535] */;
  uint32_t NNP1_12_1ADC /* [0,65535] */;
  uint32_t NNP1_12_2TAC /* [0,65535] */;
  uint32_t NNP1_12_2CLK /* [0,65535] */;
  uint32_t NNP1_12_2ADC /* [0,65535] */;
  uint32_t NNP1_13_1TAC /* [0,65535] */;
  uint32_t NNP1_13_1CLK /* [0,65535] */;
  uint32_t NNP1_13_1ADC /* [0,65535] */;
  uint32_t NNP1_13_2TAC /* [0,65535] */;
  uint32_t NNP1_13_2CLK /* [0,65535] */;
  uint32_t NNP1_13_2ADC /* [0,65535] */;
  uint32_t NNP1_14_1TAC /* [0,65535] */;
  uint32_t NNP1_14_1CLK /* [0,65535] */;
  uint32_t NNP1_14_1ADC /* [0,65535] */;
  uint32_t NNP1_14_2TAC /* [0,65535] */;
  uint32_t NNP1_14_2CLK /* [0,65535] */;
  uint32_t NNP1_14_2ADC /* [0,65535] */;
  uint32_t NNP1_15_1TAC /* [0,65535] */;
  uint32_t NNP1_15_1CLK /* [0,65535] */;
  uint32_t NNP1_15_1ADC /* [0,65535] */;
  uint32_t NNP1_15_2TAC /* [0,65535] */;
  uint32_t NNP1_15_2CLK /* [0,65535] */;
  uint32_t NNP1_15_2ADC /* [0,65535] */;
  uint32_t NNP1_16_1TAC /* [0,65535] */;
  uint32_t NNP1_16_1CLK /* [0,65535] */;
  uint32_t NNP1_16_1ADC /* [0,65535] */;
  uint32_t NNP1_16_2TAC /* [0,65535] */;
  uint32_t NNP1_16_2CLK /* [0,65535] */;
  uint32_t NNP1_16_2ADC /* [0,65535] */;
  uint32_t NNP1_17_1TAC /* [0,65535] */;
  uint32_t NNP1_17_1CLK /* [0,65535] */;
  uint32_t NNP1_17_1ADC /* [0,65535] */;
  uint32_t NNP1_17_2TAC /* [0,65535] */;
  uint32_t NNP1_17_2CLK /* [0,65535] */;
  uint32_t NNP1_17_2ADC /* [0,65535] */;
  uint32_t NNP1_18_1TAC /* [0,65535] */;
  uint32_t NNP1_18_1CLK /* [0,65535] */;
  uint32_t NNP1_18_1ADC /* [0,65535] */;
  uint32_t NNP1_18_2TAC /* [0,65535] */;
  uint32_t NNP1_18_2CLK /* [0,65535] */;
  uint32_t NNP1_18_2ADC /* [0,65535] */;
  uint32_t NNP1_19_1TAC /* [0,65535] */;
  uint32_t NNP1_19_1CLK /* [0,65535] */;
  uint32_t NNP1_19_1ADC /* [0,65535] */;
  uint32_t NNP1_19_2TAC /* [0,65535] */;
  uint32_t NNP1_19_2CLK /* [0,65535] */;
  uint32_t NNP1_19_2ADC /* [0,65535] */;
  uint32_t NNP1_20_1TAC /* [0,65535] */;
  uint32_t NNP1_20_1CLK /* [0,65535] */;
  uint32_t NNP1_20_1ADC /* [0,65535] */;
  uint32_t NNP1_20_2TAC /* [0,65535] */;
  uint32_t NNP1_20_2CLK /* [0,65535] */;
  uint32_t NNP1_20_2ADC /* [0,65535] */;
  uint32_t NNP1_21_1TAC /* [0,65535] */;
  uint32_t NNP1_21_1CLK /* [0,65535] */;
  uint32_t NNP1_21_1ADC /* [0,65535] */;
  uint32_t NNP1_21_2TAC /* [0,65535] */;
  uint32_t NNP1_21_2CLK /* [0,65535] */;
  uint32_t NNP1_21_2ADC /* [0,65535] */;
  uint32_t NNP1_22_1TAC /* [0,65535] */;
  uint32_t NNP1_22_1CLK /* [0,65535] */;
  uint32_t NNP1_22_1ADC /* [0,65535] */;
  uint32_t NNP1_22_2TAC /* [0,65535] */;
  uint32_t NNP1_22_2CLK /* [0,65535] */;
  uint32_t NNP1_22_2ADC /* [0,65535] */;
  uint32_t NNP1_23_1TAC /* [0,65535] */;
  uint32_t NNP1_23_1CLK /* [0,65535] */;
  uint32_t NNP1_23_1ADC /* [0,65535] */;
  uint32_t NNP1_23_2TAC /* [0,65535] */;
  uint32_t NNP1_23_2CLK /* [0,65535] */;
  uint32_t NNP1_23_2ADC /* [0,65535] */;
  uint32_t NNP1_24_1TAC /* [0,65535] */;
  uint32_t NNP1_24_1CLK /* [0,65535] */;
  uint32_t NNP1_24_1ADC /* [0,65535] */;
  uint32_t NNP1_24_2TAC /* [0,65535] */;
  uint32_t NNP1_24_2CLK /* [0,65535] */;
  uint32_t NNP1_24_2ADC /* [0,65535] */;
  uint32_t NNP1_25_1TAC /* [0,65535] */;
  uint32_t NNP1_25_1CLK /* [0,65535] */;
  uint32_t NNP1_25_1ADC /* [0,65535] */;
  uint32_t NNP1_25_2TAC /* [0,65535] */;
  uint32_t NNP1_25_2CLK /* [0,65535] */;
  uint32_t NNP1_25_2ADC /* [0,65535] */;
  uint32_t NNP1_26_1TAC /* [0,65535] */;
  uint32_t NNP1_26_1CLK /* [0,65535] */;
  uint32_t NNP1_26_1ADC /* [0,65535] */;
  uint32_t NNP1_26_2TAC /* [0,65535] */;
  uint32_t NNP1_26_2CLK /* [0,65535] */;
  uint32_t NNP1_26_2ADC /* [0,65535] */;
  uint32_t NNP1_27_1TAC /* [0,65535] */;
  uint32_t NNP1_27_1CLK /* [0,65535] */;
  uint32_t NNP1_27_1ADC /* [0,65535] */;
  uint32_t NNP1_27_2TAC /* [0,65535] */;
  uint32_t NNP1_27_2CLK /* [0,65535] */;
  uint32_t NNP1_27_2ADC /* [0,65535] */;
  uint32_t NNP1_28_1TAC /* [0,65535] */;
  uint32_t NNP1_28_1CLK /* [0,65535] */;
  uint32_t NNP1_28_1ADC /* [0,65535] */;
  uint32_t NNP1_28_2TAC /* [0,65535] */;
  uint32_t NNP1_28_2CLK /* [0,65535] */;
  uint32_t NNP1_28_2ADC /* [0,65535] */;
  uint32_t NNP1_29_1TAC /* [0,65535] */;
  uint32_t NNP1_29_1CLK /* [0,65535] */;
  uint32_t NNP1_29_1ADC /* [0,65535] */;
  uint32_t NNP1_29_2TAC /* [0,65535] */;
  uint32_t NNP1_29_2CLK /* [0,65535] */;
  uint32_t NNP1_29_2ADC /* [0,65535] */;
  uint32_t NNP1_30_1TAC /* [0,65535] */;
  uint32_t NNP1_30_1CLK /* [0,65535] */;
  uint32_t NNP1_30_1ADC /* [0,65535] */;
  uint32_t NNP1_30_2TAC /* [0,65535] */;
  uint32_t NNP1_30_2CLK /* [0,65535] */;
  uint32_t NNP1_30_2ADC /* [0,65535] */;
  uint32_t NNP1_31_1TAC /* [0,65535] */;
  uint32_t NNP1_31_1CLK /* [0,65535] */;
  uint32_t NNP1_31_1ADC /* [0,65535] */;
  uint32_t NNP1_31_2TAC /* [0,65535] */;
  uint32_t NNP1_31_2CLK /* [0,65535] */;
  uint32_t NNP1_31_2ADC /* [0,65535] */;
  uint32_t NNP1_32_1TAC /* [0,65535] */;
  uint32_t NNP1_32_1CLK /* [0,65535] */;
  uint32_t NNP1_32_1ADC /* [0,65535] */;
  uint32_t NNP1_32_2TAC /* [0,65535] */;
  uint32_t NNP1_32_2CLK /* [0,65535] */;
  uint32_t NNP1_32_2ADC /* [0,65535] */;
  uint32_t NNP1_33_1TAC /* [0,65535] */;
  uint32_t NNP1_33_1CLK /* [0,65535] */;
  uint32_t NNP1_33_1ADC /* [0,65535] */;
  uint32_t NNP1_33_2TAC /* [0,65535] */;
  uint32_t NNP1_33_2CLK /* [0,65535] */;
  uint32_t NNP1_33_2ADC /* [0,65535] */;
  uint32_t NNP1_34_1TAC /* [0,65535] */;
  uint32_t NNP1_34_1CLK /* [0,65535] */;
  uint32_t NNP1_34_1ADC /* [0,65535] */;
  uint32_t NNP1_34_2TAC /* [0,65535] */;
  uint32_t NNP1_34_2CLK /* [0,65535] */;
  uint32_t NNP1_34_2ADC /* [0,65535] */;
  uint32_t NNP1_35_1TAC /* [0,65535] */;
  uint32_t NNP1_35_1CLK /* [0,65535] */;
  uint32_t NNP1_35_1ADC /* [0,65535] */;
  uint32_t NNP1_35_2TAC /* [0,65535] */;
  uint32_t NNP1_35_2CLK /* [0,65535] */;
  uint32_t NNP1_35_2ADC /* [0,65535] */;
  uint32_t NNP1_36_1TAC /* [0,65535] */;
  uint32_t NNP1_36_1CLK /* [0,65535] */;
  uint32_t NNP1_36_1ADC /* [0,65535] */;
  uint32_t NNP1_36_2TAC /* [0,65535] */;
  uint32_t NNP1_36_2CLK /* [0,65535] */;
  uint32_t NNP1_36_2ADC /* [0,65535] */;
  uint32_t NNP1_37_1TAC /* [0,65535] */;
  uint32_t NNP1_37_1CLK /* [0,65535] */;
  uint32_t NNP1_37_1ADC /* [0,65535] */;
  uint32_t NNP1_37_2TAC /* [0,65535] */;
  uint32_t NNP1_37_2CLK /* [0,65535] */;
  uint32_t NNP1_37_2ADC /* [0,65535] */;
  uint32_t NNP1_38_1TAC /* [0,65535] */;
  uint32_t NNP1_38_1CLK /* [0,65535] */;
  uint32_t NNP1_38_1ADC /* [0,65535] */;
  uint32_t NNP1_38_2TAC /* [0,65535] */;
  uint32_t NNP1_38_2CLK /* [0,65535] */;
  uint32_t NNP1_38_2ADC /* [0,65535] */;
  uint32_t NNP1_39_1TAC /* [0,65535] */;
  uint32_t NNP1_39_1CLK /* [0,65535] */;
  uint32_t NNP1_39_1ADC /* [0,65535] */;
  uint32_t NNP1_39_2TAC /* [0,65535] */;
  uint32_t NNP1_39_2CLK /* [0,65535] */;
  uint32_t NNP1_39_2ADC /* [0,65535] */;
  uint32_t NNP1_40_1TAC /* [0,65535] */;
  uint32_t NNP1_40_1CLK /* [0,65535] */;
  uint32_t NNP1_40_1ADC /* [0,65535] */;
  uint32_t NNP1_40_2TAC /* [0,65535] */;
  uint32_t NNP1_40_2CLK /* [0,65535] */;
  uint32_t NNP1_40_2ADC /* [0,65535] */;
  uint32_t NNP1_41_1TAC /* [0,65535] */;
  uint32_t NNP1_41_1CLK /* [0,65535] */;
  uint32_t NNP1_41_1ADC /* [0,65535] */;
  uint32_t NNP1_41_2TAC /* [0,65535] */;
  uint32_t NNP1_41_2CLK /* [0,65535] */;
  uint32_t NNP1_41_2ADC /* [0,65535] */;
  uint32_t NNP1_42_1TAC /* [0,65535] */;
  uint32_t NNP1_42_1CLK /* [0,65535] */;
  uint32_t NNP1_42_1ADC /* [0,65535] */;
  uint32_t NNP1_42_2TAC /* [0,65535] */;
  uint32_t NNP1_42_2CLK /* [0,65535] */;
  uint32_t NNP1_42_2ADC /* [0,65535] */;
  uint32_t NNP1_43_1TAC /* [0,65535] */;
  uint32_t NNP1_43_1CLK /* [0,65535] */;
  uint32_t NNP1_43_1ADC /* [0,65535] */;
  uint32_t NNP1_43_2TAC /* [0,65535] */;
  uint32_t NNP1_43_2CLK /* [0,65535] */;
  uint32_t NNP1_43_2ADC /* [0,65535] */;
  uint32_t NNP1_44_1TAC /* [0,65535] */;
  uint32_t NNP1_44_1CLK /* [0,65535] */;
  uint32_t NNP1_44_1ADC /* [0,65535] */;
  uint32_t NNP1_44_2TAC /* [0,65535] */;
  uint32_t NNP1_44_2CLK /* [0,65535] */;
  uint32_t NNP1_44_2ADC /* [0,65535] */;
  uint32_t NNP1_45_1TAC /* [0,65535] */;
  uint32_t NNP1_45_1CLK /* [0,65535] */;
  uint32_t NNP1_45_1ADC /* [0,65535] */;
  uint32_t NNP1_45_2TAC /* [0,65535] */;
  uint32_t NNP1_45_2CLK /* [0,65535] */;
  uint32_t NNP1_45_2ADC /* [0,65535] */;
  uint32_t NNP1_46_1TAC /* [0,65535] */;
  uint32_t NNP1_46_1CLK /* [0,65535] */;
  uint32_t NNP1_46_1ADC /* [0,65535] */;
  uint32_t NNP1_46_2TAC /* [0,65535] */;
  uint32_t NNP1_46_2CLK /* [0,65535] */;
  uint32_t NNP1_46_2ADC /* [0,65535] */;
  uint32_t NNP1_47_1TAC /* [0,65535] */;
  uint32_t NNP1_47_1CLK /* [0,65535] */;
  uint32_t NNP1_47_1ADC /* [0,65535] */;
  uint32_t NNP1_47_2TAC /* [0,65535] */;
  uint32_t NNP1_47_2CLK /* [0,65535] */;
  uint32_t NNP1_47_2ADC /* [0,65535] */;
  uint32_t NNP1_48_1TAC /* [0,65535] */;
  uint32_t NNP1_48_1CLK /* [0,65535] */;
  uint32_t NNP1_48_1ADC /* [0,65535] */;
  uint32_t NNP1_48_2TAC /* [0,65535] */;
  uint32_t NNP1_48_2CLK /* [0,65535] */;
  uint32_t NNP1_48_2ADC /* [0,65535] */;
  uint32_t NNP1_49_1TAC /* [0,65535] */;
  uint32_t NNP1_49_1CLK /* [0,65535] */;
  uint32_t NNP1_49_1ADC /* [0,65535] */;
  uint32_t NNP1_49_2TAC /* [0,65535] */;
  uint32_t NNP1_49_2CLK /* [0,65535] */;
  uint32_t NNP1_49_2ADC /* [0,65535] */;
  uint32_t NNP1_50_1TAC /* [0,65535] */;
  uint32_t NNP1_50_1CLK /* [0,65535] */;
  uint32_t NNP1_50_1ADC /* [0,65535] */;
  uint32_t NNP1_50_2TAC /* [0,65535] */;
  uint32_t NNP1_50_2CLK /* [0,65535] */;
  uint32_t NNP1_50_2ADC /* [0,65535] */;
  uint32_t NNP2_1_1TAC /* [0,65535] */;
  uint32_t NNP2_1_1CLK /* [0,65535] */;
  uint32_t NNP2_1_1ADC /* [0,65535] */;
  uint32_t NNP2_1_2TAC /* [0,65535] */;
  uint32_t NNP2_1_2CLK /* [0,65535] */;
  uint32_t NNP2_1_2ADC /* [0,65535] */;
  uint32_t NNP2_2_1TAC /* [0,65535] */;
  uint32_t NNP2_2_1CLK /* [0,65535] */;
  uint32_t NNP2_2_1ADC /* [0,65535] */;
  uint32_t NNP2_2_2TAC /* [0,65535] */;
  uint32_t NNP2_2_2CLK /* [0,65535] */;
  uint32_t NNP2_2_2ADC /* [0,65535] */;
  uint32_t NNP2_3_1TAC /* [0,65535] */;
  uint32_t NNP2_3_1CLK /* [0,65535] */;
  uint32_t NNP2_3_1ADC /* [0,65535] */;
  uint32_t NNP2_3_2TAC /* [0,65535] */;
  uint32_t NNP2_3_2CLK /* [0,65535] */;
  uint32_t NNP2_3_2ADC /* [0,65535] */;
  uint32_t NNP2_4_1TAC /* [0,65535] */;
  uint32_t NNP2_4_1CLK /* [0,65535] */;
  uint32_t NNP2_4_1ADC /* [0,65535] */;
  uint32_t NNP2_4_2TAC /* [0,65535] */;
  uint32_t NNP2_4_2CLK /* [0,65535] */;
  uint32_t NNP2_4_2ADC /* [0,65535] */;
  uint32_t NNP2_5_1TAC /* [0,65535] */;
  uint32_t NNP2_5_1CLK /* [0,65535] */;
  uint32_t NNP2_5_1ADC /* [0,65535] */;
  uint32_t NNP2_5_2TAC /* [0,65535] */;
  uint32_t NNP2_5_2CLK /* [0,65535] */;
  uint32_t NNP2_5_2ADC /* [0,65535] */;
  uint32_t NNP2_6_1TAC /* [0,65535] */;
  uint32_t NNP2_6_1CLK /* [0,65535] */;
  uint32_t NNP2_6_1ADC /* [0,65535] */;
  uint32_t NNP2_6_2TAC /* [0,65535] */;
  uint32_t NNP2_6_2CLK /* [0,65535] */;
  uint32_t NNP2_6_2ADC /* [0,65535] */;
  uint32_t NNP2_7_1TAC /* [0,65535] */;
  uint32_t NNP2_7_1CLK /* [0,65535] */;
  uint32_t NNP2_7_1ADC /* [0,65535] */;
  uint32_t NNP2_7_2TAC /* [0,65535] */;
  uint32_t NNP2_7_2CLK /* [0,65535] */;
  uint32_t NNP2_7_2ADC /* [0,65535] */;
  uint32_t NNP2_8_1TAC /* [0,65535] */;
  uint32_t NNP2_8_1CLK /* [0,65535] */;
  uint32_t NNP2_8_1ADC /* [0,65535] */;
  uint32_t NNP2_8_2TAC /* [0,65535] */;
  uint32_t NNP2_8_2CLK /* [0,65535] */;
  uint32_t NNP2_8_2ADC /* [0,65535] */;
  uint32_t NNP2_9_1TAC /* [0,65535] */;
  uint32_t NNP2_9_1CLK /* [0,65535] */;
  uint32_t NNP2_9_1ADC /* [0,65535] */;
  uint32_t NNP2_9_2TAC /* [0,65535] */;
  uint32_t NNP2_9_2CLK /* [0,65535] */;
  uint32_t NNP2_9_2ADC /* [0,65535] */;
  uint32_t NNP2_10_1TAC /* [0,65535] */;
  uint32_t NNP2_10_1CLK /* [0,65535] */;
  uint32_t NNP2_10_1ADC /* [0,65535] */;
  uint32_t NNP2_10_2TAC /* [0,65535] */;
  uint32_t NNP2_10_2CLK /* [0,65535] */;
  uint32_t NNP2_10_2ADC /* [0,65535] */;
  uint32_t NNP2_11_1TAC /* [0,65535] */;
  uint32_t NNP2_11_1CLK /* [0,65535] */;
  uint32_t NNP2_11_1ADC /* [0,65535] */;
  uint32_t NNP2_11_2TAC /* [0,65535] */;
  uint32_t NNP2_11_2CLK /* [0,65535] */;
  uint32_t NNP2_11_2ADC /* [0,65535] */;
  uint32_t NNP2_12_1TAC /* [0,65535] */;
  uint32_t NNP2_12_1CLK /* [0,65535] */;
  uint32_t NNP2_12_1ADC /* [0,65535] */;
  uint32_t NNP2_12_2TAC /* [0,65535] */;
  uint32_t NNP2_12_2CLK /* [0,65535] */;
  uint32_t NNP2_12_2ADC /* [0,65535] */;
  uint32_t NNP2_13_1TAC /* [0,65535] */;
  uint32_t NNP2_13_1CLK /* [0,65535] */;
  uint32_t NNP2_13_1ADC /* [0,65535] */;
  uint32_t NNP2_13_2TAC /* [0,65535] */;
  uint32_t NNP2_13_2CLK /* [0,65535] */;
  uint32_t NNP2_13_2ADC /* [0,65535] */;
  uint32_t NNP2_14_1TAC /* [0,65535] */;
  uint32_t NNP2_14_1CLK /* [0,65535] */;
  uint32_t NNP2_14_1ADC /* [0,65535] */;
  uint32_t NNP2_14_2TAC /* [0,65535] */;
  uint32_t NNP2_14_2CLK /* [0,65535] */;
  uint32_t NNP2_14_2ADC /* [0,65535] */;
  uint32_t NNP2_15_1TAC /* [0,65535] */;
  uint32_t NNP2_15_1CLK /* [0,65535] */;
  uint32_t NNP2_15_1ADC /* [0,65535] */;
  uint32_t NNP2_15_2TAC /* [0,65535] */;
  uint32_t NNP2_15_2CLK /* [0,65535] */;
  uint32_t NNP2_15_2ADC /* [0,65535] */;
  uint32_t NNP2_16_1TAC /* [0,65535] */;
  uint32_t NNP2_16_1CLK /* [0,65535] */;
  uint32_t NNP2_16_1ADC /* [0,65535] */;
  uint32_t NNP2_16_2TAC /* [0,65535] */;
  uint32_t NNP2_16_2CLK /* [0,65535] */;
  uint32_t NNP2_16_2ADC /* [0,65535] */;
  uint32_t NNP2_17_1TAC /* [0,65535] */;
  uint32_t NNP2_17_1CLK /* [0,65535] */;
  uint32_t NNP2_17_1ADC /* [0,65535] */;
  uint32_t NNP2_17_2TAC /* [0,65535] */;
  uint32_t NNP2_17_2CLK /* [0,65535] */;
  uint32_t NNP2_17_2ADC /* [0,65535] */;
  uint32_t NNP2_18_1TAC /* [0,65535] */;
  uint32_t NNP2_18_1CLK /* [0,65535] */;
  uint32_t NNP2_18_1ADC /* [0,65535] */;
  uint32_t NNP2_18_2TAC /* [0,65535] */;
  uint32_t NNP2_18_2CLK /* [0,65535] */;
  uint32_t NNP2_18_2ADC /* [0,65535] */;
  uint32_t NNP2_19_1TAC /* [0,65535] */;
  uint32_t NNP2_19_1CLK /* [0,65535] */;
  uint32_t NNP2_19_1ADC /* [0,65535] */;
  uint32_t NNP2_19_2TAC /* [0,65535] */;
  uint32_t NNP2_19_2CLK /* [0,65535] */;
  uint32_t NNP2_19_2ADC /* [0,65535] */;
  uint32_t NNP2_20_1TAC /* [0,65535] */;
  uint32_t NNP2_20_1CLK /* [0,65535] */;
  uint32_t NNP2_20_1ADC /* [0,65535] */;
  uint32_t NNP2_20_2TAC /* [0,65535] */;
  uint32_t NNP2_20_2CLK /* [0,65535] */;
  uint32_t NNP2_20_2ADC /* [0,65535] */;
  uint32_t NNP2_21_1TAC /* [0,65535] */;
  uint32_t NNP2_21_1CLK /* [0,65535] */;
  uint32_t NNP2_21_1ADC /* [0,65535] */;
  uint32_t NNP2_21_2TAC /* [0,65535] */;
  uint32_t NNP2_21_2CLK /* [0,65535] */;
  uint32_t NNP2_21_2ADC /* [0,65535] */;
  uint32_t NNP2_22_1TAC /* [0,65535] */;
  uint32_t NNP2_22_1CLK /* [0,65535] */;
  uint32_t NNP2_22_1ADC /* [0,65535] */;
  uint32_t NNP2_22_2TAC /* [0,65535] */;
  uint32_t NNP2_22_2CLK /* [0,65535] */;
  uint32_t NNP2_22_2ADC /* [0,65535] */;
  uint32_t NNP2_23_1TAC /* [0,65535] */;
  uint32_t NNP2_23_1CLK /* [0,65535] */;
  uint32_t NNP2_23_1ADC /* [0,65535] */;
  uint32_t NNP2_23_2TAC /* [0,65535] */;
  uint32_t NNP2_23_2CLK /* [0,65535] */;
  uint32_t NNP2_23_2ADC /* [0,65535] */;
  uint32_t NNP2_24_1TAC /* [0,65535] */;
  uint32_t NNP2_24_1CLK /* [0,65535] */;
  uint32_t NNP2_24_1ADC /* [0,65535] */;
  uint32_t NNP2_24_2TAC /* [0,65535] */;
  uint32_t NNP2_24_2CLK /* [0,65535] */;
  uint32_t NNP2_24_2ADC /* [0,65535] */;
  uint32_t NNP2_25_1TAC /* [0,65535] */;
  uint32_t NNP2_25_1CLK /* [0,65535] */;
  uint32_t NNP2_25_1ADC /* [0,65535] */;
  uint32_t NNP2_25_2TAC /* [0,65535] */;
  uint32_t NNP2_25_2CLK /* [0,65535] */;
  uint32_t NNP2_25_2ADC /* [0,65535] */;
  uint32_t NNP2_26_1TAC /* [0,65535] */;
  uint32_t NNP2_26_1CLK /* [0,65535] */;
  uint32_t NNP2_26_1ADC /* [0,65535] */;
  uint32_t NNP2_26_2TAC /* [0,65535] */;
  uint32_t NNP2_26_2CLK /* [0,65535] */;
  uint32_t NNP2_26_2ADC /* [0,65535] */;
  uint32_t NNP2_27_1TAC /* [0,65535] */;
  uint32_t NNP2_27_1CLK /* [0,65535] */;
  uint32_t NNP2_27_1ADC /* [0,65535] */;
  uint32_t NNP2_27_2TAC /* [0,65535] */;
  uint32_t NNP2_27_2CLK /* [0,65535] */;
  uint32_t NNP2_27_2ADC /* [0,65535] */;
  uint32_t NNP2_28_1TAC /* [0,65535] */;
  uint32_t NNP2_28_1CLK /* [0,65535] */;
  uint32_t NNP2_28_1ADC /* [0,65535] */;
  uint32_t NNP2_28_2TAC /* [0,65535] */;
  uint32_t NNP2_28_2CLK /* [0,65535] */;
  uint32_t NNP2_28_2ADC /* [0,65535] */;
  uint32_t NNP2_29_1TAC /* [0,65535] */;
  uint32_t NNP2_29_1CLK /* [0,65535] */;
  uint32_t NNP2_29_1ADC /* [0,65535] */;
  uint32_t NNP2_29_2TAC /* [0,65535] */;
  uint32_t NNP2_29_2CLK /* [0,65535] */;
  uint32_t NNP2_29_2ADC /* [0,65535] */;
  uint32_t NNP2_30_1TAC /* [0,65535] */;
  uint32_t NNP2_30_1CLK /* [0,65535] */;
  uint32_t NNP2_30_1ADC /* [0,65535] */;
  uint32_t NNP2_30_2TAC /* [0,65535] */;
  uint32_t NNP2_30_2CLK /* [0,65535] */;
  uint32_t NNP2_30_2ADC /* [0,65535] */;
  uint32_t NNP2_31_1TAC /* [0,65535] */;
  uint32_t NNP2_31_1CLK /* [0,65535] */;
  uint32_t NNP2_31_1ADC /* [0,65535] */;
  uint32_t NNP2_31_2TAC /* [0,65535] */;
  uint32_t NNP2_31_2CLK /* [0,65535] */;
  uint32_t NNP2_31_2ADC /* [0,65535] */;
  uint32_t NNP2_32_1TAC /* [0,65535] */;
  uint32_t NNP2_32_1CLK /* [0,65535] */;
  uint32_t NNP2_32_1ADC /* [0,65535] */;
  uint32_t NNP2_32_2TAC /* [0,65535] */;
  uint32_t NNP2_32_2CLK /* [0,65535] */;
  uint32_t NNP2_32_2ADC /* [0,65535] */;
  uint32_t NNP2_33_1TAC /* [0,65535] */;
  uint32_t NNP2_33_1CLK /* [0,65535] */;
  uint32_t NNP2_33_1ADC /* [0,65535] */;
  uint32_t NNP2_33_2TAC /* [0,65535] */;
  uint32_t NNP2_33_2CLK /* [0,65535] */;
  uint32_t NNP2_33_2ADC /* [0,65535] */;
  uint32_t NNP2_34_1TAC /* [0,65535] */;
  uint32_t NNP2_34_1CLK /* [0,65535] */;
  uint32_t NNP2_34_1ADC /* [0,65535] */;
  uint32_t NNP2_34_2TAC /* [0,65535] */;
  uint32_t NNP2_34_2CLK /* [0,65535] */;
  uint32_t NNP2_34_2ADC /* [0,65535] */;
  uint32_t NNP2_35_1TAC /* [0,65535] */;
  uint32_t NNP2_35_1CLK /* [0,65535] */;
  uint32_t NNP2_35_1ADC /* [0,65535] */;
  uint32_t NNP2_35_2TAC /* [0,65535] */;
  uint32_t NNP2_35_2CLK /* [0,65535] */;
  uint32_t NNP2_35_2ADC /* [0,65535] */;
  uint32_t NNP2_36_1TAC /* [0,65535] */;
  uint32_t NNP2_36_1CLK /* [0,65535] */;
  uint32_t NNP2_36_1ADC /* [0,65535] */;
  uint32_t NNP2_36_2TAC /* [0,65535] */;
  uint32_t NNP2_36_2CLK /* [0,65535] */;
  uint32_t NNP2_36_2ADC /* [0,65535] */;
  uint32_t NNP2_37_1TAC /* [0,65535] */;
  uint32_t NNP2_37_1CLK /* [0,65535] */;
  uint32_t NNP2_37_1ADC /* [0,65535] */;
  uint32_t NNP2_37_2TAC /* [0,65535] */;
  uint32_t NNP2_37_2CLK /* [0,65535] */;
  uint32_t NNP2_37_2ADC /* [0,65535] */;
  uint32_t NNP2_38_1TAC /* [0,65535] */;
  uint32_t NNP2_38_1CLK /* [0,65535] */;
  uint32_t NNP2_38_1ADC /* [0,65535] */;
  uint32_t NNP2_38_2TAC /* [0,65535] */;
  uint32_t NNP2_38_2CLK /* [0,65535] */;
  uint32_t NNP2_38_2ADC /* [0,65535] */;
  uint32_t NNP2_39_1TAC /* [0,65535] */;
  uint32_t NNP2_39_1CLK /* [0,65535] */;
  uint32_t NNP2_39_1ADC /* [0,65535] */;
  uint32_t NNP2_39_2TAC /* [0,65535] */;
  uint32_t NNP2_39_2CLK /* [0,65535] */;
  uint32_t NNP2_39_2ADC /* [0,65535] */;
  uint32_t NNP2_40_1TAC /* [0,65535] */;
  uint32_t NNP2_40_1CLK /* [0,65535] */;
  uint32_t NNP2_40_1ADC /* [0,65535] */;
  uint32_t NNP2_40_2TAC /* [0,65535] */;
  uint32_t NNP2_40_2CLK /* [0,65535] */;
  uint32_t NNP2_40_2ADC /* [0,65535] */;
  uint32_t NNP2_41_1TAC /* [0,65535] */;
  uint32_t NNP2_41_1CLK /* [0,65535] */;
  uint32_t NNP2_41_1ADC /* [0,65535] */;
  uint32_t NNP2_41_2TAC /* [0,65535] */;
  uint32_t NNP2_41_2CLK /* [0,65535] */;
  uint32_t NNP2_41_2ADC /* [0,65535] */;
  uint32_t NNP2_42_1TAC /* [0,65535] */;
  uint32_t NNP2_42_1CLK /* [0,65535] */;
  uint32_t NNP2_42_1ADC /* [0,65535] */;
  uint32_t NNP2_42_2TAC /* [0,65535] */;
  uint32_t NNP2_42_2CLK /* [0,65535] */;
  uint32_t NNP2_42_2ADC /* [0,65535] */;
  uint32_t NNP2_43_1TAC /* [0,65535] */;
  uint32_t NNP2_43_1CLK /* [0,65535] */;
  uint32_t NNP2_43_1ADC /* [0,65535] */;
  uint32_t NNP2_43_2TAC /* [0,65535] */;
  uint32_t NNP2_43_2CLK /* [0,65535] */;
  uint32_t NNP2_43_2ADC /* [0,65535] */;
  uint32_t NNP2_44_1TAC /* [0,65535] */;
  uint32_t NNP2_44_1CLK /* [0,65535] */;
  uint32_t NNP2_44_1ADC /* [0,65535] */;
  uint32_t NNP2_44_2TAC /* [0,65535] */;
  uint32_t NNP2_44_2CLK /* [0,65535] */;
  uint32_t NNP2_44_2ADC /* [0,65535] */;
  uint32_t NNP2_45_1TAC /* [0,65535] */;
  uint32_t NNP2_45_1CLK /* [0,65535] */;
  uint32_t NNP2_45_1ADC /* [0,65535] */;
  uint32_t NNP2_45_2TAC /* [0,65535] */;
  uint32_t NNP2_45_2CLK /* [0,65535] */;
  uint32_t NNP2_45_2ADC /* [0,65535] */;
  uint32_t NNP2_46_1TAC /* [0,65535] */;
  uint32_t NNP2_46_1CLK /* [0,65535] */;
  uint32_t NNP2_46_1ADC /* [0,65535] */;
  uint32_t NNP2_46_2TAC /* [0,65535] */;
  uint32_t NNP2_46_2CLK /* [0,65535] */;
  uint32_t NNP2_46_2ADC /* [0,65535] */;
  uint32_t NNP2_47_1TAC /* [0,65535] */;
  uint32_t NNP2_47_1CLK /* [0,65535] */;
  uint32_t NNP2_47_1ADC /* [0,65535] */;
  uint32_t NNP2_47_2TAC /* [0,65535] */;
  uint32_t NNP2_47_2CLK /* [0,65535] */;
  uint32_t NNP2_47_2ADC /* [0,65535] */;
  uint32_t NNP2_48_1TAC /* [0,65535] */;
  uint32_t NNP2_48_1CLK /* [0,65535] */;
  uint32_t NNP2_48_1ADC /* [0,65535] */;
  uint32_t NNP2_48_2TAC /* [0,65535] */;
  uint32_t NNP2_48_2CLK /* [0,65535] */;
  uint32_t NNP2_48_2ADC /* [0,65535] */;
  uint32_t NNP2_49_1TAC /* [0,65535] */;
  uint32_t NNP2_49_1CLK /* [0,65535] */;
  uint32_t NNP2_49_1ADC /* [0,65535] */;
  uint32_t NNP2_49_2TAC /* [0,65535] */;
  uint32_t NNP2_49_2CLK /* [0,65535] */;
  uint32_t NNP2_49_2ADC /* [0,65535] */;
  uint32_t NNP2_50_1TAC /* [0,65535] */;
  uint32_t NNP2_50_1CLK /* [0,65535] */;
  uint32_t NNP2_50_1ADC /* [0,65535] */;
  uint32_t NNP2_50_2TAC /* [0,65535] */;
  uint32_t NNP2_50_2CLK /* [0,65535] */;
  uint32_t NNP2_50_2ADC /* [0,65535] */;
  uint32_t NNP3_1_1TAC /* [0,65535] */;
  uint32_t NNP3_1_1CLK /* [0,65535] */;
  uint32_t NNP3_1_1ADC /* [0,65535] */;
  uint32_t NNP3_1_2TAC /* [0,65535] */;
  uint32_t NNP3_1_2CLK /* [0,65535] */;
  uint32_t NNP3_1_2ADC /* [0,65535] */;
  uint32_t NNP3_2_1TAC /* [0,65535] */;
  uint32_t NNP3_2_1CLK /* [0,65535] */;
  uint32_t NNP3_2_1ADC /* [0,65535] */;
  uint32_t NNP3_2_2TAC /* [0,65535] */;
  uint32_t NNP3_2_2CLK /* [0,65535] */;
  uint32_t NNP3_2_2ADC /* [0,65535] */;
  uint32_t NNP3_3_1TAC /* [0,65535] */;
  uint32_t NNP3_3_1CLK /* [0,65535] */;
  uint32_t NNP3_3_1ADC /* [0,65535] */;
  uint32_t NNP3_3_2TAC /* [0,65535] */;
  uint32_t NNP3_3_2CLK /* [0,65535] */;
  uint32_t NNP3_3_2ADC /* [0,65535] */;
  uint32_t NNP3_4_1TAC /* [0,65535] */;
  uint32_t NNP3_4_1CLK /* [0,65535] */;
  uint32_t NNP3_4_1ADC /* [0,65535] */;
  uint32_t NNP3_4_2TAC /* [0,65535] */;
  uint32_t NNP3_4_2CLK /* [0,65535] */;
  uint32_t NNP3_4_2ADC /* [0,65535] */;
  uint32_t NNP3_5_1TAC /* [0,65535] */;
  uint32_t NNP3_5_1CLK /* [0,65535] */;
  uint32_t NNP3_5_1ADC /* [0,65535] */;
  uint32_t NNP3_5_2TAC /* [0,65535] */;
  uint32_t NNP3_5_2CLK /* [0,65535] */;
  uint32_t NNP3_5_2ADC /* [0,65535] */;
  uint32_t NNP3_6_1TAC /* [0,65535] */;
  uint32_t NNP3_6_1CLK /* [0,65535] */;
  uint32_t NNP3_6_1ADC /* [0,65535] */;
  uint32_t NNP3_6_2TAC /* [0,65535] */;
  uint32_t NNP3_6_2CLK /* [0,65535] */;
  uint32_t NNP3_6_2ADC /* [0,65535] */;
  uint32_t NNP3_7_1TAC /* [0,65535] */;
  uint32_t NNP3_7_1CLK /* [0,65535] */;
  uint32_t NNP3_7_1ADC /* [0,65535] */;
  uint32_t NNP3_7_2TAC /* [0,65535] */;
  uint32_t NNP3_7_2CLK /* [0,65535] */;
  uint32_t NNP3_7_2ADC /* [0,65535] */;
  uint32_t NNP3_8_1TAC /* [0,65535] */;
  uint32_t NNP3_8_1CLK /* [0,65535] */;
  uint32_t NNP3_8_1ADC /* [0,65535] */;
  uint32_t NNP3_8_2TAC /* [0,65535] */;
  uint32_t NNP3_8_2CLK /* [0,65535] */;
  uint32_t NNP3_8_2ADC /* [0,65535] */;
  uint32_t NNP3_9_1TAC /* [0,65535] */;
  uint32_t NNP3_9_1CLK /* [0,65535] */;
  uint32_t NNP3_9_1ADC /* [0,65535] */;
  uint32_t NNP3_9_2TAC /* [0,65535] */;
  uint32_t NNP3_9_2CLK /* [0,65535] */;
  uint32_t NNP3_9_2ADC /* [0,65535] */;
  uint32_t NNP3_10_1TAC /* [0,65535] */;
  uint32_t NNP3_10_1CLK /* [0,65535] */;
  uint32_t NNP3_10_1ADC /* [0,65535] */;
  uint32_t NNP3_10_2TAC /* [0,65535] */;
  uint32_t NNP3_10_2CLK /* [0,65535] */;
  uint32_t NNP3_10_2ADC /* [0,65535] */;
  uint32_t NNP3_11_1TAC /* [0,65535] */;
  uint32_t NNP3_11_1CLK /* [0,65535] */;
  uint32_t NNP3_11_1ADC /* [0,65535] */;
  uint32_t NNP3_11_2TAC /* [0,65535] */;
  uint32_t NNP3_11_2CLK /* [0,65535] */;
  uint32_t NNP3_11_2ADC /* [0,65535] */;
  uint32_t NNP3_12_1TAC /* [0,65535] */;
  uint32_t NNP3_12_1CLK /* [0,65535] */;
  uint32_t NNP3_12_1ADC /* [0,65535] */;
  uint32_t NNP3_12_2TAC /* [0,65535] */;
  uint32_t NNP3_12_2CLK /* [0,65535] */;
  uint32_t NNP3_12_2ADC /* [0,65535] */;
  uint32_t NNP3_13_1TAC /* [0,65535] */;
  uint32_t NNP3_13_1CLK /* [0,65535] */;
  uint32_t NNP3_13_1ADC /* [0,65535] */;
  uint32_t NNP3_13_2TAC /* [0,65535] */;
  uint32_t NNP3_13_2CLK /* [0,65535] */;
  uint32_t NNP3_13_2ADC /* [0,65535] */;
  uint32_t NNP3_14_1TAC /* [0,65535] */;
  uint32_t NNP3_14_1CLK /* [0,65535] */;
  uint32_t NNP3_14_1ADC /* [0,65535] */;
  uint32_t NNP3_14_2TAC /* [0,65535] */;
  uint32_t NNP3_14_2CLK /* [0,65535] */;
  uint32_t NNP3_14_2ADC /* [0,65535] */;
  uint32_t NNP3_15_1TAC /* [0,65535] */;
  uint32_t NNP3_15_1CLK /* [0,65535] */;
  uint32_t NNP3_15_1ADC /* [0,65535] */;
  uint32_t NNP3_15_2TAC /* [0,65535] */;
  uint32_t NNP3_15_2CLK /* [0,65535] */;
  uint32_t NNP3_15_2ADC /* [0,65535] */;
  uint32_t NNP3_16_1TAC /* [0,65535] */;
  uint32_t NNP3_16_1CLK /* [0,65535] */;
  uint32_t NNP3_16_1ADC /* [0,65535] */;
  uint32_t NNP3_16_2TAC /* [0,65535] */;
  uint32_t NNP3_16_2CLK /* [0,65535] */;
  uint32_t NNP3_16_2ADC /* [0,65535] */;
  uint32_t NNP3_17_1TAC /* [0,65535] */;
  uint32_t NNP3_17_1CLK /* [0,65535] */;
  uint32_t NNP3_17_1ADC /* [0,65535] */;
  uint32_t NNP3_17_2TAC /* [0,65535] */;
  uint32_t NNP3_17_2CLK /* [0,65535] */;
  uint32_t NNP3_17_2ADC /* [0,65535] */;
  uint32_t NNP3_18_1TAC /* [0,65535] */;
  uint32_t NNP3_18_1CLK /* [0,65535] */;
  uint32_t NNP3_18_1ADC /* [0,65535] */;
  uint32_t NNP3_18_2TAC /* [0,65535] */;
  uint32_t NNP3_18_2CLK /* [0,65535] */;
  uint32_t NNP3_18_2ADC /* [0,65535] */;
  uint32_t NNP3_19_1TAC /* [0,65535] */;
  uint32_t NNP3_19_1CLK /* [0,65535] */;
  uint32_t NNP3_19_1ADC /* [0,65535] */;
  uint32_t NNP3_19_2TAC /* [0,65535] */;
  uint32_t NNP3_19_2CLK /* [0,65535] */;
  uint32_t NNP3_19_2ADC /* [0,65535] */;
  uint32_t NNP3_20_1TAC /* [0,65535] */;
  uint32_t NNP3_20_1CLK /* [0,65535] */;
  uint32_t NNP3_20_1ADC /* [0,65535] */;
  uint32_t NNP3_20_2TAC /* [0,65535] */;
  uint32_t NNP3_20_2CLK /* [0,65535] */;
  uint32_t NNP3_20_2ADC /* [0,65535] */;
  uint32_t NNP3_21_1TAC /* [0,65535] */;
  uint32_t NNP3_21_1CLK /* [0,65535] */;
  uint32_t NNP3_21_1ADC /* [0,65535] */;
  uint32_t NNP3_21_2TAC /* [0,65535] */;
  uint32_t NNP3_21_2CLK /* [0,65535] */;
  uint32_t NNP3_21_2ADC /* [0,65535] */;
  uint32_t NNP3_22_1TAC /* [0,65535] */;
  uint32_t NNP3_22_1CLK /* [0,65535] */;
  uint32_t NNP3_22_1ADC /* [0,65535] */;
  uint32_t NNP3_22_2TAC /* [0,65535] */;
  uint32_t NNP3_22_2CLK /* [0,65535] */;
  uint32_t NNP3_22_2ADC /* [0,65535] */;
  uint32_t NNP3_23_1TAC /* [0,65535] */;
  uint32_t NNP3_23_1CLK /* [0,65535] */;
  uint32_t NNP3_23_1ADC /* [0,65535] */;
  uint32_t NNP3_23_2TAC /* [0,65535] */;
  uint32_t NNP3_23_2CLK /* [0,65535] */;
  uint32_t NNP3_23_2ADC /* [0,65535] */;
  uint32_t NNP3_24_1TAC /* [0,65535] */;
  uint32_t NNP3_24_1CLK /* [0,65535] */;
  uint32_t NNP3_24_1ADC /* [0,65535] */;
  uint32_t NNP3_24_2TAC /* [0,65535] */;
  uint32_t NNP3_24_2CLK /* [0,65535] */;
  uint32_t NNP3_24_2ADC /* [0,65535] */;
  uint32_t NNP3_25_1TAC /* [0,65535] */;
  uint32_t NNP3_25_1CLK /* [0,65535] */;
  uint32_t NNP3_25_1ADC /* [0,65535] */;
  uint32_t NNP3_25_2TAC /* [0,65535] */;
  uint32_t NNP3_25_2CLK /* [0,65535] */;
  uint32_t NNP3_25_2ADC /* [0,65535] */;
  uint32_t NNP3_26_1TAC /* [0,65535] */;
  uint32_t NNP3_26_1CLK /* [0,65535] */;
  uint32_t NNP3_26_1ADC /* [0,65535] */;
  uint32_t NNP3_26_2TAC /* [0,65535] */;
  uint32_t NNP3_26_2CLK /* [0,65535] */;
  uint32_t NNP3_26_2ADC /* [0,65535] */;
  uint32_t NNP3_27_1TAC /* [0,65535] */;
  uint32_t NNP3_27_1CLK /* [0,65535] */;
  uint32_t NNP3_27_1ADC /* [0,65535] */;
  uint32_t NNP3_27_2TAC /* [0,65535] */;
  uint32_t NNP3_27_2CLK /* [0,65535] */;
  uint32_t NNP3_27_2ADC /* [0,65535] */;
  uint32_t NNP3_28_1TAC /* [0,65535] */;
  uint32_t NNP3_28_1CLK /* [0,65535] */;
  uint32_t NNP3_28_1ADC /* [0,65535] */;
  uint32_t NNP3_28_2TAC /* [0,65535] */;
  uint32_t NNP3_28_2CLK /* [0,65535] */;
  uint32_t NNP3_28_2ADC /* [0,65535] */;
  uint32_t NNP3_29_1TAC /* [0,65535] */;
  uint32_t NNP3_29_1CLK /* [0,65535] */;
  uint32_t NNP3_29_1ADC /* [0,65535] */;
  uint32_t NNP3_29_2TAC /* [0,65535] */;
  uint32_t NNP3_29_2CLK /* [0,65535] */;
  uint32_t NNP3_29_2ADC /* [0,65535] */;
  uint32_t NNP3_30_1TAC /* [0,65535] */;
  uint32_t NNP3_30_1CLK /* [0,65535] */;
  uint32_t NNP3_30_1ADC /* [0,65535] */;
  uint32_t NNP3_30_2TAC /* [0,65535] */;
  uint32_t NNP3_30_2CLK /* [0,65535] */;
  uint32_t NNP3_30_2ADC /* [0,65535] */;
  uint32_t NNP3_31_1TAC /* [0,65535] */;
  uint32_t NNP3_31_1CLK /* [0,65535] */;
  uint32_t NNP3_31_1ADC /* [0,65535] */;
  uint32_t NNP3_31_2TAC /* [0,65535] */;
  uint32_t NNP3_31_2CLK /* [0,65535] */;
  uint32_t NNP3_31_2ADC /* [0,65535] */;
  uint32_t NNP3_32_1TAC /* [0,65535] */;
  uint32_t NNP3_32_1CLK /* [0,65535] */;
  uint32_t NNP3_32_1ADC /* [0,65535] */;
  uint32_t NNP3_32_2TAC /* [0,65535] */;
  uint32_t NNP3_32_2CLK /* [0,65535] */;
  uint32_t NNP3_32_2ADC /* [0,65535] */;
  uint32_t NNP3_33_1TAC /* [0,65535] */;
  uint32_t NNP3_33_1CLK /* [0,65535] */;
  uint32_t NNP3_33_1ADC /* [0,65535] */;
  uint32_t NNP3_33_2TAC /* [0,65535] */;
  uint32_t NNP3_33_2CLK /* [0,65535] */;
  uint32_t NNP3_33_2ADC /* [0,65535] */;
  uint32_t NNP3_34_1TAC /* [0,65535] */;
  uint32_t NNP3_34_1CLK /* [0,65535] */;
  uint32_t NNP3_34_1ADC /* [0,65535] */;
  uint32_t NNP3_34_2TAC /* [0,65535] */;
  uint32_t NNP3_34_2CLK /* [0,65535] */;
  uint32_t NNP3_34_2ADC /* [0,65535] */;
  uint32_t NNP3_35_1TAC /* [0,65535] */;
  uint32_t NNP3_35_1CLK /* [0,65535] */;
  uint32_t NNP3_35_1ADC /* [0,65535] */;
  uint32_t NNP3_35_2TAC /* [0,65535] */;
  uint32_t NNP3_35_2CLK /* [0,65535] */;
  uint32_t NNP3_35_2ADC /* [0,65535] */;
  uint32_t NNP3_36_1TAC /* [0,65535] */;
  uint32_t NNP3_36_1CLK /* [0,65535] */;
  uint32_t NNP3_36_1ADC /* [0,65535] */;
  uint32_t NNP3_36_2TAC /* [0,65535] */;
  uint32_t NNP3_36_2CLK /* [0,65535] */;
  uint32_t NNP3_36_2ADC /* [0,65535] */;
  uint32_t NNP3_37_1TAC /* [0,65535] */;
  uint32_t NNP3_37_1CLK /* [0,65535] */;
  uint32_t NNP3_37_1ADC /* [0,65535] */;
  uint32_t NNP3_37_2TAC /* [0,65535] */;
  uint32_t NNP3_37_2CLK /* [0,65535] */;
  uint32_t NNP3_37_2ADC /* [0,65535] */;
  uint32_t NNP3_38_1TAC /* [0,65535] */;
  uint32_t NNP3_38_1CLK /* [0,65535] */;
  uint32_t NNP3_38_1ADC /* [0,65535] */;
  uint32_t NNP3_38_2TAC /* [0,65535] */;
  uint32_t NNP3_38_2CLK /* [0,65535] */;
  uint32_t NNP3_38_2ADC /* [0,65535] */;
  uint32_t NNP3_39_1TAC /* [0,65535] */;
  uint32_t NNP3_39_1CLK /* [0,65535] */;
  uint32_t NNP3_39_1ADC /* [0,65535] */;
  uint32_t NNP3_39_2TAC /* [0,65535] */;
  uint32_t NNP3_39_2CLK /* [0,65535] */;
  uint32_t NNP3_39_2ADC /* [0,65535] */;
  uint32_t NNP3_40_1TAC /* [0,65535] */;
  uint32_t NNP3_40_1CLK /* [0,65535] */;
  uint32_t NNP3_40_1ADC /* [0,65535] */;
  uint32_t NNP3_40_2TAC /* [0,65535] */;
  uint32_t NNP3_40_2CLK /* [0,65535] */;
  uint32_t NNP3_40_2ADC /* [0,65535] */;
  uint32_t NNP3_41_1TAC /* [0,65535] */;
  uint32_t NNP3_41_1CLK /* [0,65535] */;
  uint32_t NNP3_41_1ADC /* [0,65535] */;
  uint32_t NNP3_41_2TAC /* [0,65535] */;
  uint32_t NNP3_41_2CLK /* [0,65535] */;
  uint32_t NNP3_41_2ADC /* [0,65535] */;
  uint32_t NNP3_42_1TAC /* [0,65535] */;
  uint32_t NNP3_42_1CLK /* [0,65535] */;
  uint32_t NNP3_42_1ADC /* [0,65535] */;
  uint32_t NNP3_42_2TAC /* [0,65535] */;
  uint32_t NNP3_42_2CLK /* [0,65535] */;
  uint32_t NNP3_42_2ADC /* [0,65535] */;
  uint32_t NNP3_43_1TAC /* [0,65535] */;
  uint32_t NNP3_43_1CLK /* [0,65535] */;
  uint32_t NNP3_43_1ADC /* [0,65535] */;
  uint32_t NNP3_43_2TAC /* [0,65535] */;
  uint32_t NNP3_43_2CLK /* [0,65535] */;
  uint32_t NNP3_43_2ADC /* [0,65535] */;
  uint32_t NNP3_44_1TAC /* [0,65535] */;
  uint32_t NNP3_44_1CLK /* [0,65535] */;
  uint32_t NNP3_44_1ADC /* [0,65535] */;
  uint32_t NNP3_44_2TAC /* [0,65535] */;
  uint32_t NNP3_44_2CLK /* [0,65535] */;
  uint32_t NNP3_44_2ADC /* [0,65535] */;
  uint32_t NNP3_45_1TAC /* [0,65535] */;
  uint32_t NNP3_45_1CLK /* [0,65535] */;
  uint32_t NNP3_45_1ADC /* [0,65535] */;
  uint32_t NNP3_45_2TAC /* [0,65535] */;
  uint32_t NNP3_45_2CLK /* [0,65535] */;
  uint32_t NNP3_45_2ADC /* [0,65535] */;
  uint32_t NNP3_46_1TAC /* [0,65535] */;
  uint32_t NNP3_46_1CLK /* [0,65535] */;
  uint32_t NNP3_46_1ADC /* [0,65535] */;
  uint32_t NNP3_46_2TAC /* [0,65535] */;
  uint32_t NNP3_46_2CLK /* [0,65535] */;
  uint32_t NNP3_46_2ADC /* [0,65535] */;
  uint32_t NNP3_47_1TAC /* [0,65535] */;
  uint32_t NNP3_47_1CLK /* [0,65535] */;
  uint32_t NNP3_47_1ADC /* [0,65535] */;
  uint32_t NNP3_47_2TAC /* [0,65535] */;
  uint32_t NNP3_47_2CLK /* [0,65535] */;
  uint32_t NNP3_47_2ADC /* [0,65535] */;
  uint32_t NNP3_48_1TAC /* [0,65535] */;
  uint32_t NNP3_48_1CLK /* [0,65535] */;
  uint32_t NNP3_48_1ADC /* [0,65535] */;
  uint32_t NNP3_48_2TAC /* [0,65535] */;
  uint32_t NNP3_48_2CLK /* [0,65535] */;
  uint32_t NNP3_48_2ADC /* [0,65535] */;
  uint32_t NNP3_49_1TAC /* [0,65535] */;
  uint32_t NNP3_49_1CLK /* [0,65535] */;
  uint32_t NNP3_49_1ADC /* [0,65535] */;
  uint32_t NNP3_49_2TAC /* [0,65535] */;
  uint32_t NNP3_49_2CLK /* [0,65535] */;
  uint32_t NNP3_49_2ADC /* [0,65535] */;
  uint32_t NNP3_50_1TAC /* [0,65535] */;
  uint32_t NNP3_50_1CLK /* [0,65535] */;
  uint32_t NNP3_50_1ADC /* [0,65535] */;
  uint32_t NNP3_50_2TAC /* [0,65535] */;
  uint32_t NNP3_50_2CLK /* [0,65535] */;
  uint32_t NNP3_50_2ADC /* [0,65535] */;
  uint32_t NNP4_1_1TAC /* [0,65535] */;
  uint32_t NNP4_1_1CLK /* [0,65535] */;
  uint32_t NNP4_1_1ADC /* [0,65535] */;
  uint32_t NNP4_1_2TAC /* [0,65535] */;
  uint32_t NNP4_1_2CLK /* [0,65535] */;
  uint32_t NNP4_1_2ADC /* [0,65535] */;
  uint32_t NNP4_2_1TAC /* [0,65535] */;
  uint32_t NNP4_2_1CLK /* [0,65535] */;
  uint32_t NNP4_2_1ADC /* [0,65535] */;
  uint32_t NNP4_2_2TAC /* [0,65535] */;
  uint32_t NNP4_2_2CLK /* [0,65535] */;
  uint32_t NNP4_2_2ADC /* [0,65535] */;
  uint32_t NNP4_3_1TAC /* [0,65535] */;
  uint32_t NNP4_3_1CLK /* [0,65535] */;
  uint32_t NNP4_3_1ADC /* [0,65535] */;
  uint32_t NNP4_3_2TAC /* [0,65535] */;
  uint32_t NNP4_3_2CLK /* [0,65535] */;
  uint32_t NNP4_3_2ADC /* [0,65535] */;
  uint32_t NNP4_4_1TAC /* [0,65535] */;
  uint32_t NNP4_4_1CLK /* [0,65535] */;
  uint32_t NNP4_4_1ADC /* [0,65535] */;
  uint32_t NNP4_4_2TAC /* [0,65535] */;
  uint32_t NNP4_4_2CLK /* [0,65535] */;
  uint32_t NNP4_4_2ADC /* [0,65535] */;
  uint32_t NNP4_5_1TAC /* [0,65535] */;
  uint32_t NNP4_5_1CLK /* [0,65535] */;
  uint32_t NNP4_5_1ADC /* [0,65535] */;
  uint32_t NNP4_5_2TAC /* [0,65535] */;
  uint32_t NNP4_5_2CLK /* [0,65535] */;
  uint32_t NNP4_5_2ADC /* [0,65535] */;
  uint32_t NNP4_6_1TAC /* [0,65535] */;
  uint32_t NNP4_6_1CLK /* [0,65535] */;
  uint32_t NNP4_6_1ADC /* [0,65535] */;
  uint32_t NNP4_6_2TAC /* [0,65535] */;
  uint32_t NNP4_6_2CLK /* [0,65535] */;
  uint32_t NNP4_6_2ADC /* [0,65535] */;
  uint32_t NNP4_7_1TAC /* [0,65535] */;
  uint32_t NNP4_7_1CLK /* [0,65535] */;
  uint32_t NNP4_7_1ADC /* [0,65535] */;
  uint32_t NNP4_7_2TAC /* [0,65535] */;
  uint32_t NNP4_7_2CLK /* [0,65535] */;
  uint32_t NNP4_7_2ADC /* [0,65535] */;
  uint32_t NNP4_8_1TAC /* [0,65535] */;
  uint32_t NNP4_8_1CLK /* [0,65535] */;
  uint32_t NNP4_8_1ADC /* [0,65535] */;
  uint32_t NNP4_8_2TAC /* [0,65535] */;
  uint32_t NNP4_8_2CLK /* [0,65535] */;
  uint32_t NNP4_8_2ADC /* [0,65535] */;
  uint32_t NNP4_9_1TAC /* [0,65535] */;
  uint32_t NNP4_9_1CLK /* [0,65535] */;
  uint32_t NNP4_9_1ADC /* [0,65535] */;
  uint32_t NNP4_9_2TAC /* [0,65535] */;
  uint32_t NNP4_9_2CLK /* [0,65535] */;
  uint32_t NNP4_9_2ADC /* [0,65535] */;
  uint32_t NNP4_10_1TAC /* [0,65535] */;
  uint32_t NNP4_10_1CLK /* [0,65535] */;
  uint32_t NNP4_10_1ADC /* [0,65535] */;
  uint32_t NNP4_10_2TAC /* [0,65535] */;
  uint32_t NNP4_10_2CLK /* [0,65535] */;
  uint32_t NNP4_10_2ADC /* [0,65535] */;
  uint32_t NNP4_11_1TAC /* [0,65535] */;
  uint32_t NNP4_11_1CLK /* [0,65535] */;
  uint32_t NNP4_11_1ADC /* [0,65535] */;
  uint32_t NNP4_11_2TAC /* [0,65535] */;
  uint32_t NNP4_11_2CLK /* [0,65535] */;
  uint32_t NNP4_11_2ADC /* [0,65535] */;
  uint32_t NNP4_12_1TAC /* [0,65535] */;
  uint32_t NNP4_12_1CLK /* [0,65535] */;
  uint32_t NNP4_12_1ADC /* [0,65535] */;
  uint32_t NNP4_12_2TAC /* [0,65535] */;
  uint32_t NNP4_12_2CLK /* [0,65535] */;
  uint32_t NNP4_12_2ADC /* [0,65535] */;
  uint32_t NNP4_13_1TAC /* [0,65535] */;
  uint32_t NNP4_13_1CLK /* [0,65535] */;
  uint32_t NNP4_13_1ADC /* [0,65535] */;
  uint32_t NNP4_13_2TAC /* [0,65535] */;
  uint32_t NNP4_13_2CLK /* [0,65535] */;
  uint32_t NNP4_13_2ADC /* [0,65535] */;
  uint32_t NNP4_14_1TAC /* [0,65535] */;
  uint32_t NNP4_14_1CLK /* [0,65535] */;
  uint32_t NNP4_14_1ADC /* [0,65535] */;
  uint32_t NNP4_14_2TAC /* [0,65535] */;
  uint32_t NNP4_14_2CLK /* [0,65535] */;
  uint32_t NNP4_14_2ADC /* [0,65535] */;
  uint32_t NNP4_15_1TAC /* [0,65535] */;
  uint32_t NNP4_15_1CLK /* [0,65535] */;
  uint32_t NNP4_15_1ADC /* [0,65535] */;
  uint32_t NNP4_15_2TAC /* [0,65535] */;
  uint32_t NNP4_15_2CLK /* [0,65535] */;
  uint32_t NNP4_15_2ADC /* [0,65535] */;
  uint32_t NNP4_16_1TAC /* [0,65535] */;
  uint32_t NNP4_16_1CLK /* [0,65535] */;
  uint32_t NNP4_16_1ADC /* [0,65535] */;
  uint32_t NNP4_16_2TAC /* [0,65535] */;
  uint32_t NNP4_16_2CLK /* [0,65535] */;
  uint32_t NNP4_16_2ADC /* [0,65535] */;
  uint32_t NNP4_17_1TAC /* [0,65535] */;
  uint32_t NNP4_17_1CLK /* [0,65535] */;
  uint32_t NNP4_17_1ADC /* [0,65535] */;
  uint32_t NNP4_17_2TAC /* [0,65535] */;
  uint32_t NNP4_17_2CLK /* [0,65535] */;
  uint32_t NNP4_17_2ADC /* [0,65535] */;
  uint32_t NNP4_18_1TAC /* [0,65535] */;
  uint32_t NNP4_18_1CLK /* [0,65535] */;
  uint32_t NNP4_18_1ADC /* [0,65535] */;
  uint32_t NNP4_18_2TAC /* [0,65535] */;
  uint32_t NNP4_18_2CLK /* [0,65535] */;
  uint32_t NNP4_18_2ADC /* [0,65535] */;
  uint32_t NNP4_19_1TAC /* [0,65535] */;
  uint32_t NNP4_19_1CLK /* [0,65535] */;
  uint32_t NNP4_19_1ADC /* [0,65535] */;
  uint32_t NNP4_19_2TAC /* [0,65535] */;
  uint32_t NNP4_19_2CLK /* [0,65535] */;
  uint32_t NNP4_19_2ADC /* [0,65535] */;
  uint32_t NNP4_20_1TAC /* [0,65535] */;
  uint32_t NNP4_20_1CLK /* [0,65535] */;
  uint32_t NNP4_20_1ADC /* [0,65535] */;
  uint32_t NNP4_20_2TAC /* [0,65535] */;
  uint32_t NNP4_20_2CLK /* [0,65535] */;
  uint32_t NNP4_20_2ADC /* [0,65535] */;
  uint32_t NNP4_21_1TAC /* [0,65535] */;
  uint32_t NNP4_21_1CLK /* [0,65535] */;
  uint32_t NNP4_21_1ADC /* [0,65535] */;
  uint32_t NNP4_21_2TAC /* [0,65535] */;
  uint32_t NNP4_21_2CLK /* [0,65535] */;
  uint32_t NNP4_21_2ADC /* [0,65535] */;
  uint32_t NNP4_22_1TAC /* [0,65535] */;
  uint32_t NNP4_22_1CLK /* [0,65535] */;
  uint32_t NNP4_22_1ADC /* [0,65535] */;
  uint32_t NNP4_22_2TAC /* [0,65535] */;
  uint32_t NNP4_22_2CLK /* [0,65535] */;
  uint32_t NNP4_22_2ADC /* [0,65535] */;
  uint32_t NNP4_23_1TAC /* [0,65535] */;
  uint32_t NNP4_23_1CLK /* [0,65535] */;
  uint32_t NNP4_23_1ADC /* [0,65535] */;
  uint32_t NNP4_23_2TAC /* [0,65535] */;
  uint32_t NNP4_23_2CLK /* [0,65535] */;
  uint32_t NNP4_23_2ADC /* [0,65535] */;
  uint32_t NNP4_24_1TAC /* [0,65535] */;
  uint32_t NNP4_24_1CLK /* [0,65535] */;
  uint32_t NNP4_24_1ADC /* [0,65535] */;
  uint32_t NNP4_24_2TAC /* [0,65535] */;
  uint32_t NNP4_24_2CLK /* [0,65535] */;
  uint32_t NNP4_24_2ADC /* [0,65535] */;
  uint32_t NNP4_25_1TAC /* [0,65535] */;
  uint32_t NNP4_25_1CLK /* [0,65535] */;
  uint32_t NNP4_25_1ADC /* [0,65535] */;
  uint32_t NNP4_25_2TAC /* [0,65535] */;
  uint32_t NNP4_25_2CLK /* [0,65535] */;
  uint32_t NNP4_25_2ADC /* [0,65535] */;
  uint32_t NNP4_26_1TAC /* [0,65535] */;
  uint32_t NNP4_26_1CLK /* [0,65535] */;
  uint32_t NNP4_26_1ADC /* [0,65535] */;
  uint32_t NNP4_26_2TAC /* [0,65535] */;
  uint32_t NNP4_26_2CLK /* [0,65535] */;
  uint32_t NNP4_26_2ADC /* [0,65535] */;
  uint32_t NNP4_27_1TAC /* [0,65535] */;
  uint32_t NNP4_27_1CLK /* [0,65535] */;
  uint32_t NNP4_27_1ADC /* [0,65535] */;
  uint32_t NNP4_27_2TAC /* [0,65535] */;
  uint32_t NNP4_27_2CLK /* [0,65535] */;
  uint32_t NNP4_27_2ADC /* [0,65535] */;
  uint32_t NNP4_28_1TAC /* [0,65535] */;
  uint32_t NNP4_28_1CLK /* [0,65535] */;
  uint32_t NNP4_28_1ADC /* [0,65535] */;
  uint32_t NNP4_28_2TAC /* [0,65535] */;
  uint32_t NNP4_28_2CLK /* [0,65535] */;
  uint32_t NNP4_28_2ADC /* [0,65535] */;
  uint32_t NNP4_29_1TAC /* [0,65535] */;
  uint32_t NNP4_29_1CLK /* [0,65535] */;
  uint32_t NNP4_29_1ADC /* [0,65535] */;
  uint32_t NNP4_29_2TAC /* [0,65535] */;
  uint32_t NNP4_29_2CLK /* [0,65535] */;
  uint32_t NNP4_29_2ADC /* [0,65535] */;
  uint32_t NNP4_30_1TAC /* [0,65535] */;
  uint32_t NNP4_30_1CLK /* [0,65535] */;
  uint32_t NNP4_30_1ADC /* [0,65535] */;
  uint32_t NNP4_30_2TAC /* [0,65535] */;
  uint32_t NNP4_30_2CLK /* [0,65535] */;
  uint32_t NNP4_30_2ADC /* [0,65535] */;
  uint32_t NNP4_31_1TAC /* [0,65535] */;
  uint32_t NNP4_31_1CLK /* [0,65535] */;
  uint32_t NNP4_31_1ADC /* [0,65535] */;
  uint32_t NNP4_31_2TAC /* [0,65535] */;
  uint32_t NNP4_31_2CLK /* [0,65535] */;
  uint32_t NNP4_31_2ADC /* [0,65535] */;
  uint32_t NNP4_32_1TAC /* [0,65535] */;
  uint32_t NNP4_32_1CLK /* [0,65535] */;
  uint32_t NNP4_32_1ADC /* [0,65535] */;
  uint32_t NNP4_32_2TAC /* [0,65535] */;
  uint32_t NNP4_32_2CLK /* [0,65535] */;
  uint32_t NNP4_32_2ADC /* [0,65535] */;
  uint32_t NNP4_33_1TAC /* [0,65535] */;
  uint32_t NNP4_33_1CLK /* [0,65535] */;
  uint32_t NNP4_33_1ADC /* [0,65535] */;
  uint32_t NNP4_33_2TAC /* [0,65535] */;
  uint32_t NNP4_33_2CLK /* [0,65535] */;
  uint32_t NNP4_33_2ADC /* [0,65535] */;
  uint32_t NNP4_34_1TAC /* [0,65535] */;
  uint32_t NNP4_34_1CLK /* [0,65535] */;
  uint32_t NNP4_34_1ADC /* [0,65535] */;
  uint32_t NNP4_34_2TAC /* [0,65535] */;
  uint32_t NNP4_34_2CLK /* [0,65535] */;
  uint32_t NNP4_34_2ADC /* [0,65535] */;
  uint32_t NNP4_35_1TAC /* [0,65535] */;
  uint32_t NNP4_35_1CLK /* [0,65535] */;
  uint32_t NNP4_35_1ADC /* [0,65535] */;
  uint32_t NNP4_35_2TAC /* [0,65535] */;
  uint32_t NNP4_35_2CLK /* [0,65535] */;
  uint32_t NNP4_35_2ADC /* [0,65535] */;
  uint32_t NNP4_36_1TAC /* [0,65535] */;
  uint32_t NNP4_36_1CLK /* [0,65535] */;
  uint32_t NNP4_36_1ADC /* [0,65535] */;
  uint32_t NNP4_36_2TAC /* [0,65535] */;
  uint32_t NNP4_36_2CLK /* [0,65535] */;
  uint32_t NNP4_36_2ADC /* [0,65535] */;
  uint32_t NNP4_37_1TAC /* [0,65535] */;
  uint32_t NNP4_37_1CLK /* [0,65535] */;
  uint32_t NNP4_37_1ADC /* [0,65535] */;
  uint32_t NNP4_37_2TAC /* [0,65535] */;
  uint32_t NNP4_37_2CLK /* [0,65535] */;
  uint32_t NNP4_37_2ADC /* [0,65535] */;
  uint32_t NNP4_38_1TAC /* [0,65535] */;
  uint32_t NNP4_38_1CLK /* [0,65535] */;
  uint32_t NNP4_38_1ADC /* [0,65535] */;
  uint32_t NNP4_38_2TAC /* [0,65535] */;
  uint32_t NNP4_38_2CLK /* [0,65535] */;
  uint32_t NNP4_38_2ADC /* [0,65535] */;
  uint32_t NNP4_39_1TAC /* [0,65535] */;
  uint32_t NNP4_39_1CLK /* [0,65535] */;
  uint32_t NNP4_39_1ADC /* [0,65535] */;
  uint32_t NNP4_39_2TAC /* [0,65535] */;
  uint32_t NNP4_39_2CLK /* [0,65535] */;
  uint32_t NNP4_39_2ADC /* [0,65535] */;
  uint32_t NNP4_40_1TAC /* [0,65535] */;
  uint32_t NNP4_40_1CLK /* [0,65535] */;
  uint32_t NNP4_40_1ADC /* [0,65535] */;
  uint32_t NNP4_40_2TAC /* [0,65535] */;
  uint32_t NNP4_40_2CLK /* [0,65535] */;
  uint32_t NNP4_40_2ADC /* [0,65535] */;
  uint32_t NNP4_41_1TAC /* [0,65535] */;
  uint32_t NNP4_41_1CLK /* [0,65535] */;
  uint32_t NNP4_41_1ADC /* [0,65535] */;
  uint32_t NNP4_41_2TAC /* [0,65535] */;
  uint32_t NNP4_41_2CLK /* [0,65535] */;
  uint32_t NNP4_41_2ADC /* [0,65535] */;
  uint32_t NNP4_42_1TAC /* [0,65535] */;
  uint32_t NNP4_42_1CLK /* [0,65535] */;
  uint32_t NNP4_42_1ADC /* [0,65535] */;
  uint32_t NNP4_42_2TAC /* [0,65535] */;
  uint32_t NNP4_42_2CLK /* [0,65535] */;
  uint32_t NNP4_42_2ADC /* [0,65535] */;
  uint32_t NNP4_43_1TAC /* [0,65535] */;
  uint32_t NNP4_43_1CLK /* [0,65535] */;
  uint32_t NNP4_43_1ADC /* [0,65535] */;
  uint32_t NNP4_43_2TAC /* [0,65535] */;
  uint32_t NNP4_43_2CLK /* [0,65535] */;
  uint32_t NNP4_43_2ADC /* [0,65535] */;
  uint32_t NNP4_44_1TAC /* [0,65535] */;
  uint32_t NNP4_44_1CLK /* [0,65535] */;
  uint32_t NNP4_44_1ADC /* [0,65535] */;
  uint32_t NNP4_44_2TAC /* [0,65535] */;
  uint32_t NNP4_44_2CLK /* [0,65535] */;
  uint32_t NNP4_44_2ADC /* [0,65535] */;
  uint32_t NNP4_45_1TAC /* [0,65535] */;
  uint32_t NNP4_45_1CLK /* [0,65535] */;
  uint32_t NNP4_45_1ADC /* [0,65535] */;
  uint32_t NNP4_45_2TAC /* [0,65535] */;
  uint32_t NNP4_45_2CLK /* [0,65535] */;
  uint32_t NNP4_45_2ADC /* [0,65535] */;
  uint32_t NNP4_46_1TAC /* [0,65535] */;
  uint32_t NNP4_46_1CLK /* [0,65535] */;
  uint32_t NNP4_46_1ADC /* [0,65535] */;
  uint32_t NNP4_46_2TAC /* [0,65535] */;
  uint32_t NNP4_46_2CLK /* [0,65535] */;
  uint32_t NNP4_46_2ADC /* [0,65535] */;
  uint32_t NNP4_47_1TAC /* [0,65535] */;
  uint32_t NNP4_47_1CLK /* [0,65535] */;
  uint32_t NNP4_47_1ADC /* [0,65535] */;
  uint32_t NNP4_47_2TAC /* [0,65535] */;
  uint32_t NNP4_47_2CLK /* [0,65535] */;
  uint32_t NNP4_47_2ADC /* [0,65535] */;
  uint32_t NNP4_48_1TAC /* [0,65535] */;
  uint32_t NNP4_48_1CLK /* [0,65535] */;
  uint32_t NNP4_48_1ADC /* [0,65535] */;
  uint32_t NNP4_48_2TAC /* [0,65535] */;
  uint32_t NNP4_48_2CLK /* [0,65535] */;
  uint32_t NNP4_48_2ADC /* [0,65535] */;
  uint32_t NNP4_49_1TAC /* [0,65535] */;
  uint32_t NNP4_49_1CLK /* [0,65535] */;
  uint32_t NNP4_49_1ADC /* [0,65535] */;
  uint32_t NNP4_49_2TAC /* [0,65535] */;
  uint32_t NNP4_49_2CLK /* [0,65535] */;
  uint32_t NNP4_49_2ADC /* [0,65535] */;
  uint32_t NNP4_50_1TAC /* [0,65535] */;
  uint32_t NNP4_50_1CLK /* [0,65535] */;
  uint32_t NNP4_50_1ADC /* [0,65535] */;
  uint32_t NNP4_50_2TAC /* [0,65535] */;
  uint32_t NNP4_50_2CLK /* [0,65535] */;
  uint32_t NNP4_50_2ADC /* [0,65535] */;
  uint32_t NNP5_1_1TAC /* [0,65535] */;
  uint32_t NNP5_1_1CLK /* [0,65535] */;
  uint32_t NNP5_1_1ADC /* [0,65535] */;
  uint32_t NNP5_1_2TAC /* [0,65535] */;
  uint32_t NNP5_1_2CLK /* [0,65535] */;
  uint32_t NNP5_1_2ADC /* [0,65535] */;
  uint32_t NNP5_2_1TAC /* [0,65535] */;
  uint32_t NNP5_2_1CLK /* [0,65535] */;
  uint32_t NNP5_2_1ADC /* [0,65535] */;
  uint32_t NNP5_2_2TAC /* [0,65535] */;
  uint32_t NNP5_2_2CLK /* [0,65535] */;
  uint32_t NNP5_2_2ADC /* [0,65535] */;
  uint32_t NNP5_3_1TAC /* [0,65535] */;
  uint32_t NNP5_3_1CLK /* [0,65535] */;
  uint32_t NNP5_3_1ADC /* [0,65535] */;
  uint32_t NNP5_3_2TAC /* [0,65535] */;
  uint32_t NNP5_3_2CLK /* [0,65535] */;
  uint32_t NNP5_3_2ADC /* [0,65535] */;
  uint32_t NNP5_4_1TAC /* [0,65535] */;
  uint32_t NNP5_4_1CLK /* [0,65535] */;
  uint32_t NNP5_4_1ADC /* [0,65535] */;
  uint32_t NNP5_4_2TAC /* [0,65535] */;
  uint32_t NNP5_4_2CLK /* [0,65535] */;
  uint32_t NNP5_4_2ADC /* [0,65535] */;
  uint32_t NNP5_5_1TAC /* [0,65535] */;
  uint32_t NNP5_5_1CLK /* [0,65535] */;
  uint32_t NNP5_5_1ADC /* [0,65535] */;
  uint32_t NNP5_5_2TAC /* [0,65535] */;
  uint32_t NNP5_5_2CLK /* [0,65535] */;
  uint32_t NNP5_5_2ADC /* [0,65535] */;
  uint32_t NNP5_6_1TAC /* [0,65535] */;
  uint32_t NNP5_6_1CLK /* [0,65535] */;
  uint32_t NNP5_6_1ADC /* [0,65535] */;
  uint32_t NNP5_6_2TAC /* [0,65535] */;
  uint32_t NNP5_6_2CLK /* [0,65535] */;
  uint32_t NNP5_6_2ADC /* [0,65535] */;
  uint32_t NNP5_7_1TAC /* [0,65535] */;
  uint32_t NNP5_7_1CLK /* [0,65535] */;
  uint32_t NNP5_7_1ADC /* [0,65535] */;
  uint32_t NNP5_7_2TAC /* [0,65535] */;
  uint32_t NNP5_7_2CLK /* [0,65535] */;
  uint32_t NNP5_7_2ADC /* [0,65535] */;
  uint32_t NNP5_8_1TAC /* [0,65535] */;
  uint32_t NNP5_8_1CLK /* [0,65535] */;
  uint32_t NNP5_8_1ADC /* [0,65535] */;
  uint32_t NNP5_8_2TAC /* [0,65535] */;
  uint32_t NNP5_8_2CLK /* [0,65535] */;
  uint32_t NNP5_8_2ADC /* [0,65535] */;
  uint32_t NNP5_9_1TAC /* [0,65535] */;
  uint32_t NNP5_9_1CLK /* [0,65535] */;
  uint32_t NNP5_9_1ADC /* [0,65535] */;
  uint32_t NNP5_9_2TAC /* [0,65535] */;
  uint32_t NNP5_9_2CLK /* [0,65535] */;
  uint32_t NNP5_9_2ADC /* [0,65535] */;
  uint32_t NNP5_10_1TAC /* [0,65535] */;
  uint32_t NNP5_10_1CLK /* [0,65535] */;
  uint32_t NNP5_10_1ADC /* [0,65535] */;
  uint32_t NNP5_10_2TAC /* [0,65535] */;
  uint32_t NNP5_10_2CLK /* [0,65535] */;
  uint32_t NNP5_10_2ADC /* [0,65535] */;
  uint32_t NNP5_11_1TAC /* [0,65535] */;
  uint32_t NNP5_11_1CLK /* [0,65535] */;
  uint32_t NNP5_11_1ADC /* [0,65535] */;
  uint32_t NNP5_11_2TAC /* [0,65535] */;
  uint32_t NNP5_11_2CLK /* [0,65535] */;
  uint32_t NNP5_11_2ADC /* [0,65535] */;
  uint32_t NNP5_12_1TAC /* [0,65535] */;
  uint32_t NNP5_12_1CLK /* [0,65535] */;
  uint32_t NNP5_12_1ADC /* [0,65535] */;
  uint32_t NNP5_12_2TAC /* [0,65535] */;
  uint32_t NNP5_12_2CLK /* [0,65535] */;
  uint32_t NNP5_12_2ADC /* [0,65535] */;
  uint32_t NNP5_13_1TAC /* [0,65535] */;
  uint32_t NNP5_13_1CLK /* [0,65535] */;
  uint32_t NNP5_13_1ADC /* [0,65535] */;
  uint32_t NNP5_13_2TAC /* [0,65535] */;
  uint32_t NNP5_13_2CLK /* [0,65535] */;
  uint32_t NNP5_13_2ADC /* [0,65535] */;
  uint32_t NNP5_14_1TAC /* [0,65535] */;
  uint32_t NNP5_14_1CLK /* [0,65535] */;
  uint32_t NNP5_14_1ADC /* [0,65535] */;
  uint32_t NNP5_14_2TAC /* [0,65535] */;
  uint32_t NNP5_14_2CLK /* [0,65535] */;
  uint32_t NNP5_14_2ADC /* [0,65535] */;
  uint32_t NNP5_15_1TAC /* [0,65535] */;
  uint32_t NNP5_15_1CLK /* [0,65535] */;
  uint32_t NNP5_15_1ADC /* [0,65535] */;
  uint32_t NNP5_15_2TAC /* [0,65535] */;
  uint32_t NNP5_15_2CLK /* [0,65535] */;
  uint32_t NNP5_15_2ADC /* [0,65535] */;
  uint32_t NNP5_16_1TAC /* [0,65535] */;
  uint32_t NNP5_16_1CLK /* [0,65535] */;
  uint32_t NNP5_16_1ADC /* [0,65535] */;
  uint32_t NNP5_16_2TAC /* [0,65535] */;
  uint32_t NNP5_16_2CLK /* [0,65535] */;
  uint32_t NNP5_16_2ADC /* [0,65535] */;
  uint32_t NNP5_17_1TAC /* [0,65535] */;
  uint32_t NNP5_17_1CLK /* [0,65535] */;
  uint32_t NNP5_17_1ADC /* [0,65535] */;
  uint32_t NNP5_17_2TAC /* [0,65535] */;
  uint32_t NNP5_17_2CLK /* [0,65535] */;
  uint32_t NNP5_17_2ADC /* [0,65535] */;
  uint32_t NNP5_18_1TAC /* [0,65535] */;
  uint32_t NNP5_18_1CLK /* [0,65535] */;
  uint32_t NNP5_18_1ADC /* [0,65535] */;
  uint32_t NNP5_18_2TAC /* [0,65535] */;
  uint32_t NNP5_18_2CLK /* [0,65535] */;
  uint32_t NNP5_18_2ADC /* [0,65535] */;
  uint32_t NNP5_19_1TAC /* [0,65535] */;
  uint32_t NNP5_19_1CLK /* [0,65535] */;
  uint32_t NNP5_19_1ADC /* [0,65535] */;
  uint32_t NNP5_19_2TAC /* [0,65535] */;
  uint32_t NNP5_19_2CLK /* [0,65535] */;
  uint32_t NNP5_19_2ADC /* [0,65535] */;
  uint32_t NNP5_20_1TAC /* [0,65535] */;
  uint32_t NNP5_20_1CLK /* [0,65535] */;
  uint32_t NNP5_20_1ADC /* [0,65535] */;
  uint32_t NNP5_20_2TAC /* [0,65535] */;
  uint32_t NNP5_20_2CLK /* [0,65535] */;
  uint32_t NNP5_20_2ADC /* [0,65535] */;
  uint32_t NNP5_21_1TAC /* [0,65535] */;
  uint32_t NNP5_21_1CLK /* [0,65535] */;
  uint32_t NNP5_21_1ADC /* [0,65535] */;
  uint32_t NNP5_21_2TAC /* [0,65535] */;
  uint32_t NNP5_21_2CLK /* [0,65535] */;
  uint32_t NNP5_21_2ADC /* [0,65535] */;
  uint32_t NNP5_22_1TAC /* [0,65535] */;
  uint32_t NNP5_22_1CLK /* [0,65535] */;
  uint32_t NNP5_22_1ADC /* [0,65535] */;
  uint32_t NNP5_22_2TAC /* [0,65535] */;
  uint32_t NNP5_22_2CLK /* [0,65535] */;
  uint32_t NNP5_22_2ADC /* [0,65535] */;
  uint32_t NNP5_23_1TAC /* [0,65535] */;
  uint32_t NNP5_23_1CLK /* [0,65535] */;
  uint32_t NNP5_23_1ADC /* [0,65535] */;
  uint32_t NNP5_23_2TAC /* [0,65535] */;
  uint32_t NNP5_23_2CLK /* [0,65535] */;
  uint32_t NNP5_23_2ADC /* [0,65535] */;
  uint32_t NNP5_24_1TAC /* [0,65535] */;
  uint32_t NNP5_24_1CLK /* [0,65535] */;
  uint32_t NNP5_24_1ADC /* [0,65535] */;
  uint32_t NNP5_24_2TAC /* [0,65535] */;
  uint32_t NNP5_24_2CLK /* [0,65535] */;
  uint32_t NNP5_24_2ADC /* [0,65535] */;
  uint32_t NNP5_25_1TAC /* [0,65535] */;
  uint32_t NNP5_25_1CLK /* [0,65535] */;
  uint32_t NNP5_25_1ADC /* [0,65535] */;
  uint32_t NNP5_25_2TAC /* [0,65535] */;
  uint32_t NNP5_25_2CLK /* [0,65535] */;
  uint32_t NNP5_25_2ADC /* [0,65535] */;
  uint32_t NNP5_26_1TAC /* [0,65535] */;
  uint32_t NNP5_26_1CLK /* [0,65535] */;
  uint32_t NNP5_26_1ADC /* [0,65535] */;
  uint32_t NNP5_26_2TAC /* [0,65535] */;
  uint32_t NNP5_26_2CLK /* [0,65535] */;
  uint32_t NNP5_26_2ADC /* [0,65535] */;
  uint32_t NNP5_27_1TAC /* [0,65535] */;
  uint32_t NNP5_27_1CLK /* [0,65535] */;
  uint32_t NNP5_27_1ADC /* [0,65535] */;
  uint32_t NNP5_27_2TAC /* [0,65535] */;
  uint32_t NNP5_27_2CLK /* [0,65535] */;
  uint32_t NNP5_27_2ADC /* [0,65535] */;
  uint32_t NNP5_28_1TAC /* [0,65535] */;
  uint32_t NNP5_28_1CLK /* [0,65535] */;
  uint32_t NNP5_28_1ADC /* [0,65535] */;
  uint32_t NNP5_28_2TAC /* [0,65535] */;
  uint32_t NNP5_28_2CLK /* [0,65535] */;
  uint32_t NNP5_28_2ADC /* [0,65535] */;
  uint32_t NNP5_29_1TAC /* [0,65535] */;
  uint32_t NNP5_29_1CLK /* [0,65535] */;
  uint32_t NNP5_29_1ADC /* [0,65535] */;
  uint32_t NNP5_29_2TAC /* [0,65535] */;
  uint32_t NNP5_29_2CLK /* [0,65535] */;
  uint32_t NNP5_29_2ADC /* [0,65535] */;
  uint32_t NNP5_30_1TAC /* [0,65535] */;
  uint32_t NNP5_30_1CLK /* [0,65535] */;
  uint32_t NNP5_30_1ADC /* [0,65535] */;
  uint32_t NNP5_30_2TAC /* [0,65535] */;
  uint32_t NNP5_30_2CLK /* [0,65535] */;
  uint32_t NNP5_30_2ADC /* [0,65535] */;
  uint32_t NNP5_31_1TAC /* [0,65535] */;
  uint32_t NNP5_31_1CLK /* [0,65535] */;
  uint32_t NNP5_31_1ADC /* [0,65535] */;
  uint32_t NNP5_31_2TAC /* [0,65535] */;
  uint32_t NNP5_31_2CLK /* [0,65535] */;
  uint32_t NNP5_31_2ADC /* [0,65535] */;
  uint32_t NNP5_32_1TAC /* [0,65535] */;
  uint32_t NNP5_32_1CLK /* [0,65535] */;
  uint32_t NNP5_32_1ADC /* [0,65535] */;
  uint32_t NNP5_32_2TAC /* [0,65535] */;
  uint32_t NNP5_32_2CLK /* [0,65535] */;
  uint32_t NNP5_32_2ADC /* [0,65535] */;
  uint32_t NNP5_33_1TAC /* [0,65535] */;
  uint32_t NNP5_33_1CLK /* [0,65535] */;
  uint32_t NNP5_33_1ADC /* [0,65535] */;
  uint32_t NNP5_33_2TAC /* [0,65535] */;
  uint32_t NNP5_33_2CLK /* [0,65535] */;
  uint32_t NNP5_33_2ADC /* [0,65535] */;
  uint32_t NNP5_34_1TAC /* [0,65535] */;
  uint32_t NNP5_34_1CLK /* [0,65535] */;
  uint32_t NNP5_34_1ADC /* [0,65535] */;
  uint32_t NNP5_34_2TAC /* [0,65535] */;
  uint32_t NNP5_34_2CLK /* [0,65535] */;
  uint32_t NNP5_34_2ADC /* [0,65535] */;
  uint32_t NNP5_35_1TAC /* [0,65535] */;
  uint32_t NNP5_35_1CLK /* [0,65535] */;
  uint32_t NNP5_35_1ADC /* [0,65535] */;
  uint32_t NNP5_35_2TAC /* [0,65535] */;
  uint32_t NNP5_35_2CLK /* [0,65535] */;
  uint32_t NNP5_35_2ADC /* [0,65535] */;
  uint32_t NNP5_36_1TAC /* [0,65535] */;
  uint32_t NNP5_36_1CLK /* [0,65535] */;
  uint32_t NNP5_36_1ADC /* [0,65535] */;
  uint32_t NNP5_36_2TAC /* [0,65535] */;
  uint32_t NNP5_36_2CLK /* [0,65535] */;
  uint32_t NNP5_36_2ADC /* [0,65535] */;
  uint32_t NNP5_37_1TAC /* [0,65535] */;
  uint32_t NNP5_37_1CLK /* [0,65535] */;
  uint32_t NNP5_37_1ADC /* [0,65535] */;
  uint32_t NNP5_37_2TAC /* [0,65535] */;
  uint32_t NNP5_37_2CLK /* [0,65535] */;
  uint32_t NNP5_37_2ADC /* [0,65535] */;
  uint32_t NNP5_38_1TAC /* [0,65535] */;
  uint32_t NNP5_38_1CLK /* [0,65535] */;
  uint32_t NNP5_38_1ADC /* [0,65535] */;
  uint32_t NNP5_38_2TAC /* [0,65535] */;
  uint32_t NNP5_38_2CLK /* [0,65535] */;
  uint32_t NNP5_38_2ADC /* [0,65535] */;
  uint32_t NNP5_39_1TAC /* [0,65535] */;
  uint32_t NNP5_39_1CLK /* [0,65535] */;
  uint32_t NNP5_39_1ADC /* [0,65535] */;
  uint32_t NNP5_39_2TAC /* [0,65535] */;
  uint32_t NNP5_39_2CLK /* [0,65535] */;
  uint32_t NNP5_39_2ADC /* [0,65535] */;
  uint32_t NNP5_40_1TAC /* [0,65535] */;
  uint32_t NNP5_40_1CLK /* [0,65535] */;
  uint32_t NNP5_40_1ADC /* [0,65535] */;
  uint32_t NNP5_40_2TAC /* [0,65535] */;
  uint32_t NNP5_40_2CLK /* [0,65535] */;
  uint32_t NNP5_40_2ADC /* [0,65535] */;
  uint32_t NNP5_41_1TAC /* [0,65535] */;
  uint32_t NNP5_41_1CLK /* [0,65535] */;
  uint32_t NNP5_41_1ADC /* [0,65535] */;
  uint32_t NNP5_41_2TAC /* [0,65535] */;
  uint32_t NNP5_41_2CLK /* [0,65535] */;
  uint32_t NNP5_41_2ADC /* [0,65535] */;
  uint32_t NNP5_42_1TAC /* [0,65535] */;
  uint32_t NNP5_42_1CLK /* [0,65535] */;
  uint32_t NNP5_42_1ADC /* [0,65535] */;
  uint32_t NNP5_42_2TAC /* [0,65535] */;
  uint32_t NNP5_42_2CLK /* [0,65535] */;
  uint32_t NNP5_42_2ADC /* [0,65535] */;
  uint32_t NNP5_43_1TAC /* [0,65535] */;
  uint32_t NNP5_43_1CLK /* [0,65535] */;
  uint32_t NNP5_43_1ADC /* [0,65535] */;
  uint32_t NNP5_43_2TAC /* [0,65535] */;
  uint32_t NNP5_43_2CLK /* [0,65535] */;
  uint32_t NNP5_43_2ADC /* [0,65535] */;
  uint32_t NNP5_44_1TAC /* [0,65535] */;
  uint32_t NNP5_44_1CLK /* [0,65535] */;
  uint32_t NNP5_44_1ADC /* [0,65535] */;
  uint32_t NNP5_44_2TAC /* [0,65535] */;
  uint32_t NNP5_44_2CLK /* [0,65535] */;
  uint32_t NNP5_44_2ADC /* [0,65535] */;
  uint32_t NNP5_45_1TAC /* [0,65535] */;
  uint32_t NNP5_45_1CLK /* [0,65535] */;
  uint32_t NNP5_45_1ADC /* [0,65535] */;
  uint32_t NNP5_45_2TAC /* [0,65535] */;
  uint32_t NNP5_45_2CLK /* [0,65535] */;
  uint32_t NNP5_45_2ADC /* [0,65535] */;
  uint32_t NNP5_46_1TAC /* [0,65535] */;
  uint32_t NNP5_46_1CLK /* [0,65535] */;
  uint32_t NNP5_46_1ADC /* [0,65535] */;
  uint32_t NNP5_46_2TAC /* [0,65535] */;
  uint32_t NNP5_46_2CLK /* [0,65535] */;
  uint32_t NNP5_46_2ADC /* [0,65535] */;
  uint32_t NNP5_47_1TAC /* [0,65535] */;
  uint32_t NNP5_47_1CLK /* [0,65535] */;
  uint32_t NNP5_47_1ADC /* [0,65535] */;
  uint32_t NNP5_47_2TAC /* [0,65535] */;
  uint32_t NNP5_47_2CLK /* [0,65535] */;
  uint32_t NNP5_47_2ADC /* [0,65535] */;
  uint32_t NNP5_48_1TAC /* [0,65535] */;
  uint32_t NNP5_48_1CLK /* [0,65535] */;
  uint32_t NNP5_48_1ADC /* [0,65535] */;
  uint32_t NNP5_48_2TAC /* [0,65535] */;
  uint32_t NNP5_48_2CLK /* [0,65535] */;
  uint32_t NNP5_48_2ADC /* [0,65535] */;
  uint32_t NNP5_49_1TAC /* [0,65535] */;
  uint32_t NNP5_49_1CLK /* [0,65535] */;
  uint32_t NNP5_49_1ADC /* [0,65535] */;
  uint32_t NNP5_49_2TAC /* [0,65535] */;
  uint32_t NNP5_49_2CLK /* [0,65535] */;
  uint32_t NNP5_49_2ADC /* [0,65535] */;
  uint32_t NNP5_50_1TAC /* [0,65535] */;
  uint32_t NNP5_50_1CLK /* [0,65535] */;
  uint32_t NNP5_50_1ADC /* [0,65535] */;
  uint32_t NNP5_50_2TAC /* [0,65535] */;
  uint32_t NNP5_50_2CLK /* [0,65535] */;
  uint32_t NNP5_50_2ADC /* [0,65535] */;
  uint32_t NNP6_1_1TAC /* [0,65535] */;
  uint32_t NNP6_1_1CLK /* [0,65535] */;
  uint32_t NNP6_1_1ADC /* [0,65535] */;
  uint32_t NNP6_1_2TAC /* [0,65535] */;
  uint32_t NNP6_1_2CLK /* [0,65535] */;
  uint32_t NNP6_1_2ADC /* [0,65535] */;
  uint32_t NNP6_2_1TAC /* [0,65535] */;
  uint32_t NNP6_2_1CLK /* [0,65535] */;
  uint32_t NNP6_2_1ADC /* [0,65535] */;
  uint32_t NNP6_2_2TAC /* [0,65535] */;
  uint32_t NNP6_2_2CLK /* [0,65535] */;
  uint32_t NNP6_2_2ADC /* [0,65535] */;
  uint32_t NNP6_3_1TAC /* [0,65535] */;
  uint32_t NNP6_3_1CLK /* [0,65535] */;
  uint32_t NNP6_3_1ADC /* [0,65535] */;
  uint32_t NNP6_3_2TAC /* [0,65535] */;
  uint32_t NNP6_3_2CLK /* [0,65535] */;
  uint32_t NNP6_3_2ADC /* [0,65535] */;
  uint32_t NNP6_4_1TAC /* [0,65535] */;
  uint32_t NNP6_4_1CLK /* [0,65535] */;
  uint32_t NNP6_4_1ADC /* [0,65535] */;
  uint32_t NNP6_4_2TAC /* [0,65535] */;
  uint32_t NNP6_4_2CLK /* [0,65535] */;
  uint32_t NNP6_4_2ADC /* [0,65535] */;
  uint32_t NNP6_5_1TAC /* [0,65535] */;
  uint32_t NNP6_5_1CLK /* [0,65535] */;
  uint32_t NNP6_5_1ADC /* [0,65535] */;
  uint32_t NNP6_5_2TAC /* [0,65535] */;
  uint32_t NNP6_5_2CLK /* [0,65535] */;
  uint32_t NNP6_5_2ADC /* [0,65535] */;
  uint32_t NNP6_6_1TAC /* [0,65535] */;
  uint32_t NNP6_6_1CLK /* [0,65535] */;
  uint32_t NNP6_6_1ADC /* [0,65535] */;
  uint32_t NNP6_6_2TAC /* [0,65535] */;
  uint32_t NNP6_6_2CLK /* [0,65535] */;
  uint32_t NNP6_6_2ADC /* [0,65535] */;
  uint32_t NNP6_7_1TAC /* [0,65535] */;
  uint32_t NNP6_7_1CLK /* [0,65535] */;
  uint32_t NNP6_7_1ADC /* [0,65535] */;
  uint32_t NNP6_7_2TAC /* [0,65535] */;
  uint32_t NNP6_7_2CLK /* [0,65535] */;
  uint32_t NNP6_7_2ADC /* [0,65535] */;
  uint32_t NNP6_8_1TAC /* [0,65535] */;
  uint32_t NNP6_8_1CLK /* [0,65535] */;
  uint32_t NNP6_8_1ADC /* [0,65535] */;
  uint32_t NNP6_8_2TAC /* [0,65535] */;
  uint32_t NNP6_8_2CLK /* [0,65535] */;
  uint32_t NNP6_8_2ADC /* [0,65535] */;
  uint32_t NNP6_9_1TAC /* [0,65535] */;
  uint32_t NNP6_9_1CLK /* [0,65535] */;
  uint32_t NNP6_9_1ADC /* [0,65535] */;
  uint32_t NNP6_9_2TAC /* [0,65535] */;
  uint32_t NNP6_9_2CLK /* [0,65535] */;
  uint32_t NNP6_9_2ADC /* [0,65535] */;
  uint32_t NNP6_10_1TAC /* [0,65535] */;
  uint32_t NNP6_10_1CLK /* [0,65535] */;
  uint32_t NNP6_10_1ADC /* [0,65535] */;
  uint32_t NNP6_10_2TAC /* [0,65535] */;
  uint32_t NNP6_10_2CLK /* [0,65535] */;
  uint32_t NNP6_10_2ADC /* [0,65535] */;
  uint32_t NNP6_11_1TAC /* [0,65535] */;
  uint32_t NNP6_11_1CLK /* [0,65535] */;
  uint32_t NNP6_11_1ADC /* [0,65535] */;
  uint32_t NNP6_11_2TAC /* [0,65535] */;
  uint32_t NNP6_11_2CLK /* [0,65535] */;
  uint32_t NNP6_11_2ADC /* [0,65535] */;
  uint32_t NNP6_12_1TAC /* [0,65535] */;
  uint32_t NNP6_12_1CLK /* [0,65535] */;
  uint32_t NNP6_12_1ADC /* [0,65535] */;
  uint32_t NNP6_12_2TAC /* [0,65535] */;
  uint32_t NNP6_12_2CLK /* [0,65535] */;
  uint32_t NNP6_12_2ADC /* [0,65535] */;
  uint32_t NNP6_13_1TAC /* [0,65535] */;
  uint32_t NNP6_13_1CLK /* [0,65535] */;
  uint32_t NNP6_13_1ADC /* [0,65535] */;
  uint32_t NNP6_13_2TAC /* [0,65535] */;
  uint32_t NNP6_13_2CLK /* [0,65535] */;
  uint32_t NNP6_13_2ADC /* [0,65535] */;
  uint32_t NNP6_14_1TAC /* [0,65535] */;
  uint32_t NNP6_14_1CLK /* [0,65535] */;
  uint32_t NNP6_14_1ADC /* [0,65535] */;
  uint32_t NNP6_14_2TAC /* [0,65535] */;
  uint32_t NNP6_14_2CLK /* [0,65535] */;
  uint32_t NNP6_14_2ADC /* [0,65535] */;
  uint32_t NNP6_15_1TAC /* [0,65535] */;
  uint32_t NNP6_15_1CLK /* [0,65535] */;
  uint32_t NNP6_15_1ADC /* [0,65535] */;
  uint32_t NNP6_15_2TAC /* [0,65535] */;
  uint32_t NNP6_15_2CLK /* [0,65535] */;
  uint32_t NNP6_15_2ADC /* [0,65535] */;
  uint32_t NNP6_16_1TAC /* [0,65535] */;
  uint32_t NNP6_16_1CLK /* [0,65535] */;
  uint32_t NNP6_16_1ADC /* [0,65535] */;
  uint32_t NNP6_16_2TAC /* [0,65535] */;
  uint32_t NNP6_16_2CLK /* [0,65535] */;
  uint32_t NNP6_16_2ADC /* [0,65535] */;
  uint32_t NNP6_17_1TAC /* [0,65535] */;
  uint32_t NNP6_17_1CLK /* [0,65535] */;
  uint32_t NNP6_17_1ADC /* [0,65535] */;
  uint32_t NNP6_17_2TAC /* [0,65535] */;
  uint32_t NNP6_17_2CLK /* [0,65535] */;
  uint32_t NNP6_17_2ADC /* [0,65535] */;
  uint32_t NNP6_18_1TAC /* [0,65535] */;
  uint32_t NNP6_18_1CLK /* [0,65535] */;
  uint32_t NNP6_18_1ADC /* [0,65535] */;
  uint32_t NNP6_18_2TAC /* [0,65535] */;
  uint32_t NNP6_18_2CLK /* [0,65535] */;
  uint32_t NNP6_18_2ADC /* [0,65535] */;
  uint32_t NNP6_19_1TAC /* [0,65535] */;
  uint32_t NNP6_19_1CLK /* [0,65535] */;
  uint32_t NNP6_19_1ADC /* [0,65535] */;
  uint32_t NNP6_19_2TAC /* [0,65535] */;
  uint32_t NNP6_19_2CLK /* [0,65535] */;
  uint32_t NNP6_19_2ADC /* [0,65535] */;
  uint32_t NNP6_20_1TAC /* [0,65535] */;
  uint32_t NNP6_20_1CLK /* [0,65535] */;
  uint32_t NNP6_20_1ADC /* [0,65535] */;
  uint32_t NNP6_20_2TAC /* [0,65535] */;
  uint32_t NNP6_20_2CLK /* [0,65535] */;
  uint32_t NNP6_20_2ADC /* [0,65535] */;
  uint32_t NNP6_21_1TAC /* [0,65535] */;
  uint32_t NNP6_21_1CLK /* [0,65535] */;
  uint32_t NNP6_21_1ADC /* [0,65535] */;
  uint32_t NNP6_21_2TAC /* [0,65535] */;
  uint32_t NNP6_21_2CLK /* [0,65535] */;
  uint32_t NNP6_21_2ADC /* [0,65535] */;
  uint32_t NNP6_22_1TAC /* [0,65535] */;
  uint32_t NNP6_22_1CLK /* [0,65535] */;
  uint32_t NNP6_22_1ADC /* [0,65535] */;
  uint32_t NNP6_22_2TAC /* [0,65535] */;
  uint32_t NNP6_22_2CLK /* [0,65535] */;
  uint32_t NNP6_22_2ADC /* [0,65535] */;
  uint32_t NNP6_23_1TAC /* [0,65535] */;
  uint32_t NNP6_23_1CLK /* [0,65535] */;
  uint32_t NNP6_23_1ADC /* [0,65535] */;
  uint32_t NNP6_23_2TAC /* [0,65535] */;
  uint32_t NNP6_23_2CLK /* [0,65535] */;
  uint32_t NNP6_23_2ADC /* [0,65535] */;
  uint32_t NNP6_24_1TAC /* [0,65535] */;
  uint32_t NNP6_24_1CLK /* [0,65535] */;
  uint32_t NNP6_24_1ADC /* [0,65535] */;
  uint32_t NNP6_24_2TAC /* [0,65535] */;
  uint32_t NNP6_24_2CLK /* [0,65535] */;
  uint32_t NNP6_24_2ADC /* [0,65535] */;
  uint32_t NNP6_25_1TAC /* [0,65535] */;
  uint32_t NNP6_25_1CLK /* [0,65535] */;
  uint32_t NNP6_25_1ADC /* [0,65535] */;
  uint32_t NNP6_25_2TAC /* [0,65535] */;
  uint32_t NNP6_25_2CLK /* [0,65535] */;
  uint32_t NNP6_25_2ADC /* [0,65535] */;
  uint32_t NNP6_26_1TAC /* [0,65535] */;
  uint32_t NNP6_26_1CLK /* [0,65535] */;
  uint32_t NNP6_26_1ADC /* [0,65535] */;
  uint32_t NNP6_26_2TAC /* [0,65535] */;
  uint32_t NNP6_26_2CLK /* [0,65535] */;
  uint32_t NNP6_26_2ADC /* [0,65535] */;
  uint32_t NNP6_27_1TAC /* [0,65535] */;
  uint32_t NNP6_27_1CLK /* [0,65535] */;
  uint32_t NNP6_27_1ADC /* [0,65535] */;
  uint32_t NNP6_27_2TAC /* [0,65535] */;
  uint32_t NNP6_27_2CLK /* [0,65535] */;
  uint32_t NNP6_27_2ADC /* [0,65535] */;
  uint32_t NNP6_28_1TAC /* [0,65535] */;
  uint32_t NNP6_28_1CLK /* [0,65535] */;
  uint32_t NNP6_28_1ADC /* [0,65535] */;
  uint32_t NNP6_28_2TAC /* [0,65535] */;
  uint32_t NNP6_28_2CLK /* [0,65535] */;
  uint32_t NNP6_28_2ADC /* [0,65535] */;
  uint32_t NNP6_29_1TAC /* [0,65535] */;
  uint32_t NNP6_29_1CLK /* [0,65535] */;
  uint32_t NNP6_29_1ADC /* [0,65535] */;
  uint32_t NNP6_29_2TAC /* [0,65535] */;
  uint32_t NNP6_29_2CLK /* [0,65535] */;
  uint32_t NNP6_29_2ADC /* [0,65535] */;
  uint32_t NNP6_30_1TAC /* [0,65535] */;
  uint32_t NNP6_30_1CLK /* [0,65535] */;
  uint32_t NNP6_30_1ADC /* [0,65535] */;
  uint32_t NNP6_30_2TAC /* [0,65535] */;
  uint32_t NNP6_30_2CLK /* [0,65535] */;
  uint32_t NNP6_30_2ADC /* [0,65535] */;
  uint32_t NNP6_31_1TAC /* [0,65535] */;
  uint32_t NNP6_31_1CLK /* [0,65535] */;
  uint32_t NNP6_31_1ADC /* [0,65535] */;
  uint32_t NNP6_31_2TAC /* [0,65535] */;
  uint32_t NNP6_31_2CLK /* [0,65535] */;
  uint32_t NNP6_31_2ADC /* [0,65535] */;
  uint32_t NNP6_32_1TAC /* [0,65535] */;
  uint32_t NNP6_32_1CLK /* [0,65535] */;
  uint32_t NNP6_32_1ADC /* [0,65535] */;
  uint32_t NNP6_32_2TAC /* [0,65535] */;
  uint32_t NNP6_32_2CLK /* [0,65535] */;
  uint32_t NNP6_32_2ADC /* [0,65535] */;
  uint32_t NNP6_33_1TAC /* [0,65535] */;
  uint32_t NNP6_33_1CLK /* [0,65535] */;
  uint32_t NNP6_33_1ADC /* [0,65535] */;
  uint32_t NNP6_33_2TAC /* [0,65535] */;
  uint32_t NNP6_33_2CLK /* [0,65535] */;
  uint32_t NNP6_33_2ADC /* [0,65535] */;
  uint32_t NNP6_34_1TAC /* [0,65535] */;
  uint32_t NNP6_34_1CLK /* [0,65535] */;
  uint32_t NNP6_34_1ADC /* [0,65535] */;
  uint32_t NNP6_34_2TAC /* [0,65535] */;
  uint32_t NNP6_34_2CLK /* [0,65535] */;
  uint32_t NNP6_34_2ADC /* [0,65535] */;
  uint32_t NNP6_35_1TAC /* [0,65535] */;
  uint32_t NNP6_35_1CLK /* [0,65535] */;
  uint32_t NNP6_35_1ADC /* [0,65535] */;
  uint32_t NNP6_35_2TAC /* [0,65535] */;
  uint32_t NNP6_35_2CLK /* [0,65535] */;
  uint32_t NNP6_35_2ADC /* [0,65535] */;
  uint32_t NNP6_36_1TAC /* [0,65535] */;
  uint32_t NNP6_36_1CLK /* [0,65535] */;
  uint32_t NNP6_36_1ADC /* [0,65535] */;
  uint32_t NNP6_36_2TAC /* [0,65535] */;
  uint32_t NNP6_36_2CLK /* [0,65535] */;
  uint32_t NNP6_36_2ADC /* [0,65535] */;
  uint32_t NNP6_37_1TAC /* [0,65535] */;
  uint32_t NNP6_37_1CLK /* [0,65535] */;
  uint32_t NNP6_37_1ADC /* [0,65535] */;
  uint32_t NNP6_37_2TAC /* [0,65535] */;
  uint32_t NNP6_37_2CLK /* [0,65535] */;
  uint32_t NNP6_37_2ADC /* [0,65535] */;
  uint32_t NNP6_38_1TAC /* [0,65535] */;
  uint32_t NNP6_38_1CLK /* [0,65535] */;
  uint32_t NNP6_38_1ADC /* [0,65535] */;
  uint32_t NNP6_38_2TAC /* [0,65535] */;
  uint32_t NNP6_38_2CLK /* [0,65535] */;
  uint32_t NNP6_38_2ADC /* [0,65535] */;
  uint32_t NNP6_39_1TAC /* [0,65535] */;
  uint32_t NNP6_39_1CLK /* [0,65535] */;
  uint32_t NNP6_39_1ADC /* [0,65535] */;
  uint32_t NNP6_39_2TAC /* [0,65535] */;
  uint32_t NNP6_39_2CLK /* [0,65535] */;
  uint32_t NNP6_39_2ADC /* [0,65535] */;
  uint32_t NNP6_40_1TAC /* [0,65535] */;
  uint32_t NNP6_40_1CLK /* [0,65535] */;
  uint32_t NNP6_40_1ADC /* [0,65535] */;
  uint32_t NNP6_40_2TAC /* [0,65535] */;
  uint32_t NNP6_40_2CLK /* [0,65535] */;
  uint32_t NNP6_40_2ADC /* [0,65535] */;
  uint32_t NNP6_41_1TAC /* [0,65535] */;
  uint32_t NNP6_41_1CLK /* [0,65535] */;
  uint32_t NNP6_41_1ADC /* [0,65535] */;
  uint32_t NNP6_41_2TAC /* [0,65535] */;
  uint32_t NNP6_41_2CLK /* [0,65535] */;
  uint32_t NNP6_41_2ADC /* [0,65535] */;
  uint32_t NNP6_42_1TAC /* [0,65535] */;
  uint32_t NNP6_42_1CLK /* [0,65535] */;
  uint32_t NNP6_42_1ADC /* [0,65535] */;
  uint32_t NNP6_42_2TAC /* [0,65535] */;
  uint32_t NNP6_42_2CLK /* [0,65535] */;
  uint32_t NNP6_42_2ADC /* [0,65535] */;
  uint32_t NNP6_43_1TAC /* [0,65535] */;
  uint32_t NNP6_43_1CLK /* [0,65535] */;
  uint32_t NNP6_43_1ADC /* [0,65535] */;
  uint32_t NNP6_43_2TAC /* [0,65535] */;
  uint32_t NNP6_43_2CLK /* [0,65535] */;
  uint32_t NNP6_43_2ADC /* [0,65535] */;
  uint32_t NNP6_44_1TAC /* [0,65535] */;
  uint32_t NNP6_44_1CLK /* [0,65535] */;
  uint32_t NNP6_44_1ADC /* [0,65535] */;
  uint32_t NNP6_44_2TAC /* [0,65535] */;
  uint32_t NNP6_44_2CLK /* [0,65535] */;
  uint32_t NNP6_44_2ADC /* [0,65535] */;
  uint32_t NNP6_45_1TAC /* [0,65535] */;
  uint32_t NNP6_45_1CLK /* [0,65535] */;
  uint32_t NNP6_45_1ADC /* [0,65535] */;
  uint32_t NNP6_45_2TAC /* [0,65535] */;
  uint32_t NNP6_45_2CLK /* [0,65535] */;
  uint32_t NNP6_45_2ADC /* [0,65535] */;
  uint32_t NNP6_46_1TAC /* [0,65535] */;
  uint32_t NNP6_46_1CLK /* [0,65535] */;
  uint32_t NNP6_46_1ADC /* [0,65535] */;
  uint32_t NNP6_46_2TAC /* [0,65535] */;
  uint32_t NNP6_46_2CLK /* [0,65535] */;
  uint32_t NNP6_46_2ADC /* [0,65535] */;
  uint32_t NNP6_47_1TAC /* [0,65535] */;
  uint32_t NNP6_47_1CLK /* [0,65535] */;
  uint32_t NNP6_47_1ADC /* [0,65535] */;
  uint32_t NNP6_47_2TAC /* [0,65535] */;
  uint32_t NNP6_47_2CLK /* [0,65535] */;
  uint32_t NNP6_47_2ADC /* [0,65535] */;
  uint32_t NNP6_48_1TAC /* [0,65535] */;
  uint32_t NNP6_48_1CLK /* [0,65535] */;
  uint32_t NNP6_48_1ADC /* [0,65535] */;
  uint32_t NNP6_48_2TAC /* [0,65535] */;
  uint32_t NNP6_48_2CLK /* [0,65535] */;
  uint32_t NNP6_48_2ADC /* [0,65535] */;
  uint32_t NNP6_49_1TAC /* [0,65535] */;
  uint32_t NNP6_49_1CLK /* [0,65535] */;
  uint32_t NNP6_49_1ADC /* [0,65535] */;
  uint32_t NNP6_49_2TAC /* [0,65535] */;
  uint32_t NNP6_49_2CLK /* [0,65535] */;
  uint32_t NNP6_49_2ADC /* [0,65535] */;
  uint32_t NNP6_50_1TAC /* [0,65535] */;
  uint32_t NNP6_50_1CLK /* [0,65535] */;
  uint32_t NNP6_50_1ADC /* [0,65535] */;
  uint32_t NNP6_50_2TAC /* [0,65535] */;
  uint32_t NNP6_50_2CLK /* [0,65535] */;
  uint32_t NNP6_50_2ADC /* [0,65535] */;
  uint32_t NNP7_1_1TAC /* [0,65535] */;
  uint32_t NNP7_1_1CLK /* [0,65535] */;
  uint32_t NNP7_1_1ADC /* [0,65535] */;
  uint32_t NNP7_1_2TAC /* [0,65535] */;
  uint32_t NNP7_1_2CLK /* [0,65535] */;
  uint32_t NNP7_1_2ADC /* [0,65535] */;
  uint32_t NNP7_2_1TAC /* [0,65535] */;
  uint32_t NNP7_2_1CLK /* [0,65535] */;
  uint32_t NNP7_2_1ADC /* [0,65535] */;
  uint32_t NNP7_2_2TAC /* [0,65535] */;
  uint32_t NNP7_2_2CLK /* [0,65535] */;
  uint32_t NNP7_2_2ADC /* [0,65535] */;
  uint32_t NNP7_3_1TAC /* [0,65535] */;
  uint32_t NNP7_3_1CLK /* [0,65535] */;
  uint32_t NNP7_3_1ADC /* [0,65535] */;
  uint32_t NNP7_3_2TAC /* [0,65535] */;
  uint32_t NNP7_3_2CLK /* [0,65535] */;
  uint32_t NNP7_3_2ADC /* [0,65535] */;
  uint32_t NNP7_4_1TAC /* [0,65535] */;
  uint32_t NNP7_4_1CLK /* [0,65535] */;
  uint32_t NNP7_4_1ADC /* [0,65535] */;
  uint32_t NNP7_4_2TAC /* [0,65535] */;
  uint32_t NNP7_4_2CLK /* [0,65535] */;
  uint32_t NNP7_4_2ADC /* [0,65535] */;
  uint32_t NNP7_5_1TAC /* [0,65535] */;
  uint32_t NNP7_5_1CLK /* [0,65535] */;
  uint32_t NNP7_5_1ADC /* [0,65535] */;
  uint32_t NNP7_5_2TAC /* [0,65535] */;
  uint32_t NNP7_5_2CLK /* [0,65535] */;
  uint32_t NNP7_5_2ADC /* [0,65535] */;
  uint32_t NNP7_6_1TAC /* [0,65535] */;
  uint32_t NNP7_6_1CLK /* [0,65535] */;
  uint32_t NNP7_6_1ADC /* [0,65535] */;
  uint32_t NNP7_6_2TAC /* [0,65535] */;
  uint32_t NNP7_6_2CLK /* [0,65535] */;
  uint32_t NNP7_6_2ADC /* [0,65535] */;
  uint32_t NNP7_7_1TAC /* [0,65535] */;
  uint32_t NNP7_7_1CLK /* [0,65535] */;
  uint32_t NNP7_7_1ADC /* [0,65535] */;
  uint32_t NNP7_7_2TAC /* [0,65535] */;
  uint32_t NNP7_7_2CLK /* [0,65535] */;
  uint32_t NNP7_7_2ADC /* [0,65535] */;
  uint32_t NNP7_8_1TAC /* [0,65535] */;
  uint32_t NNP7_8_1CLK /* [0,65535] */;
  uint32_t NNP7_8_1ADC /* [0,65535] */;
  uint32_t NNP7_8_2TAC /* [0,65535] */;
  uint32_t NNP7_8_2CLK /* [0,65535] */;
  uint32_t NNP7_8_2ADC /* [0,65535] */;
  uint32_t NNP7_9_1TAC /* [0,65535] */;
  uint32_t NNP7_9_1CLK /* [0,65535] */;
  uint32_t NNP7_9_1ADC /* [0,65535] */;
  uint32_t NNP7_9_2TAC /* [0,65535] */;
  uint32_t NNP7_9_2CLK /* [0,65535] */;
  uint32_t NNP7_9_2ADC /* [0,65535] */;
  uint32_t NNP7_10_1TAC /* [0,65535] */;
  uint32_t NNP7_10_1CLK /* [0,65535] */;
  uint32_t NNP7_10_1ADC /* [0,65535] */;
  uint32_t NNP7_10_2TAC /* [0,65535] */;
  uint32_t NNP7_10_2CLK /* [0,65535] */;
  uint32_t NNP7_10_2ADC /* [0,65535] */;
  uint32_t NNP7_11_1TAC /* [0,65535] */;
  uint32_t NNP7_11_1CLK /* [0,65535] */;
  uint32_t NNP7_11_1ADC /* [0,65535] */;
  uint32_t NNP7_11_2TAC /* [0,65535] */;
  uint32_t NNP7_11_2CLK /* [0,65535] */;
  uint32_t NNP7_11_2ADC /* [0,65535] */;
  uint32_t NNP7_12_1TAC /* [0,65535] */;
  uint32_t NNP7_12_1CLK /* [0,65535] */;
  uint32_t NNP7_12_1ADC /* [0,65535] */;
  uint32_t NNP7_12_2TAC /* [0,65535] */;
  uint32_t NNP7_12_2CLK /* [0,65535] */;
  uint32_t NNP7_12_2ADC /* [0,65535] */;
  uint32_t NNP7_13_1TAC /* [0,65535] */;
  uint32_t NNP7_13_1CLK /* [0,65535] */;
  uint32_t NNP7_13_1ADC /* [0,65535] */;
  uint32_t NNP7_13_2TAC /* [0,65535] */;
  uint32_t NNP7_13_2CLK /* [0,65535] */;
  uint32_t NNP7_13_2ADC /* [0,65535] */;
  uint32_t NNP7_14_1TAC /* [0,65535] */;
  uint32_t NNP7_14_1CLK /* [0,65535] */;
  uint32_t NNP7_14_1ADC /* [0,65535] */;
  uint32_t NNP7_14_2TAC /* [0,65535] */;
  uint32_t NNP7_14_2CLK /* [0,65535] */;
  uint32_t NNP7_14_2ADC /* [0,65535] */;
  uint32_t NNP7_15_1TAC /* [0,65535] */;
  uint32_t NNP7_15_1CLK /* [0,65535] */;
  uint32_t NNP7_15_1ADC /* [0,65535] */;
  uint32_t NNP7_15_2TAC /* [0,65535] */;
  uint32_t NNP7_15_2CLK /* [0,65535] */;
  uint32_t NNP7_15_2ADC /* [0,65535] */;
  uint32_t NNP7_16_1TAC /* [0,65535] */;
  uint32_t NNP7_16_1CLK /* [0,65535] */;
  uint32_t NNP7_16_1ADC /* [0,65535] */;
  uint32_t NNP7_16_2TAC /* [0,65535] */;
  uint32_t NNP7_16_2CLK /* [0,65535] */;
  uint32_t NNP7_16_2ADC /* [0,65535] */;
  uint32_t NNP7_17_1TAC /* [0,65535] */;
  uint32_t NNP7_17_1CLK /* [0,65535] */;
  uint32_t NNP7_17_1ADC /* [0,65535] */;
  uint32_t NNP7_17_2TAC /* [0,65535] */;
  uint32_t NNP7_17_2CLK /* [0,65535] */;
  uint32_t NNP7_17_2ADC /* [0,65535] */;
  uint32_t NNP7_18_1TAC /* [0,65535] */;
  uint32_t NNP7_18_1CLK /* [0,65535] */;
  uint32_t NNP7_18_1ADC /* [0,65535] */;
  uint32_t NNP7_18_2TAC /* [0,65535] */;
  uint32_t NNP7_18_2CLK /* [0,65535] */;
  uint32_t NNP7_18_2ADC /* [0,65535] */;
  uint32_t NNP7_19_1TAC /* [0,65535] */;
  uint32_t NNP7_19_1CLK /* [0,65535] */;
  uint32_t NNP7_19_1ADC /* [0,65535] */;
  uint32_t NNP7_19_2TAC /* [0,65535] */;
  uint32_t NNP7_19_2CLK /* [0,65535] */;
  uint32_t NNP7_19_2ADC /* [0,65535] */;
  uint32_t NNP7_20_1TAC /* [0,65535] */;
  uint32_t NNP7_20_1CLK /* [0,65535] */;
  uint32_t NNP7_20_1ADC /* [0,65535] */;
  uint32_t NNP7_20_2TAC /* [0,65535] */;
  uint32_t NNP7_20_2CLK /* [0,65535] */;
  uint32_t NNP7_20_2ADC /* [0,65535] */;
  uint32_t NNP7_21_1TAC /* [0,65535] */;
  uint32_t NNP7_21_1CLK /* [0,65535] */;
  uint32_t NNP7_21_1ADC /* [0,65535] */;
  uint32_t NNP7_21_2TAC /* [0,65535] */;
  uint32_t NNP7_21_2CLK /* [0,65535] */;
  uint32_t NNP7_21_2ADC /* [0,65535] */;
  uint32_t NNP7_22_1TAC /* [0,65535] */;
  uint32_t NNP7_22_1CLK /* [0,65535] */;
  uint32_t NNP7_22_1ADC /* [0,65535] */;
  uint32_t NNP7_22_2TAC /* [0,65535] */;
  uint32_t NNP7_22_2CLK /* [0,65535] */;
  uint32_t NNP7_22_2ADC /* [0,65535] */;
  uint32_t NNP7_23_1TAC /* [0,65535] */;
  uint32_t NNP7_23_1CLK /* [0,65535] */;
  uint32_t NNP7_23_1ADC /* [0,65535] */;
  uint32_t NNP7_23_2TAC /* [0,65535] */;
  uint32_t NNP7_23_2CLK /* [0,65535] */;
  uint32_t NNP7_23_2ADC /* [0,65535] */;
  uint32_t NNP7_24_1TAC /* [0,65535] */;
  uint32_t NNP7_24_1CLK /* [0,65535] */;
  uint32_t NNP7_24_1ADC /* [0,65535] */;
  uint32_t NNP7_24_2TAC /* [0,65535] */;
  uint32_t NNP7_24_2CLK /* [0,65535] */;
  uint32_t NNP7_24_2ADC /* [0,65535] */;
  uint32_t NNP7_25_1TAC /* [0,65535] */;
  uint32_t NNP7_25_1CLK /* [0,65535] */;
  uint32_t NNP7_25_1ADC /* [0,65535] */;
  uint32_t NNP7_25_2TAC /* [0,65535] */;
  uint32_t NNP7_25_2CLK /* [0,65535] */;
  uint32_t NNP7_25_2ADC /* [0,65535] */;
  uint32_t NNP7_26_1TAC /* [0,65535] */;
  uint32_t NNP7_26_1CLK /* [0,65535] */;
  uint32_t NNP7_26_1ADC /* [0,65535] */;
  uint32_t NNP7_26_2TAC /* [0,65535] */;
  uint32_t NNP7_26_2CLK /* [0,65535] */;
  uint32_t NNP7_26_2ADC /* [0,65535] */;
  uint32_t NNP7_27_1TAC /* [0,65535] */;
  uint32_t NNP7_27_1CLK /* [0,65535] */;
  uint32_t NNP7_27_1ADC /* [0,65535] */;
  uint32_t NNP7_27_2TAC /* [0,65535] */;
  uint32_t NNP7_27_2CLK /* [0,65535] */;
  uint32_t NNP7_27_2ADC /* [0,65535] */;
  uint32_t NNP7_28_1TAC /* [0,65535] */;
  uint32_t NNP7_28_1CLK /* [0,65535] */;
  uint32_t NNP7_28_1ADC /* [0,65535] */;
  uint32_t NNP7_28_2TAC /* [0,65535] */;
  uint32_t NNP7_28_2CLK /* [0,65535] */;
  uint32_t NNP7_28_2ADC /* [0,65535] */;
  uint32_t NNP7_29_1TAC /* [0,65535] */;
  uint32_t NNP7_29_1CLK /* [0,65535] */;
  uint32_t NNP7_29_1ADC /* [0,65535] */;
  uint32_t NNP7_29_2TAC /* [0,65535] */;
  uint32_t NNP7_29_2CLK /* [0,65535] */;
  uint32_t NNP7_29_2ADC /* [0,65535] */;
  uint32_t NNP7_30_1TAC /* [0,65535] */;
  uint32_t NNP7_30_1CLK /* [0,65535] */;
  uint32_t NNP7_30_1ADC /* [0,65535] */;
  uint32_t NNP7_30_2TAC /* [0,65535] */;
  uint32_t NNP7_30_2CLK /* [0,65535] */;
  uint32_t NNP7_30_2ADC /* [0,65535] */;
  uint32_t NNP7_31_1TAC /* [0,65535] */;
  uint32_t NNP7_31_1CLK /* [0,65535] */;
  uint32_t NNP7_31_1ADC /* [0,65535] */;
  uint32_t NNP7_31_2TAC /* [0,65535] */;
  uint32_t NNP7_31_2CLK /* [0,65535] */;
  uint32_t NNP7_31_2ADC /* [0,65535] */;
  uint32_t NNP7_32_1TAC /* [0,65535] */;
  uint32_t NNP7_32_1CLK /* [0,65535] */;
  uint32_t NNP7_32_1ADC /* [0,65535] */;
  uint32_t NNP7_32_2TAC /* [0,65535] */;
  uint32_t NNP7_32_2CLK /* [0,65535] */;
  uint32_t NNP7_32_2ADC /* [0,65535] */;
  uint32_t NNP7_33_1TAC /* [0,65535] */;
  uint32_t NNP7_33_1CLK /* [0,65535] */;
  uint32_t NNP7_33_1ADC /* [0,65535] */;
  uint32_t NNP7_33_2TAC /* [0,65535] */;
  uint32_t NNP7_33_2CLK /* [0,65535] */;
  uint32_t NNP7_33_2ADC /* [0,65535] */;
  uint32_t NNP7_34_1TAC /* [0,65535] */;
  uint32_t NNP7_34_1CLK /* [0,65535] */;
  uint32_t NNP7_34_1ADC /* [0,65535] */;
  uint32_t NNP7_34_2TAC /* [0,65535] */;
  uint32_t NNP7_34_2CLK /* [0,65535] */;
  uint32_t NNP7_34_2ADC /* [0,65535] */;
  uint32_t NNP7_35_1TAC /* [0,65535] */;
  uint32_t NNP7_35_1CLK /* [0,65535] */;
  uint32_t NNP7_35_1ADC /* [0,65535] */;
  uint32_t NNP7_35_2TAC /* [0,65535] */;
  uint32_t NNP7_35_2CLK /* [0,65535] */;
  uint32_t NNP7_35_2ADC /* [0,65535] */;
  uint32_t NNP7_36_1TAC /* [0,65535] */;
  uint32_t NNP7_36_1CLK /* [0,65535] */;
  uint32_t NNP7_36_1ADC /* [0,65535] */;
  uint32_t NNP7_36_2TAC /* [0,65535] */;
  uint32_t NNP7_36_2CLK /* [0,65535] */;
  uint32_t NNP7_36_2ADC /* [0,65535] */;
  uint32_t NNP7_37_1TAC /* [0,65535] */;
  uint32_t NNP7_37_1CLK /* [0,65535] */;
  uint32_t NNP7_37_1ADC /* [0,65535] */;
  uint32_t NNP7_37_2TAC /* [0,65535] */;
  uint32_t NNP7_37_2CLK /* [0,65535] */;
  uint32_t NNP7_37_2ADC /* [0,65535] */;
  uint32_t NNP7_38_1TAC /* [0,65535] */;
  uint32_t NNP7_38_1CLK /* [0,65535] */;
  uint32_t NNP7_38_1ADC /* [0,65535] */;
  uint32_t NNP7_38_2TAC /* [0,65535] */;
  uint32_t NNP7_38_2CLK /* [0,65535] */;
  uint32_t NNP7_38_2ADC /* [0,65535] */;
  uint32_t NNP7_39_1TAC /* [0,65535] */;
  uint32_t NNP7_39_1CLK /* [0,65535] */;
  uint32_t NNP7_39_1ADC /* [0,65535] */;
  uint32_t NNP7_39_2TAC /* [0,65535] */;
  uint32_t NNP7_39_2CLK /* [0,65535] */;
  uint32_t NNP7_39_2ADC /* [0,65535] */;
  uint32_t NNP7_40_1TAC /* [0,65535] */;
  uint32_t NNP7_40_1CLK /* [0,65535] */;
  uint32_t NNP7_40_1ADC /* [0,65535] */;
  uint32_t NNP7_40_2TAC /* [0,65535] */;
  uint32_t NNP7_40_2CLK /* [0,65535] */;
  uint32_t NNP7_40_2ADC /* [0,65535] */;
  uint32_t NNP7_41_1TAC /* [0,65535] */;
  uint32_t NNP7_41_1CLK /* [0,65535] */;
  uint32_t NNP7_41_1ADC /* [0,65535] */;
  uint32_t NNP7_41_2TAC /* [0,65535] */;
  uint32_t NNP7_41_2CLK /* [0,65535] */;
  uint32_t NNP7_41_2ADC /* [0,65535] */;
  uint32_t NNP7_42_1TAC /* [0,65535] */;
  uint32_t NNP7_42_1CLK /* [0,65535] */;
  uint32_t NNP7_42_1ADC /* [0,65535] */;
  uint32_t NNP7_42_2TAC /* [0,65535] */;
  uint32_t NNP7_42_2CLK /* [0,65535] */;
  uint32_t NNP7_42_2ADC /* [0,65535] */;
  uint32_t NNP7_43_1TAC /* [0,65535] */;
  uint32_t NNP7_43_1CLK /* [0,65535] */;
  uint32_t NNP7_43_1ADC /* [0,65535] */;
  uint32_t NNP7_43_2TAC /* [0,65535] */;
  uint32_t NNP7_43_2CLK /* [0,65535] */;
  uint32_t NNP7_43_2ADC /* [0,65535] */;
  uint32_t NNP7_44_1TAC /* [0,65535] */;
  uint32_t NNP7_44_1CLK /* [0,65535] */;
  uint32_t NNP7_44_1ADC /* [0,65535] */;
  uint32_t NNP7_44_2TAC /* [0,65535] */;
  uint32_t NNP7_44_2CLK /* [0,65535] */;
  uint32_t NNP7_44_2ADC /* [0,65535] */;
  uint32_t NNP7_45_1TAC /* [0,65535] */;
  uint32_t NNP7_45_1CLK /* [0,65535] */;
  uint32_t NNP7_45_1ADC /* [0,65535] */;
  uint32_t NNP7_45_2TAC /* [0,65535] */;
  uint32_t NNP7_45_2CLK /* [0,65535] */;
  uint32_t NNP7_45_2ADC /* [0,65535] */;
  uint32_t NNP7_46_1TAC /* [0,65535] */;
  uint32_t NNP7_46_1CLK /* [0,65535] */;
  uint32_t NNP7_46_1ADC /* [0,65535] */;
  uint32_t NNP7_46_2TAC /* [0,65535] */;
  uint32_t NNP7_46_2CLK /* [0,65535] */;
  uint32_t NNP7_46_2ADC /* [0,65535] */;
  uint32_t NNP7_47_1TAC /* [0,65535] */;
  uint32_t NNP7_47_1CLK /* [0,65535] */;
  uint32_t NNP7_47_1ADC /* [0,65535] */;
  uint32_t NNP7_47_2TAC /* [0,65535] */;
  uint32_t NNP7_47_2CLK /* [0,65535] */;
  uint32_t NNP7_47_2ADC /* [0,65535] */;
  uint32_t NNP7_48_1TAC /* [0,65535] */;
  uint32_t NNP7_48_1CLK /* [0,65535] */;
  uint32_t NNP7_48_1ADC /* [0,65535] */;
  uint32_t NNP7_48_2TAC /* [0,65535] */;
  uint32_t NNP7_48_2CLK /* [0,65535] */;
  uint32_t NNP7_48_2ADC /* [0,65535] */;
  uint32_t NNP7_49_1TAC /* [0,65535] */;
  uint32_t NNP7_49_1CLK /* [0,65535] */;
  uint32_t NNP7_49_1ADC /* [0,65535] */;
  uint32_t NNP7_49_2TAC /* [0,65535] */;
  uint32_t NNP7_49_2CLK /* [0,65535] */;
  uint32_t NNP7_49_2ADC /* [0,65535] */;
  uint32_t NNP7_50_1TAC /* [0,65535] */;
  uint32_t NNP7_50_1CLK /* [0,65535] */;
  uint32_t NNP7_50_1ADC /* [0,65535] */;
  uint32_t NNP7_50_2TAC /* [0,65535] */;
  uint32_t NNP7_50_2CLK /* [0,65535] */;
  uint32_t NNP7_50_2ADC /* [0,65535] */;
  uint32_t NNP8_1_1TAC /* [0,65535] */;
  uint32_t NNP8_1_1CLK /* [0,65535] */;
  uint32_t NNP8_1_1ADC /* [0,65535] */;
  uint32_t NNP8_1_2TAC /* [0,65535] */;
  uint32_t NNP8_1_2CLK /* [0,65535] */;
  uint32_t NNP8_1_2ADC /* [0,65535] */;
  uint32_t NNP8_2_1TAC /* [0,65535] */;
  uint32_t NNP8_2_1CLK /* [0,65535] */;
  uint32_t NNP8_2_1ADC /* [0,65535] */;
  uint32_t NNP8_2_2TAC /* [0,65535] */;
  uint32_t NNP8_2_2CLK /* [0,65535] */;
  uint32_t NNP8_2_2ADC /* [0,65535] */;
  uint32_t NNP8_3_1TAC /* [0,65535] */;
  uint32_t NNP8_3_1CLK /* [0,65535] */;
  uint32_t NNP8_3_1ADC /* [0,65535] */;
  uint32_t NNP8_3_2TAC /* [0,65535] */;
  uint32_t NNP8_3_2CLK /* [0,65535] */;
  uint32_t NNP8_3_2ADC /* [0,65535] */;
  uint32_t NNP8_4_1TAC /* [0,65535] */;
  uint32_t NNP8_4_1CLK /* [0,65535] */;
  uint32_t NNP8_4_1ADC /* [0,65535] */;
  uint32_t NNP8_4_2TAC /* [0,65535] */;
  uint32_t NNP8_4_2CLK /* [0,65535] */;
  uint32_t NNP8_4_2ADC /* [0,65535] */;
  uint32_t NNP8_5_1TAC /* [0,65535] */;
  uint32_t NNP8_5_1CLK /* [0,65535] */;
  uint32_t NNP8_5_1ADC /* [0,65535] */;
  uint32_t NNP8_5_2TAC /* [0,65535] */;
  uint32_t NNP8_5_2CLK /* [0,65535] */;
  uint32_t NNP8_5_2ADC /* [0,65535] */;
  uint32_t NNP8_6_1TAC /* [0,65535] */;
  uint32_t NNP8_6_1CLK /* [0,65535] */;
  uint32_t NNP8_6_1ADC /* [0,65535] */;
  uint32_t NNP8_6_2TAC /* [0,65535] */;
  uint32_t NNP8_6_2CLK /* [0,65535] */;
  uint32_t NNP8_6_2ADC /* [0,65535] */;
  uint32_t NNP8_7_1TAC /* [0,65535] */;
  uint32_t NNP8_7_1CLK /* [0,65535] */;
  uint32_t NNP8_7_1ADC /* [0,65535] */;
  uint32_t NNP8_7_2TAC /* [0,65535] */;
  uint32_t NNP8_7_2CLK /* [0,65535] */;
  uint32_t NNP8_7_2ADC /* [0,65535] */;
  uint32_t NNP8_8_1TAC /* [0,65535] */;
  uint32_t NNP8_8_1CLK /* [0,65535] */;
  uint32_t NNP8_8_1ADC /* [0,65535] */;
  uint32_t NNP8_8_2TAC /* [0,65535] */;
  uint32_t NNP8_8_2CLK /* [0,65535] */;
  uint32_t NNP8_8_2ADC /* [0,65535] */;
  uint32_t NNP8_9_1TAC /* [0,65535] */;
  uint32_t NNP8_9_1CLK /* [0,65535] */;
  uint32_t NNP8_9_1ADC /* [0,65535] */;
  uint32_t NNP8_9_2TAC /* [0,65535] */;
  uint32_t NNP8_9_2CLK /* [0,65535] */;
  uint32_t NNP8_9_2ADC /* [0,65535] */;
  uint32_t NNP8_10_1TAC /* [0,65535] */;
  uint32_t NNP8_10_1CLK /* [0,65535] */;
  uint32_t NNP8_10_1ADC /* [0,65535] */;
  uint32_t NNP8_10_2TAC /* [0,65535] */;
  uint32_t NNP8_10_2CLK /* [0,65535] */;
  uint32_t NNP8_10_2ADC /* [0,65535] */;
  uint32_t NNP8_11_1TAC /* [0,65535] */;
  uint32_t NNP8_11_1CLK /* [0,65535] */;
  uint32_t NNP8_11_1ADC /* [0,65535] */;
  uint32_t NNP8_11_2TAC /* [0,65535] */;
  uint32_t NNP8_11_2CLK /* [0,65535] */;
  uint32_t NNP8_11_2ADC /* [0,65535] */;
  uint32_t NNP8_12_1TAC /* [0,65535] */;
  uint32_t NNP8_12_1CLK /* [0,65535] */;
  uint32_t NNP8_12_1ADC /* [0,65535] */;
  uint32_t NNP8_12_2TAC /* [0,65535] */;
  uint32_t NNP8_12_2CLK /* [0,65535] */;
  uint32_t NNP8_12_2ADC /* [0,65535] */;
  uint32_t NNP8_13_1TAC /* [0,65535] */;
  uint32_t NNP8_13_1CLK /* [0,65535] */;
  uint32_t NNP8_13_1ADC /* [0,65535] */;
  uint32_t NNP8_13_2TAC /* [0,65535] */;
  uint32_t NNP8_13_2CLK /* [0,65535] */;
  uint32_t NNP8_13_2ADC /* [0,65535] */;
  uint32_t NNP8_14_1TAC /* [0,65535] */;
  uint32_t NNP8_14_1CLK /* [0,65535] */;
  uint32_t NNP8_14_1ADC /* [0,65535] */;
  uint32_t NNP8_14_2TAC /* [0,65535] */;
  uint32_t NNP8_14_2CLK /* [0,65535] */;
  uint32_t NNP8_14_2ADC /* [0,65535] */;
  uint32_t NNP8_15_1TAC /* [0,65535] */;
  uint32_t NNP8_15_1CLK /* [0,65535] */;
  uint32_t NNP8_15_1ADC /* [0,65535] */;
  uint32_t NNP8_15_2TAC /* [0,65535] */;
  uint32_t NNP8_15_2CLK /* [0,65535] */;
  uint32_t NNP8_15_2ADC /* [0,65535] */;
  uint32_t NNP8_16_1TAC /* [0,65535] */;
  uint32_t NNP8_16_1CLK /* [0,65535] */;
  uint32_t NNP8_16_1ADC /* [0,65535] */;
  uint32_t NNP8_16_2TAC /* [0,65535] */;
  uint32_t NNP8_16_2CLK /* [0,65535] */;
  uint32_t NNP8_16_2ADC /* [0,65535] */;
  uint32_t NNP8_17_1TAC /* [0,65535] */;
  uint32_t NNP8_17_1CLK /* [0,65535] */;
  uint32_t NNP8_17_1ADC /* [0,65535] */;
  uint32_t NNP8_17_2TAC /* [0,65535] */;
  uint32_t NNP8_17_2CLK /* [0,65535] */;
  uint32_t NNP8_17_2ADC /* [0,65535] */;
  uint32_t NNP8_18_1TAC /* [0,65535] */;
  uint32_t NNP8_18_1CLK /* [0,65535] */;
  uint32_t NNP8_18_1ADC /* [0,65535] */;
  uint32_t NNP8_18_2TAC /* [0,65535] */;
  uint32_t NNP8_18_2CLK /* [0,65535] */;
  uint32_t NNP8_18_2ADC /* [0,65535] */;
  uint32_t NNP8_19_1TAC /* [0,65535] */;
  uint32_t NNP8_19_1CLK /* [0,65535] */;
  uint32_t NNP8_19_1ADC /* [0,65535] */;
  uint32_t NNP8_19_2TAC /* [0,65535] */;
  uint32_t NNP8_19_2CLK /* [0,65535] */;
  uint32_t NNP8_19_2ADC /* [0,65535] */;
  uint32_t NNP8_20_1TAC /* [0,65535] */;
  uint32_t NNP8_20_1CLK /* [0,65535] */;
  uint32_t NNP8_20_1ADC /* [0,65535] */;
  uint32_t NNP8_20_2TAC /* [0,65535] */;
  uint32_t NNP8_20_2CLK /* [0,65535] */;
  uint32_t NNP8_20_2ADC /* [0,65535] */;
  uint32_t NNP8_21_1TAC /* [0,65535] */;
  uint32_t NNP8_21_1CLK /* [0,65535] */;
  uint32_t NNP8_21_1ADC /* [0,65535] */;
  uint32_t NNP8_21_2TAC /* [0,65535] */;
  uint32_t NNP8_21_2CLK /* [0,65535] */;
  uint32_t NNP8_21_2ADC /* [0,65535] */;
  uint32_t NNP8_22_1TAC /* [0,65535] */;
  uint32_t NNP8_22_1CLK /* [0,65535] */;
  uint32_t NNP8_22_1ADC /* [0,65535] */;
  uint32_t NNP8_22_2TAC /* [0,65535] */;
  uint32_t NNP8_22_2CLK /* [0,65535] */;
  uint32_t NNP8_22_2ADC /* [0,65535] */;
  uint32_t NNP8_23_1TAC /* [0,65535] */;
  uint32_t NNP8_23_1CLK /* [0,65535] */;
  uint32_t NNP8_23_1ADC /* [0,65535] */;
  uint32_t NNP8_23_2TAC /* [0,65535] */;
  uint32_t NNP8_23_2CLK /* [0,65535] */;
  uint32_t NNP8_23_2ADC /* [0,65535] */;
  uint32_t NNP8_24_1TAC /* [0,65535] */;
  uint32_t NNP8_24_1CLK /* [0,65535] */;
  uint32_t NNP8_24_1ADC /* [0,65535] */;
  uint32_t NNP8_24_2TAC /* [0,65535] */;
  uint32_t NNP8_24_2CLK /* [0,65535] */;
  uint32_t NNP8_24_2ADC /* [0,65535] */;
  uint32_t NNP8_25_1TAC /* [0,65535] */;
  uint32_t NNP8_25_1CLK /* [0,65535] */;
  uint32_t NNP8_25_1ADC /* [0,65535] */;
  uint32_t NNP8_25_2TAC /* [0,65535] */;
  uint32_t NNP8_25_2CLK /* [0,65535] */;
  uint32_t NNP8_25_2ADC /* [0,65535] */;
  uint32_t NNP8_26_1TAC /* [0,65535] */;
  uint32_t NNP8_26_1CLK /* [0,65535] */;
  uint32_t NNP8_26_1ADC /* [0,65535] */;
  uint32_t NNP8_26_2TAC /* [0,65535] */;
  uint32_t NNP8_26_2CLK /* [0,65535] */;
  uint32_t NNP8_26_2ADC /* [0,65535] */;
  uint32_t NNP8_27_1TAC /* [0,65535] */;
  uint32_t NNP8_27_1CLK /* [0,65535] */;
  uint32_t NNP8_27_1ADC /* [0,65535] */;
  uint32_t NNP8_27_2TAC /* [0,65535] */;
  uint32_t NNP8_27_2CLK /* [0,65535] */;
  uint32_t NNP8_27_2ADC /* [0,65535] */;
  uint32_t NNP8_28_1TAC /* [0,65535] */;
  uint32_t NNP8_28_1CLK /* [0,65535] */;
  uint32_t NNP8_28_1ADC /* [0,65535] */;
  uint32_t NNP8_28_2TAC /* [0,65535] */;
  uint32_t NNP8_28_2CLK /* [0,65535] */;
  uint32_t NNP8_28_2ADC /* [0,65535] */;
  uint32_t NNP8_29_1TAC /* [0,65535] */;
  uint32_t NNP8_29_1CLK /* [0,65535] */;
  uint32_t NNP8_29_1ADC /* [0,65535] */;
  uint32_t NNP8_29_2TAC /* [0,65535] */;
  uint32_t NNP8_29_2CLK /* [0,65535] */;
  uint32_t NNP8_29_2ADC /* [0,65535] */;
  uint32_t NNP8_30_1TAC /* [0,65535] */;
  uint32_t NNP8_30_1CLK /* [0,65535] */;
  uint32_t NNP8_30_1ADC /* [0,65535] */;
  uint32_t NNP8_30_2TAC /* [0,65535] */;
  uint32_t NNP8_30_2CLK /* [0,65535] */;
  uint32_t NNP8_30_2ADC /* [0,65535] */;
  uint32_t NNP8_31_1TAC /* [0,65535] */;
  uint32_t NNP8_31_1CLK /* [0,65535] */;
  uint32_t NNP8_31_1ADC /* [0,65535] */;
  uint32_t NNP8_31_2TAC /* [0,65535] */;
  uint32_t NNP8_31_2CLK /* [0,65535] */;
  uint32_t NNP8_31_2ADC /* [0,65535] */;
  uint32_t NNP8_32_1TAC /* [0,65535] */;
  uint32_t NNP8_32_1CLK /* [0,65535] */;
  uint32_t NNP8_32_1ADC /* [0,65535] */;
  uint32_t NNP8_32_2TAC /* [0,65535] */;
  uint32_t NNP8_32_2CLK /* [0,65535] */;
  uint32_t NNP8_32_2ADC /* [0,65535] */;
  uint32_t NNP8_33_1TAC /* [0,65535] */;
  uint32_t NNP8_33_1CLK /* [0,65535] */;
  uint32_t NNP8_33_1ADC /* [0,65535] */;
  uint32_t NNP8_33_2TAC /* [0,65535] */;
  uint32_t NNP8_33_2CLK /* [0,65535] */;
  uint32_t NNP8_33_2ADC /* [0,65535] */;
  uint32_t NNP8_34_1TAC /* [0,65535] */;
  uint32_t NNP8_34_1CLK /* [0,65535] */;
  uint32_t NNP8_34_1ADC /* [0,65535] */;
  uint32_t NNP8_34_2TAC /* [0,65535] */;
  uint32_t NNP8_34_2CLK /* [0,65535] */;
  uint32_t NNP8_34_2ADC /* [0,65535] */;
  uint32_t NNP8_35_1TAC /* [0,65535] */;
  uint32_t NNP8_35_1CLK /* [0,65535] */;
  uint32_t NNP8_35_1ADC /* [0,65535] */;
  uint32_t NNP8_35_2TAC /* [0,65535] */;
  uint32_t NNP8_35_2CLK /* [0,65535] */;
  uint32_t NNP8_35_2ADC /* [0,65535] */;
  uint32_t NNP8_36_1TAC /* [0,65535] */;
  uint32_t NNP8_36_1CLK /* [0,65535] */;
  uint32_t NNP8_36_1ADC /* [0,65535] */;
  uint32_t NNP8_36_2TAC /* [0,65535] */;
  uint32_t NNP8_36_2CLK /* [0,65535] */;
  uint32_t NNP8_36_2ADC /* [0,65535] */;
  uint32_t NNP8_37_1TAC /* [0,65535] */;
  uint32_t NNP8_37_1CLK /* [0,65535] */;
  uint32_t NNP8_37_1ADC /* [0,65535] */;
  uint32_t NNP8_37_2TAC /* [0,65535] */;
  uint32_t NNP8_37_2CLK /* [0,65535] */;
  uint32_t NNP8_37_2ADC /* [0,65535] */;
  uint32_t NNP8_38_1TAC /* [0,65535] */;
  uint32_t NNP8_38_1CLK /* [0,65535] */;
  uint32_t NNP8_38_1ADC /* [0,65535] */;
  uint32_t NNP8_38_2TAC /* [0,65535] */;
  uint32_t NNP8_38_2CLK /* [0,65535] */;
  uint32_t NNP8_38_2ADC /* [0,65535] */;
  uint32_t NNP8_39_1TAC /* [0,65535] */;
  uint32_t NNP8_39_1CLK /* [0,65535] */;
  uint32_t NNP8_39_1ADC /* [0,65535] */;
  uint32_t NNP8_39_2TAC /* [0,65535] */;
  uint32_t NNP8_39_2CLK /* [0,65535] */;
  uint32_t NNP8_39_2ADC /* [0,65535] */;
  uint32_t NNP8_40_1TAC /* [0,65535] */;
  uint32_t NNP8_40_1CLK /* [0,65535] */;
  uint32_t NNP8_40_1ADC /* [0,65535] */;
  uint32_t NNP8_40_2TAC /* [0,65535] */;
  uint32_t NNP8_40_2CLK /* [0,65535] */;
  uint32_t NNP8_40_2ADC /* [0,65535] */;
  uint32_t NNP8_41_1TAC /* [0,65535] */;
  uint32_t NNP8_41_1CLK /* [0,65535] */;
  uint32_t NNP8_41_1ADC /* [0,65535] */;
  uint32_t NNP8_41_2TAC /* [0,65535] */;
  uint32_t NNP8_41_2CLK /* [0,65535] */;
  uint32_t NNP8_41_2ADC /* [0,65535] */;
  uint32_t NNP8_42_1TAC /* [0,65535] */;
  uint32_t NNP8_42_1CLK /* [0,65535] */;
  uint32_t NNP8_42_1ADC /* [0,65535] */;
  uint32_t NNP8_42_2TAC /* [0,65535] */;
  uint32_t NNP8_42_2CLK /* [0,65535] */;
  uint32_t NNP8_42_2ADC /* [0,65535] */;
  uint32_t NNP8_43_1TAC /* [0,65535] */;
  uint32_t NNP8_43_1CLK /* [0,65535] */;
  uint32_t NNP8_43_1ADC /* [0,65535] */;
  uint32_t NNP8_43_2TAC /* [0,65535] */;
  uint32_t NNP8_43_2CLK /* [0,65535] */;
  uint32_t NNP8_43_2ADC /* [0,65535] */;
  uint32_t NNP8_44_1TAC /* [0,65535] */;
  uint32_t NNP8_44_1CLK /* [0,65535] */;
  uint32_t NNP8_44_1ADC /* [0,65535] */;
  uint32_t NNP8_44_2TAC /* [0,65535] */;
  uint32_t NNP8_44_2CLK /* [0,65535] */;
  uint32_t NNP8_44_2ADC /* [0,65535] */;
  uint32_t NNP8_45_1TAC /* [0,65535] */;
  uint32_t NNP8_45_1CLK /* [0,65535] */;
  uint32_t NNP8_45_1ADC /* [0,65535] */;
  uint32_t NNP8_45_2TAC /* [0,65535] */;
  uint32_t NNP8_45_2CLK /* [0,65535] */;
  uint32_t NNP8_45_2ADC /* [0,65535] */;
  uint32_t NNP8_46_1TAC /* [0,65535] */;
  uint32_t NNP8_46_1CLK /* [0,65535] */;
  uint32_t NNP8_46_1ADC /* [0,65535] */;
  uint32_t NNP8_46_2TAC /* [0,65535] */;
  uint32_t NNP8_46_2CLK /* [0,65535] */;
  uint32_t NNP8_46_2ADC /* [0,65535] */;
  uint32_t NNP8_47_1TAC /* [0,65535] */;
  uint32_t NNP8_47_1CLK /* [0,65535] */;
  uint32_t NNP8_47_1ADC /* [0,65535] */;
  uint32_t NNP8_47_2TAC /* [0,65535] */;
  uint32_t NNP8_47_2CLK /* [0,65535] */;
  uint32_t NNP8_47_2ADC /* [0,65535] */;
  uint32_t NNP8_48_1TAC /* [0,65535] */;
  uint32_t NNP8_48_1CLK /* [0,65535] */;
  uint32_t NNP8_48_1ADC /* [0,65535] */;
  uint32_t NNP8_48_2TAC /* [0,65535] */;
  uint32_t NNP8_48_2CLK /* [0,65535] */;
  uint32_t NNP8_48_2ADC /* [0,65535] */;
  uint32_t NNP8_49_1TAC /* [0,65535] */;
  uint32_t NNP8_49_1CLK /* [0,65535] */;
  uint32_t NNP8_49_1ADC /* [0,65535] */;
  uint32_t NNP8_49_2TAC /* [0,65535] */;
  uint32_t NNP8_49_2CLK /* [0,65535] */;
  uint32_t NNP8_49_2ADC /* [0,65535] */;
  uint32_t NNP8_50_1TAC /* [0,65535] */;
  uint32_t NNP8_50_1CLK /* [0,65535] */;
  uint32_t NNP8_50_1ADC /* [0,65535] */;
  uint32_t NNP8_50_2TAC /* [0,65535] */;
  uint32_t NNP8_50_2CLK /* [0,65535] */;
  uint32_t NNP8_50_2ADC /* [0,65535] */;
  uint32_t PSPX1M /* [1,65] */;
  uint32_t PSPX1MI[65 EXT_STRUCT_CTRL(PSPX1M)] /* [1,65] */;
  uint32_t PSPX1ME[65 EXT_STRUCT_CTRL(PSPX1M)] /* [1,650] */;
  uint32_t PSPX1 /* [0,650] */;
  uint32_t PSPX1v[650 EXT_STRUCT_CTRL(PSPX1)] /* [-1,-1] */;
  uint32_t PSPX2M /* [1,65] */;
  uint32_t PSPX2MI[65 EXT_STRUCT_CTRL(PSPX2M)] /* [1,65] */;
  uint32_t PSPX2ME[65 EXT_STRUCT_CTRL(PSPX2M)] /* [1,650] */;
  uint32_t PSPX2 /* [0,650] */;
  uint32_t PSPX2v[650 EXT_STRUCT_CTRL(PSPX2)] /* [-1,-1] */;
  uint32_t PSPX3M /* [1,65] */;
  uint32_t PSPX3MI[65 EXT_STRUCT_CTRL(PSPX3M)] /* [1,65] */;
  uint32_t PSPX3ME[65 EXT_STRUCT_CTRL(PSPX3M)] /* [1,650] */;
  uint32_t PSPX3 /* [0,650] */;
  uint32_t PSPX3v[650 EXT_STRUCT_CTRL(PSPX3)] /* [-1,-1] */;
  uint32_t PSPX4M /* [1,65] */;
  uint32_t PSPX4MI[65 EXT_STRUCT_CTRL(PSPX4M)] /* [1,65] */;
  uint32_t PSPX4ME[65 EXT_STRUCT_CTRL(PSPX4M)] /* [1,650] */;
  uint32_t PSPX4 /* [0,650] */;
  uint32_t PSPX4v[650 EXT_STRUCT_CTRL(PSPX4)] /* [-1,-1] */;
  uint32_t PSPX5M /* [1,65] */;
  uint32_t PSPX5MI[65 EXT_STRUCT_CTRL(PSPX5M)] /* [1,65] */;
  uint32_t PSPX5ME[65 EXT_STRUCT_CTRL(PSPX5M)] /* [1,650] */;
  uint32_t PSPX5 /* [0,650] */;
  uint32_t PSPX5v[650 EXT_STRUCT_CTRL(PSPX5)] /* [-1,-1] */;

} EXT_STR_h101;

/********************************************************
 *
 * Structure with multiple levels of arrays (partially)
 * recovered (recommended):
 */

typedef struct EXT_STR_h101_onion_t
{
  /* UNPACK */
  uint32_t TRIGGER;
  uint32_t EVENTNO;
  /* RAW */
  struct {
    uint32_t TFM;
    uint32_t TFMI[5 /* TFM */];
    uint32_t TFME[5 /* TFM */];
    uint32_t TF;
    uint32_t TFv[50 /* TF */];
    uint32_t TCM;
    uint32_t TCMI[5 /* TCM */];
    uint32_t TCME[5 /* TCM */];
    uint32_t TC;
    uint32_t TCv[50 /* TC */];
  } LOS[2];
  struct {
    uint32_t _T[4];
  } ROLU[2];
  struct {
    struct {
      uint32_t TF;
      uint32_t TC;
    } _[2];
  } TOFD[15];
  struct {
    struct {
      struct {
        uint32_t TAC;
        uint32_t CLK;
        uint32_t ADC;
      } _[2];
    } _[50];
  } NNP[8];
  struct {
    uint32_t M;
    uint32_t MI[65 /* M */];
    uint32_t ME[65 /* M */];
    uint32_t _;
    uint32_t v[650 /* _ */];
  } PSPX[5];

} EXT_STR_h101_onion;

/*******************************************************/

#define EXT_STR_h101_ITEMS_INFO(ok,si,struct_t,printerr) do { \
  ok = 1; \
  /* UNPACK */ \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TRIGGER,                         UINT32,\
                    "TRIGGER",15); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     EVENTNO,                         UINT32,\
                    "EVENTNO"); \
  /* RAW */ \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS1TFM,                         UINT32,\
                    "LOS1TFM",5); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TFMI,                        UINT32,\
                    "LOS1TFMI",                        "LOS1TFM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TFME,                        UINT32,\
                    "LOS1TFME",                        "LOS1TFM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS1TF,                          UINT32,\
                    "LOS1TF",50); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TFv,                         UINT32,\
                    "LOS1TFv",                         "LOS1TF"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS1TCM,                         UINT32,\
                    "LOS1TCM",5); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TCMI,                        UINT32,\
                    "LOS1TCMI",                        "LOS1TCM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TCME,                        UINT32,\
                    "LOS1TCME",                        "LOS1TCM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS1TC,                          UINT32,\
                    "LOS1TC",50); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TCv,                         UINT32,\
                    "LOS1TCv",                         "LOS1TC"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS2TFM,                         UINT32,\
                    "LOS2TFM",5); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS2TFMI,                        UINT32,\
                    "LOS2TFMI",                        "LOS2TFM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS2TFME,                        UINT32,\
                    "LOS2TFME",                        "LOS2TFM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS2TF,                          UINT32,\
                    "LOS2TF",50); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS2TFv,                         UINT32,\
                    "LOS2TFv",                         "LOS2TF"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS2TCM,                         UINT32,\
                    "LOS2TCM",5); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS2TCMI,                        UINT32,\
                    "LOS2TCMI",                        "LOS2TCM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS2TCME,                        UINT32,\
                    "LOS2TCME",                        "LOS2TCM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS2TC,                          UINT32,\
                    "LOS2TC",50); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS2TCv,                         UINT32,\
                    "LOS2TCv",                         "LOS2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     ROLU1_1T,                        UINT32,\
                    "ROLU1_1T"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     ROLU1_2T,                        UINT32,\
                    "ROLU1_2T"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     ROLU1_3T,                        UINT32,\
                    "ROLU1_3T"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     ROLU1_4T,                        UINT32,\
                    "ROLU1_4T"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     ROLU2_1T,                        UINT32,\
                    "ROLU2_1T"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     ROLU2_2T,                        UINT32,\
                    "ROLU2_2T"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     ROLU2_3T,                        UINT32,\
                    "ROLU2_3T"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     ROLU2_4T,                        UINT32,\
                    "ROLU2_4T"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD1_1TF,                       UINT32,\
                    "TOFD1_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD1_1TC,                       UINT32,\
                    "TOFD1_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD1_2TF,                       UINT32,\
                    "TOFD1_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD1_2TC,                       UINT32,\
                    "TOFD1_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD2_1TF,                       UINT32,\
                    "TOFD2_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD2_1TC,                       UINT32,\
                    "TOFD2_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD2_2TF,                       UINT32,\
                    "TOFD2_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD2_2TC,                       UINT32,\
                    "TOFD2_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD3_1TF,                       UINT32,\
                    "TOFD3_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD3_1TC,                       UINT32,\
                    "TOFD3_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD3_2TF,                       UINT32,\
                    "TOFD3_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD3_2TC,                       UINT32,\
                    "TOFD3_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD4_1TF,                       UINT32,\
                    "TOFD4_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD4_1TC,                       UINT32,\
                    "TOFD4_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD4_2TF,                       UINT32,\
                    "TOFD4_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD4_2TC,                       UINT32,\
                    "TOFD4_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD5_1TF,                       UINT32,\
                    "TOFD5_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD5_1TC,                       UINT32,\
                    "TOFD5_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD5_2TF,                       UINT32,\
                    "TOFD5_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD5_2TC,                       UINT32,\
                    "TOFD5_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD6_1TF,                       UINT32,\
                    "TOFD6_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD6_1TC,                       UINT32,\
                    "TOFD6_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD6_2TF,                       UINT32,\
                    "TOFD6_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD6_2TC,                       UINT32,\
                    "TOFD6_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD7_1TF,                       UINT32,\
                    "TOFD7_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD7_1TC,                       UINT32,\
                    "TOFD7_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD7_2TF,                       UINT32,\
                    "TOFD7_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD7_2TC,                       UINT32,\
                    "TOFD7_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD8_1TF,                       UINT32,\
                    "TOFD8_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD8_1TC,                       UINT32,\
                    "TOFD8_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD8_2TF,                       UINT32,\
                    "TOFD8_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD8_2TC,                       UINT32,\
                    "TOFD8_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD9_1TF,                       UINT32,\
                    "TOFD9_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD9_1TC,                       UINT32,\
                    "TOFD9_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD9_2TF,                       UINT32,\
                    "TOFD9_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD9_2TC,                       UINT32,\
                    "TOFD9_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD10_1TF,                      UINT32,\
                    "TOFD10_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD10_1TC,                      UINT32,\
                    "TOFD10_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD10_2TF,                      UINT32,\
                    "TOFD10_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD10_2TC,                      UINT32,\
                    "TOFD10_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD11_1TF,                      UINT32,\
                    "TOFD11_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD11_1TC,                      UINT32,\
                    "TOFD11_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD11_2TF,                      UINT32,\
                    "TOFD11_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD11_2TC,                      UINT32,\
                    "TOFD11_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD12_1TF,                      UINT32,\
                    "TOFD12_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD12_1TC,                      UINT32,\
                    "TOFD12_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD12_2TF,                      UINT32,\
                    "TOFD12_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD12_2TC,                      UINT32,\
                    "TOFD12_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD13_1TF,                      UINT32,\
                    "TOFD13_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD13_1TC,                      UINT32,\
                    "TOFD13_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD13_2TF,                      UINT32,\
                    "TOFD13_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD13_2TC,                      UINT32,\
                    "TOFD13_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD14_1TF,                      UINT32,\
                    "TOFD14_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD14_1TC,                      UINT32,\
                    "TOFD14_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD14_2TF,                      UINT32,\
                    "TOFD14_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD14_2TC,                      UINT32,\
                    "TOFD14_2TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD15_1TF,                      UINT32,\
                    "TOFD15_1TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD15_1TC,                      UINT32,\
                    "TOFD15_1TC"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD15_2TF,                      UINT32,\
                    "TOFD15_2TF"); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     TOFD15_2TC,                      UINT32,\
                    "TOFD15_2TC"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_1_1TAC,                     UINT32,\
                    "NNP1_1_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_1_1CLK,                     UINT32,\
                    "NNP1_1_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_1_1ADC,                     UINT32,\
                    "NNP1_1_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_1_2TAC,                     UINT32,\
                    "NNP1_1_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_1_2CLK,                     UINT32,\
                    "NNP1_1_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_1_2ADC,                     UINT32,\
                    "NNP1_1_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_2_1TAC,                     UINT32,\
                    "NNP1_2_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_2_1CLK,                     UINT32,\
                    "NNP1_2_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_2_1ADC,                     UINT32,\
                    "NNP1_2_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_2_2TAC,                     UINT32,\
                    "NNP1_2_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_2_2CLK,                     UINT32,\
                    "NNP1_2_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_2_2ADC,                     UINT32,\
                    "NNP1_2_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_3_1TAC,                     UINT32,\
                    "NNP1_3_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_3_1CLK,                     UINT32,\
                    "NNP1_3_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_3_1ADC,                     UINT32,\
                    "NNP1_3_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_3_2TAC,                     UINT32,\
                    "NNP1_3_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_3_2CLK,                     UINT32,\
                    "NNP1_3_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_3_2ADC,                     UINT32,\
                    "NNP1_3_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_4_1TAC,                     UINT32,\
                    "NNP1_4_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_4_1CLK,                     UINT32,\
                    "NNP1_4_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_4_1ADC,                     UINT32,\
                    "NNP1_4_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_4_2TAC,                     UINT32,\
                    "NNP1_4_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_4_2CLK,                     UINT32,\
                    "NNP1_4_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_4_2ADC,                     UINT32,\
                    "NNP1_4_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_5_1TAC,                     UINT32,\
                    "NNP1_5_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_5_1CLK,                     UINT32,\
                    "NNP1_5_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_5_1ADC,                     UINT32,\
                    "NNP1_5_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_5_2TAC,                     UINT32,\
                    "NNP1_5_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_5_2CLK,                     UINT32,\
                    "NNP1_5_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_5_2ADC,                     UINT32,\
                    "NNP1_5_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_6_1TAC,                     UINT32,\
                    "NNP1_6_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_6_1CLK,                     UINT32,\
                    "NNP1_6_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_6_1ADC,                     UINT32,\
                    "NNP1_6_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_6_2TAC,                     UINT32,\
                    "NNP1_6_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_6_2CLK,                     UINT32,\
                    "NNP1_6_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_6_2ADC,                     UINT32,\
                    "NNP1_6_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_7_1TAC,                     UINT32,\
                    "NNP1_7_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_7_1CLK,                     UINT32,\
                    "NNP1_7_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_7_1ADC,                     UINT32,\
                    "NNP1_7_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_7_2TAC,                     UINT32,\
                    "NNP1_7_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_7_2CLK,                     UINT32,\
                    "NNP1_7_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_7_2ADC,                     UINT32,\
                    "NNP1_7_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_8_1TAC,                     UINT32,\
                    "NNP1_8_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_8_1CLK,                     UINT32,\
                    "NNP1_8_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_8_1ADC,                     UINT32,\
                    "NNP1_8_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_8_2TAC,                     UINT32,\
                    "NNP1_8_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_8_2CLK,                     UINT32,\
                    "NNP1_8_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_8_2ADC,                     UINT32,\
                    "NNP1_8_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_9_1TAC,                     UINT32,\
                    "NNP1_9_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_9_1CLK,                     UINT32,\
                    "NNP1_9_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_9_1ADC,                     UINT32,\
                    "NNP1_9_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_9_2TAC,                     UINT32,\
                    "NNP1_9_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_9_2CLK,                     UINT32,\
                    "NNP1_9_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_9_2ADC,                     UINT32,\
                    "NNP1_9_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_10_1TAC,                    UINT32,\
                    "NNP1_10_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_10_1CLK,                    UINT32,\
                    "NNP1_10_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_10_1ADC,                    UINT32,\
                    "NNP1_10_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_10_2TAC,                    UINT32,\
                    "NNP1_10_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_10_2CLK,                    UINT32,\
                    "NNP1_10_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_10_2ADC,                    UINT32,\
                    "NNP1_10_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_11_1TAC,                    UINT32,\
                    "NNP1_11_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_11_1CLK,                    UINT32,\
                    "NNP1_11_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_11_1ADC,                    UINT32,\
                    "NNP1_11_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_11_2TAC,                    UINT32,\
                    "NNP1_11_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_11_2CLK,                    UINT32,\
                    "NNP1_11_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_11_2ADC,                    UINT32,\
                    "NNP1_11_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_12_1TAC,                    UINT32,\
                    "NNP1_12_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_12_1CLK,                    UINT32,\
                    "NNP1_12_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_12_1ADC,                    UINT32,\
                    "NNP1_12_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_12_2TAC,                    UINT32,\
                    "NNP1_12_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_12_2CLK,                    UINT32,\
                    "NNP1_12_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_12_2ADC,                    UINT32,\
                    "NNP1_12_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_13_1TAC,                    UINT32,\
                    "NNP1_13_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_13_1CLK,                    UINT32,\
                    "NNP1_13_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_13_1ADC,                    UINT32,\
                    "NNP1_13_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_13_2TAC,                    UINT32,\
                    "NNP1_13_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_13_2CLK,                    UINT32,\
                    "NNP1_13_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_13_2ADC,                    UINT32,\
                    "NNP1_13_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_14_1TAC,                    UINT32,\
                    "NNP1_14_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_14_1CLK,                    UINT32,\
                    "NNP1_14_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_14_1ADC,                    UINT32,\
                    "NNP1_14_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_14_2TAC,                    UINT32,\
                    "NNP1_14_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_14_2CLK,                    UINT32,\
                    "NNP1_14_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_14_2ADC,                    UINT32,\
                    "NNP1_14_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_15_1TAC,                    UINT32,\
                    "NNP1_15_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_15_1CLK,                    UINT32,\
                    "NNP1_15_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_15_1ADC,                    UINT32,\
                    "NNP1_15_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_15_2TAC,                    UINT32,\
                    "NNP1_15_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_15_2CLK,                    UINT32,\
                    "NNP1_15_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_15_2ADC,                    UINT32,\
                    "NNP1_15_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_16_1TAC,                    UINT32,\
                    "NNP1_16_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_16_1CLK,                    UINT32,\
                    "NNP1_16_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_16_1ADC,                    UINT32,\
                    "NNP1_16_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_16_2TAC,                    UINT32,\
                    "NNP1_16_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_16_2CLK,                    UINT32,\
                    "NNP1_16_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_16_2ADC,                    UINT32,\
                    "NNP1_16_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_17_1TAC,                    UINT32,\
                    "NNP1_17_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_17_1CLK,                    UINT32,\
                    "NNP1_17_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_17_1ADC,                    UINT32,\
                    "NNP1_17_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_17_2TAC,                    UINT32,\
                    "NNP1_17_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_17_2CLK,                    UINT32,\
                    "NNP1_17_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_17_2ADC,                    UINT32,\
                    "NNP1_17_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_18_1TAC,                    UINT32,\
                    "NNP1_18_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_18_1CLK,                    UINT32,\
                    "NNP1_18_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_18_1ADC,                    UINT32,\
                    "NNP1_18_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_18_2TAC,                    UINT32,\
                    "NNP1_18_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_18_2CLK,                    UINT32,\
                    "NNP1_18_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_18_2ADC,                    UINT32,\
                    "NNP1_18_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_19_1TAC,                    UINT32,\
                    "NNP1_19_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_19_1CLK,                    UINT32,\
                    "NNP1_19_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_19_1ADC,                    UINT32,\
                    "NNP1_19_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_19_2TAC,                    UINT32,\
                    "NNP1_19_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_19_2CLK,                    UINT32,\
                    "NNP1_19_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_19_2ADC,                    UINT32,\
                    "NNP1_19_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_20_1TAC,                    UINT32,\
                    "NNP1_20_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_20_1CLK,                    UINT32,\
                    "NNP1_20_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_20_1ADC,                    UINT32,\
                    "NNP1_20_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_20_2TAC,                    UINT32,\
                    "NNP1_20_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_20_2CLK,                    UINT32,\
                    "NNP1_20_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_20_2ADC,                    UINT32,\
                    "NNP1_20_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_21_1TAC,                    UINT32,\
                    "NNP1_21_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_21_1CLK,                    UINT32,\
                    "NNP1_21_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_21_1ADC,                    UINT32,\
                    "NNP1_21_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_21_2TAC,                    UINT32,\
                    "NNP1_21_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_21_2CLK,                    UINT32,\
                    "NNP1_21_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_21_2ADC,                    UINT32,\
                    "NNP1_21_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_22_1TAC,                    UINT32,\
                    "NNP1_22_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_22_1CLK,                    UINT32,\
                    "NNP1_22_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_22_1ADC,                    UINT32,\
                    "NNP1_22_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_22_2TAC,                    UINT32,\
                    "NNP1_22_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_22_2CLK,                    UINT32,\
                    "NNP1_22_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_22_2ADC,                    UINT32,\
                    "NNP1_22_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_23_1TAC,                    UINT32,\
                    "NNP1_23_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_23_1CLK,                    UINT32,\
                    "NNP1_23_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_23_1ADC,                    UINT32,\
                    "NNP1_23_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_23_2TAC,                    UINT32,\
                    "NNP1_23_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_23_2CLK,                    UINT32,\
                    "NNP1_23_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_23_2ADC,                    UINT32,\
                    "NNP1_23_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_24_1TAC,                    UINT32,\
                    "NNP1_24_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_24_1CLK,                    UINT32,\
                    "NNP1_24_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_24_1ADC,                    UINT32,\
                    "NNP1_24_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_24_2TAC,                    UINT32,\
                    "NNP1_24_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_24_2CLK,                    UINT32,\
                    "NNP1_24_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_24_2ADC,                    UINT32,\
                    "NNP1_24_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_25_1TAC,                    UINT32,\
                    "NNP1_25_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_25_1CLK,                    UINT32,\
                    "NNP1_25_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_25_1ADC,                    UINT32,\
                    "NNP1_25_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_25_2TAC,                    UINT32,\
                    "NNP1_25_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_25_2CLK,                    UINT32,\
                    "NNP1_25_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_25_2ADC,                    UINT32,\
                    "NNP1_25_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_26_1TAC,                    UINT32,\
                    "NNP1_26_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_26_1CLK,                    UINT32,\
                    "NNP1_26_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_26_1ADC,                    UINT32,\
                    "NNP1_26_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_26_2TAC,                    UINT32,\
                    "NNP1_26_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_26_2CLK,                    UINT32,\
                    "NNP1_26_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_26_2ADC,                    UINT32,\
                    "NNP1_26_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_27_1TAC,                    UINT32,\
                    "NNP1_27_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_27_1CLK,                    UINT32,\
                    "NNP1_27_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_27_1ADC,                    UINT32,\
                    "NNP1_27_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_27_2TAC,                    UINT32,\
                    "NNP1_27_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_27_2CLK,                    UINT32,\
                    "NNP1_27_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_27_2ADC,                    UINT32,\
                    "NNP1_27_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_28_1TAC,                    UINT32,\
                    "NNP1_28_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_28_1CLK,                    UINT32,\
                    "NNP1_28_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_28_1ADC,                    UINT32,\
                    "NNP1_28_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_28_2TAC,                    UINT32,\
                    "NNP1_28_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_28_2CLK,                    UINT32,\
                    "NNP1_28_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_28_2ADC,                    UINT32,\
                    "NNP1_28_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_29_1TAC,                    UINT32,\
                    "NNP1_29_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_29_1CLK,                    UINT32,\
                    "NNP1_29_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_29_1ADC,                    UINT32,\
                    "NNP1_29_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_29_2TAC,                    UINT32,\
                    "NNP1_29_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_29_2CLK,                    UINT32,\
                    "NNP1_29_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_29_2ADC,                    UINT32,\
                    "NNP1_29_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_30_1TAC,                    UINT32,\
                    "NNP1_30_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_30_1CLK,                    UINT32,\
                    "NNP1_30_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_30_1ADC,                    UINT32,\
                    "NNP1_30_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_30_2TAC,                    UINT32,\
                    "NNP1_30_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_30_2CLK,                    UINT32,\
                    "NNP1_30_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_30_2ADC,                    UINT32,\
                    "NNP1_30_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_31_1TAC,                    UINT32,\
                    "NNP1_31_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_31_1CLK,                    UINT32,\
                    "NNP1_31_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_31_1ADC,                    UINT32,\
                    "NNP1_31_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_31_2TAC,                    UINT32,\
                    "NNP1_31_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_31_2CLK,                    UINT32,\
                    "NNP1_31_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_31_2ADC,                    UINT32,\
                    "NNP1_31_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_32_1TAC,                    UINT32,\
                    "NNP1_32_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_32_1CLK,                    UINT32,\
                    "NNP1_32_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_32_1ADC,                    UINT32,\
                    "NNP1_32_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_32_2TAC,                    UINT32,\
                    "NNP1_32_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_32_2CLK,                    UINT32,\
                    "NNP1_32_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_32_2ADC,                    UINT32,\
                    "NNP1_32_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_33_1TAC,                    UINT32,\
                    "NNP1_33_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_33_1CLK,                    UINT32,\
                    "NNP1_33_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_33_1ADC,                    UINT32,\
                    "NNP1_33_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_33_2TAC,                    UINT32,\
                    "NNP1_33_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_33_2CLK,                    UINT32,\
                    "NNP1_33_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_33_2ADC,                    UINT32,\
                    "NNP1_33_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_34_1TAC,                    UINT32,\
                    "NNP1_34_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_34_1CLK,                    UINT32,\
                    "NNP1_34_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_34_1ADC,                    UINT32,\
                    "NNP1_34_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_34_2TAC,                    UINT32,\
                    "NNP1_34_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_34_2CLK,                    UINT32,\
                    "NNP1_34_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_34_2ADC,                    UINT32,\
                    "NNP1_34_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_35_1TAC,                    UINT32,\
                    "NNP1_35_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_35_1CLK,                    UINT32,\
                    "NNP1_35_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_35_1ADC,                    UINT32,\
                    "NNP1_35_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_35_2TAC,                    UINT32,\
                    "NNP1_35_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_35_2CLK,                    UINT32,\
                    "NNP1_35_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_35_2ADC,                    UINT32,\
                    "NNP1_35_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_36_1TAC,                    UINT32,\
                    "NNP1_36_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_36_1CLK,                    UINT32,\
                    "NNP1_36_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_36_1ADC,                    UINT32,\
                    "NNP1_36_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_36_2TAC,                    UINT32,\
                    "NNP1_36_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_36_2CLK,                    UINT32,\
                    "NNP1_36_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_36_2ADC,                    UINT32,\
                    "NNP1_36_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_37_1TAC,                    UINT32,\
                    "NNP1_37_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_37_1CLK,                    UINT32,\
                    "NNP1_37_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_37_1ADC,                    UINT32,\
                    "NNP1_37_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_37_2TAC,                    UINT32,\
                    "NNP1_37_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_37_2CLK,                    UINT32,\
                    "NNP1_37_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_37_2ADC,                    UINT32,\
                    "NNP1_37_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_38_1TAC,                    UINT32,\
                    "NNP1_38_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_38_1CLK,                    UINT32,\
                    "NNP1_38_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_38_1ADC,                    UINT32,\
                    "NNP1_38_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_38_2TAC,                    UINT32,\
                    "NNP1_38_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_38_2CLK,                    UINT32,\
                    "NNP1_38_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_38_2ADC,                    UINT32,\
                    "NNP1_38_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_39_1TAC,                    UINT32,\
                    "NNP1_39_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_39_1CLK,                    UINT32,\
                    "NNP1_39_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_39_1ADC,                    UINT32,\
                    "NNP1_39_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_39_2TAC,                    UINT32,\
                    "NNP1_39_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_39_2CLK,                    UINT32,\
                    "NNP1_39_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_39_2ADC,                    UINT32,\
                    "NNP1_39_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_40_1TAC,                    UINT32,\
                    "NNP1_40_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_40_1CLK,                    UINT32,\
                    "NNP1_40_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_40_1ADC,                    UINT32,\
                    "NNP1_40_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_40_2TAC,                    UINT32,\
                    "NNP1_40_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_40_2CLK,                    UINT32,\
                    "NNP1_40_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_40_2ADC,                    UINT32,\
                    "NNP1_40_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_41_1TAC,                    UINT32,\
                    "NNP1_41_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_41_1CLK,                    UINT32,\
                    "NNP1_41_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_41_1ADC,                    UINT32,\
                    "NNP1_41_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_41_2TAC,                    UINT32,\
                    "NNP1_41_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_41_2CLK,                    UINT32,\
                    "NNP1_41_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_41_2ADC,                    UINT32,\
                    "NNP1_41_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_42_1TAC,                    UINT32,\
                    "NNP1_42_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_42_1CLK,                    UINT32,\
                    "NNP1_42_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_42_1ADC,                    UINT32,\
                    "NNP1_42_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_42_2TAC,                    UINT32,\
                    "NNP1_42_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_42_2CLK,                    UINT32,\
                    "NNP1_42_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_42_2ADC,                    UINT32,\
                    "NNP1_42_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_43_1TAC,                    UINT32,\
                    "NNP1_43_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_43_1CLK,                    UINT32,\
                    "NNP1_43_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_43_1ADC,                    UINT32,\
                    "NNP1_43_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_43_2TAC,                    UINT32,\
                    "NNP1_43_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_43_2CLK,                    UINT32,\
                    "NNP1_43_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_43_2ADC,                    UINT32,\
                    "NNP1_43_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_44_1TAC,                    UINT32,\
                    "NNP1_44_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_44_1CLK,                    UINT32,\
                    "NNP1_44_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_44_1ADC,                    UINT32,\
                    "NNP1_44_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_44_2TAC,                    UINT32,\
                    "NNP1_44_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_44_2CLK,                    UINT32,\
                    "NNP1_44_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_44_2ADC,                    UINT32,\
                    "NNP1_44_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_45_1TAC,                    UINT32,\
                    "NNP1_45_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_45_1CLK,                    UINT32,\
                    "NNP1_45_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_45_1ADC,                    UINT32,\
                    "NNP1_45_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_45_2TAC,                    UINT32,\
                    "NNP1_45_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_45_2CLK,                    UINT32,\
                    "NNP1_45_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_45_2ADC,                    UINT32,\
                    "NNP1_45_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_46_1TAC,                    UINT32,\
                    "NNP1_46_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_46_1CLK,                    UINT32,\
                    "NNP1_46_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_46_1ADC,                    UINT32,\
                    "NNP1_46_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_46_2TAC,                    UINT32,\
                    "NNP1_46_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_46_2CLK,                    UINT32,\
                    "NNP1_46_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_46_2ADC,                    UINT32,\
                    "NNP1_46_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_47_1TAC,                    UINT32,\
                    "NNP1_47_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_47_1CLK,                    UINT32,\
                    "NNP1_47_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_47_1ADC,                    UINT32,\
                    "NNP1_47_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_47_2TAC,                    UINT32,\
                    "NNP1_47_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_47_2CLK,                    UINT32,\
                    "NNP1_47_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_47_2ADC,                    UINT32,\
                    "NNP1_47_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_48_1TAC,                    UINT32,\
                    "NNP1_48_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_48_1CLK,                    UINT32,\
                    "NNP1_48_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_48_1ADC,                    UINT32,\
                    "NNP1_48_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_48_2TAC,                    UINT32,\
                    "NNP1_48_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_48_2CLK,                    UINT32,\
                    "NNP1_48_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_48_2ADC,                    UINT32,\
                    "NNP1_48_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_49_1TAC,                    UINT32,\
                    "NNP1_49_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_49_1CLK,                    UINT32,\
                    "NNP1_49_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_49_1ADC,                    UINT32,\
                    "NNP1_49_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_49_2TAC,                    UINT32,\
                    "NNP1_49_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_49_2CLK,                    UINT32,\
                    "NNP1_49_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_49_2ADC,                    UINT32,\
                    "NNP1_49_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_50_1TAC,                    UINT32,\
                    "NNP1_50_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_50_1CLK,                    UINT32,\
                    "NNP1_50_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_50_1ADC,                    UINT32,\
                    "NNP1_50_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_50_2TAC,                    UINT32,\
                    "NNP1_50_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_50_2CLK,                    UINT32,\
                    "NNP1_50_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP1_50_2ADC,                    UINT32,\
                    "NNP1_50_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_1_1TAC,                     UINT32,\
                    "NNP2_1_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_1_1CLK,                     UINT32,\
                    "NNP2_1_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_1_1ADC,                     UINT32,\
                    "NNP2_1_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_1_2TAC,                     UINT32,\
                    "NNP2_1_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_1_2CLK,                     UINT32,\
                    "NNP2_1_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_1_2ADC,                     UINT32,\
                    "NNP2_1_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_2_1TAC,                     UINT32,\
                    "NNP2_2_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_2_1CLK,                     UINT32,\
                    "NNP2_2_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_2_1ADC,                     UINT32,\
                    "NNP2_2_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_2_2TAC,                     UINT32,\
                    "NNP2_2_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_2_2CLK,                     UINT32,\
                    "NNP2_2_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_2_2ADC,                     UINT32,\
                    "NNP2_2_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_3_1TAC,                     UINT32,\
                    "NNP2_3_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_3_1CLK,                     UINT32,\
                    "NNP2_3_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_3_1ADC,                     UINT32,\
                    "NNP2_3_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_3_2TAC,                     UINT32,\
                    "NNP2_3_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_3_2CLK,                     UINT32,\
                    "NNP2_3_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_3_2ADC,                     UINT32,\
                    "NNP2_3_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_4_1TAC,                     UINT32,\
                    "NNP2_4_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_4_1CLK,                     UINT32,\
                    "NNP2_4_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_4_1ADC,                     UINT32,\
                    "NNP2_4_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_4_2TAC,                     UINT32,\
                    "NNP2_4_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_4_2CLK,                     UINT32,\
                    "NNP2_4_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_4_2ADC,                     UINT32,\
                    "NNP2_4_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_5_1TAC,                     UINT32,\
                    "NNP2_5_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_5_1CLK,                     UINT32,\
                    "NNP2_5_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_5_1ADC,                     UINT32,\
                    "NNP2_5_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_5_2TAC,                     UINT32,\
                    "NNP2_5_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_5_2CLK,                     UINT32,\
                    "NNP2_5_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_5_2ADC,                     UINT32,\
                    "NNP2_5_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_6_1TAC,                     UINT32,\
                    "NNP2_6_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_6_1CLK,                     UINT32,\
                    "NNP2_6_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_6_1ADC,                     UINT32,\
                    "NNP2_6_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_6_2TAC,                     UINT32,\
                    "NNP2_6_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_6_2CLK,                     UINT32,\
                    "NNP2_6_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_6_2ADC,                     UINT32,\
                    "NNP2_6_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_7_1TAC,                     UINT32,\
                    "NNP2_7_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_7_1CLK,                     UINT32,\
                    "NNP2_7_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_7_1ADC,                     UINT32,\
                    "NNP2_7_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_7_2TAC,                     UINT32,\
                    "NNP2_7_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_7_2CLK,                     UINT32,\
                    "NNP2_7_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_7_2ADC,                     UINT32,\
                    "NNP2_7_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_8_1TAC,                     UINT32,\
                    "NNP2_8_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_8_1CLK,                     UINT32,\
                    "NNP2_8_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_8_1ADC,                     UINT32,\
                    "NNP2_8_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_8_2TAC,                     UINT32,\
                    "NNP2_8_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_8_2CLK,                     UINT32,\
                    "NNP2_8_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_8_2ADC,                     UINT32,\
                    "NNP2_8_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_9_1TAC,                     UINT32,\
                    "NNP2_9_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_9_1CLK,                     UINT32,\
                    "NNP2_9_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_9_1ADC,                     UINT32,\
                    "NNP2_9_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_9_2TAC,                     UINT32,\
                    "NNP2_9_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_9_2CLK,                     UINT32,\
                    "NNP2_9_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_9_2ADC,                     UINT32,\
                    "NNP2_9_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_10_1TAC,                    UINT32,\
                    "NNP2_10_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_10_1CLK,                    UINT32,\
                    "NNP2_10_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_10_1ADC,                    UINT32,\
                    "NNP2_10_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_10_2TAC,                    UINT32,\
                    "NNP2_10_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_10_2CLK,                    UINT32,\
                    "NNP2_10_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_10_2ADC,                    UINT32,\
                    "NNP2_10_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_11_1TAC,                    UINT32,\
                    "NNP2_11_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_11_1CLK,                    UINT32,\
                    "NNP2_11_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_11_1ADC,                    UINT32,\
                    "NNP2_11_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_11_2TAC,                    UINT32,\
                    "NNP2_11_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_11_2CLK,                    UINT32,\
                    "NNP2_11_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_11_2ADC,                    UINT32,\
                    "NNP2_11_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_12_1TAC,                    UINT32,\
                    "NNP2_12_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_12_1CLK,                    UINT32,\
                    "NNP2_12_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_12_1ADC,                    UINT32,\
                    "NNP2_12_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_12_2TAC,                    UINT32,\
                    "NNP2_12_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_12_2CLK,                    UINT32,\
                    "NNP2_12_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_12_2ADC,                    UINT32,\
                    "NNP2_12_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_13_1TAC,                    UINT32,\
                    "NNP2_13_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_13_1CLK,                    UINT32,\
                    "NNP2_13_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_13_1ADC,                    UINT32,\
                    "NNP2_13_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_13_2TAC,                    UINT32,\
                    "NNP2_13_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_13_2CLK,                    UINT32,\
                    "NNP2_13_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_13_2ADC,                    UINT32,\
                    "NNP2_13_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_14_1TAC,                    UINT32,\
                    "NNP2_14_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_14_1CLK,                    UINT32,\
                    "NNP2_14_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_14_1ADC,                    UINT32,\
                    "NNP2_14_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_14_2TAC,                    UINT32,\
                    "NNP2_14_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_14_2CLK,                    UINT32,\
                    "NNP2_14_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_14_2ADC,                    UINT32,\
                    "NNP2_14_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_15_1TAC,                    UINT32,\
                    "NNP2_15_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_15_1CLK,                    UINT32,\
                    "NNP2_15_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_15_1ADC,                    UINT32,\
                    "NNP2_15_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_15_2TAC,                    UINT32,\
                    "NNP2_15_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_15_2CLK,                    UINT32,\
                    "NNP2_15_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_15_2ADC,                    UINT32,\
                    "NNP2_15_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_16_1TAC,                    UINT32,\
                    "NNP2_16_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_16_1CLK,                    UINT32,\
                    "NNP2_16_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_16_1ADC,                    UINT32,\
                    "NNP2_16_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_16_2TAC,                    UINT32,\
                    "NNP2_16_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_16_2CLK,                    UINT32,\
                    "NNP2_16_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_16_2ADC,                    UINT32,\
                    "NNP2_16_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_17_1TAC,                    UINT32,\
                    "NNP2_17_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_17_1CLK,                    UINT32,\
                    "NNP2_17_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_17_1ADC,                    UINT32,\
                    "NNP2_17_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_17_2TAC,                    UINT32,\
                    "NNP2_17_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_17_2CLK,                    UINT32,\
                    "NNP2_17_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_17_2ADC,                    UINT32,\
                    "NNP2_17_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_18_1TAC,                    UINT32,\
                    "NNP2_18_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_18_1CLK,                    UINT32,\
                    "NNP2_18_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_18_1ADC,                    UINT32,\
                    "NNP2_18_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_18_2TAC,                    UINT32,\
                    "NNP2_18_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_18_2CLK,                    UINT32,\
                    "NNP2_18_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_18_2ADC,                    UINT32,\
                    "NNP2_18_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_19_1TAC,                    UINT32,\
                    "NNP2_19_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_19_1CLK,                    UINT32,\
                    "NNP2_19_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_19_1ADC,                    UINT32,\
                    "NNP2_19_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_19_2TAC,                    UINT32,\
                    "NNP2_19_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_19_2CLK,                    UINT32,\
                    "NNP2_19_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_19_2ADC,                    UINT32,\
                    "NNP2_19_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_20_1TAC,                    UINT32,\
                    "NNP2_20_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_20_1CLK,                    UINT32,\
                    "NNP2_20_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_20_1ADC,                    UINT32,\
                    "NNP2_20_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_20_2TAC,                    UINT32,\
                    "NNP2_20_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_20_2CLK,                    UINT32,\
                    "NNP2_20_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_20_2ADC,                    UINT32,\
                    "NNP2_20_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_21_1TAC,                    UINT32,\
                    "NNP2_21_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_21_1CLK,                    UINT32,\
                    "NNP2_21_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_21_1ADC,                    UINT32,\
                    "NNP2_21_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_21_2TAC,                    UINT32,\
                    "NNP2_21_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_21_2CLK,                    UINT32,\
                    "NNP2_21_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_21_2ADC,                    UINT32,\
                    "NNP2_21_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_22_1TAC,                    UINT32,\
                    "NNP2_22_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_22_1CLK,                    UINT32,\
                    "NNP2_22_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_22_1ADC,                    UINT32,\
                    "NNP2_22_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_22_2TAC,                    UINT32,\
                    "NNP2_22_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_22_2CLK,                    UINT32,\
                    "NNP2_22_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_22_2ADC,                    UINT32,\
                    "NNP2_22_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_23_1TAC,                    UINT32,\
                    "NNP2_23_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_23_1CLK,                    UINT32,\
                    "NNP2_23_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_23_1ADC,                    UINT32,\
                    "NNP2_23_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_23_2TAC,                    UINT32,\
                    "NNP2_23_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_23_2CLK,                    UINT32,\
                    "NNP2_23_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_23_2ADC,                    UINT32,\
                    "NNP2_23_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_24_1TAC,                    UINT32,\
                    "NNP2_24_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_24_1CLK,                    UINT32,\
                    "NNP2_24_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_24_1ADC,                    UINT32,\
                    "NNP2_24_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_24_2TAC,                    UINT32,\
                    "NNP2_24_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_24_2CLK,                    UINT32,\
                    "NNP2_24_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_24_2ADC,                    UINT32,\
                    "NNP2_24_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_25_1TAC,                    UINT32,\
                    "NNP2_25_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_25_1CLK,                    UINT32,\
                    "NNP2_25_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_25_1ADC,                    UINT32,\
                    "NNP2_25_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_25_2TAC,                    UINT32,\
                    "NNP2_25_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_25_2CLK,                    UINT32,\
                    "NNP2_25_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_25_2ADC,                    UINT32,\
                    "NNP2_25_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_26_1TAC,                    UINT32,\
                    "NNP2_26_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_26_1CLK,                    UINT32,\
                    "NNP2_26_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_26_1ADC,                    UINT32,\
                    "NNP2_26_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_26_2TAC,                    UINT32,\
                    "NNP2_26_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_26_2CLK,                    UINT32,\
                    "NNP2_26_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_26_2ADC,                    UINT32,\
                    "NNP2_26_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_27_1TAC,                    UINT32,\
                    "NNP2_27_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_27_1CLK,                    UINT32,\
                    "NNP2_27_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_27_1ADC,                    UINT32,\
                    "NNP2_27_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_27_2TAC,                    UINT32,\
                    "NNP2_27_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_27_2CLK,                    UINT32,\
                    "NNP2_27_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_27_2ADC,                    UINT32,\
                    "NNP2_27_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_28_1TAC,                    UINT32,\
                    "NNP2_28_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_28_1CLK,                    UINT32,\
                    "NNP2_28_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_28_1ADC,                    UINT32,\
                    "NNP2_28_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_28_2TAC,                    UINT32,\
                    "NNP2_28_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_28_2CLK,                    UINT32,\
                    "NNP2_28_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_28_2ADC,                    UINT32,\
                    "NNP2_28_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_29_1TAC,                    UINT32,\
                    "NNP2_29_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_29_1CLK,                    UINT32,\
                    "NNP2_29_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_29_1ADC,                    UINT32,\
                    "NNP2_29_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_29_2TAC,                    UINT32,\
                    "NNP2_29_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_29_2CLK,                    UINT32,\
                    "NNP2_29_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_29_2ADC,                    UINT32,\
                    "NNP2_29_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_30_1TAC,                    UINT32,\
                    "NNP2_30_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_30_1CLK,                    UINT32,\
                    "NNP2_30_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_30_1ADC,                    UINT32,\
                    "NNP2_30_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_30_2TAC,                    UINT32,\
                    "NNP2_30_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_30_2CLK,                    UINT32,\
                    "NNP2_30_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_30_2ADC,                    UINT32,\
                    "NNP2_30_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_31_1TAC,                    UINT32,\
                    "NNP2_31_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_31_1CLK,                    UINT32,\
                    "NNP2_31_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_31_1ADC,                    UINT32,\
                    "NNP2_31_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_31_2TAC,                    UINT32,\
                    "NNP2_31_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_31_2CLK,                    UINT32,\
                    "NNP2_31_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_31_2ADC,                    UINT32,\
                    "NNP2_31_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_32_1TAC,                    UINT32,\
                    "NNP2_32_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_32_1CLK,                    UINT32,\
                    "NNP2_32_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_32_1ADC,                    UINT32,\
                    "NNP2_32_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_32_2TAC,                    UINT32,\
                    "NNP2_32_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_32_2CLK,                    UINT32,\
                    "NNP2_32_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_32_2ADC,                    UINT32,\
                    "NNP2_32_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_33_1TAC,                    UINT32,\
                    "NNP2_33_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_33_1CLK,                    UINT32,\
                    "NNP2_33_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_33_1ADC,                    UINT32,\
                    "NNP2_33_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_33_2TAC,                    UINT32,\
                    "NNP2_33_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_33_2CLK,                    UINT32,\
                    "NNP2_33_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_33_2ADC,                    UINT32,\
                    "NNP2_33_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_34_1TAC,                    UINT32,\
                    "NNP2_34_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_34_1CLK,                    UINT32,\
                    "NNP2_34_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_34_1ADC,                    UINT32,\
                    "NNP2_34_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_34_2TAC,                    UINT32,\
                    "NNP2_34_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_34_2CLK,                    UINT32,\
                    "NNP2_34_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_34_2ADC,                    UINT32,\
                    "NNP2_34_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_35_1TAC,                    UINT32,\
                    "NNP2_35_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_35_1CLK,                    UINT32,\
                    "NNP2_35_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_35_1ADC,                    UINT32,\
                    "NNP2_35_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_35_2TAC,                    UINT32,\
                    "NNP2_35_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_35_2CLK,                    UINT32,\
                    "NNP2_35_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_35_2ADC,                    UINT32,\
                    "NNP2_35_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_36_1TAC,                    UINT32,\
                    "NNP2_36_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_36_1CLK,                    UINT32,\
                    "NNP2_36_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_36_1ADC,                    UINT32,\
                    "NNP2_36_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_36_2TAC,                    UINT32,\
                    "NNP2_36_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_36_2CLK,                    UINT32,\
                    "NNP2_36_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_36_2ADC,                    UINT32,\
                    "NNP2_36_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_37_1TAC,                    UINT32,\
                    "NNP2_37_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_37_1CLK,                    UINT32,\
                    "NNP2_37_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_37_1ADC,                    UINT32,\
                    "NNP2_37_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_37_2TAC,                    UINT32,\
                    "NNP2_37_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_37_2CLK,                    UINT32,\
                    "NNP2_37_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_37_2ADC,                    UINT32,\
                    "NNP2_37_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_38_1TAC,                    UINT32,\
                    "NNP2_38_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_38_1CLK,                    UINT32,\
                    "NNP2_38_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_38_1ADC,                    UINT32,\
                    "NNP2_38_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_38_2TAC,                    UINT32,\
                    "NNP2_38_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_38_2CLK,                    UINT32,\
                    "NNP2_38_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_38_2ADC,                    UINT32,\
                    "NNP2_38_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_39_1TAC,                    UINT32,\
                    "NNP2_39_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_39_1CLK,                    UINT32,\
                    "NNP2_39_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_39_1ADC,                    UINT32,\
                    "NNP2_39_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_39_2TAC,                    UINT32,\
                    "NNP2_39_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_39_2CLK,                    UINT32,\
                    "NNP2_39_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_39_2ADC,                    UINT32,\
                    "NNP2_39_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_40_1TAC,                    UINT32,\
                    "NNP2_40_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_40_1CLK,                    UINT32,\
                    "NNP2_40_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_40_1ADC,                    UINT32,\
                    "NNP2_40_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_40_2TAC,                    UINT32,\
                    "NNP2_40_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_40_2CLK,                    UINT32,\
                    "NNP2_40_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_40_2ADC,                    UINT32,\
                    "NNP2_40_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_41_1TAC,                    UINT32,\
                    "NNP2_41_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_41_1CLK,                    UINT32,\
                    "NNP2_41_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_41_1ADC,                    UINT32,\
                    "NNP2_41_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_41_2TAC,                    UINT32,\
                    "NNP2_41_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_41_2CLK,                    UINT32,\
                    "NNP2_41_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_41_2ADC,                    UINT32,\
                    "NNP2_41_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_42_1TAC,                    UINT32,\
                    "NNP2_42_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_42_1CLK,                    UINT32,\
                    "NNP2_42_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_42_1ADC,                    UINT32,\
                    "NNP2_42_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_42_2TAC,                    UINT32,\
                    "NNP2_42_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_42_2CLK,                    UINT32,\
                    "NNP2_42_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_42_2ADC,                    UINT32,\
                    "NNP2_42_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_43_1TAC,                    UINT32,\
                    "NNP2_43_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_43_1CLK,                    UINT32,\
                    "NNP2_43_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_43_1ADC,                    UINT32,\
                    "NNP2_43_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_43_2TAC,                    UINT32,\
                    "NNP2_43_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_43_2CLK,                    UINT32,\
                    "NNP2_43_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_43_2ADC,                    UINT32,\
                    "NNP2_43_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_44_1TAC,                    UINT32,\
                    "NNP2_44_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_44_1CLK,                    UINT32,\
                    "NNP2_44_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_44_1ADC,                    UINT32,\
                    "NNP2_44_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_44_2TAC,                    UINT32,\
                    "NNP2_44_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_44_2CLK,                    UINT32,\
                    "NNP2_44_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_44_2ADC,                    UINT32,\
                    "NNP2_44_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_45_1TAC,                    UINT32,\
                    "NNP2_45_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_45_1CLK,                    UINT32,\
                    "NNP2_45_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_45_1ADC,                    UINT32,\
                    "NNP2_45_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_45_2TAC,                    UINT32,\
                    "NNP2_45_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_45_2CLK,                    UINT32,\
                    "NNP2_45_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_45_2ADC,                    UINT32,\
                    "NNP2_45_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_46_1TAC,                    UINT32,\
                    "NNP2_46_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_46_1CLK,                    UINT32,\
                    "NNP2_46_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_46_1ADC,                    UINT32,\
                    "NNP2_46_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_46_2TAC,                    UINT32,\
                    "NNP2_46_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_46_2CLK,                    UINT32,\
                    "NNP2_46_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_46_2ADC,                    UINT32,\
                    "NNP2_46_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_47_1TAC,                    UINT32,\
                    "NNP2_47_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_47_1CLK,                    UINT32,\
                    "NNP2_47_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_47_1ADC,                    UINT32,\
                    "NNP2_47_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_47_2TAC,                    UINT32,\
                    "NNP2_47_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_47_2CLK,                    UINT32,\
                    "NNP2_47_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_47_2ADC,                    UINT32,\
                    "NNP2_47_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_48_1TAC,                    UINT32,\
                    "NNP2_48_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_48_1CLK,                    UINT32,\
                    "NNP2_48_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_48_1ADC,                    UINT32,\
                    "NNP2_48_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_48_2TAC,                    UINT32,\
                    "NNP2_48_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_48_2CLK,                    UINT32,\
                    "NNP2_48_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_48_2ADC,                    UINT32,\
                    "NNP2_48_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_49_1TAC,                    UINT32,\
                    "NNP2_49_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_49_1CLK,                    UINT32,\
                    "NNP2_49_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_49_1ADC,                    UINT32,\
                    "NNP2_49_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_49_2TAC,                    UINT32,\
                    "NNP2_49_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_49_2CLK,                    UINT32,\
                    "NNP2_49_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_49_2ADC,                    UINT32,\
                    "NNP2_49_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_50_1TAC,                    UINT32,\
                    "NNP2_50_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_50_1CLK,                    UINT32,\
                    "NNP2_50_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_50_1ADC,                    UINT32,\
                    "NNP2_50_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_50_2TAC,                    UINT32,\
                    "NNP2_50_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_50_2CLK,                    UINT32,\
                    "NNP2_50_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP2_50_2ADC,                    UINT32,\
                    "NNP2_50_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_1_1TAC,                     UINT32,\
                    "NNP3_1_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_1_1CLK,                     UINT32,\
                    "NNP3_1_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_1_1ADC,                     UINT32,\
                    "NNP3_1_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_1_2TAC,                     UINT32,\
                    "NNP3_1_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_1_2CLK,                     UINT32,\
                    "NNP3_1_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_1_2ADC,                     UINT32,\
                    "NNP3_1_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_2_1TAC,                     UINT32,\
                    "NNP3_2_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_2_1CLK,                     UINT32,\
                    "NNP3_2_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_2_1ADC,                     UINT32,\
                    "NNP3_2_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_2_2TAC,                     UINT32,\
                    "NNP3_2_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_2_2CLK,                     UINT32,\
                    "NNP3_2_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_2_2ADC,                     UINT32,\
                    "NNP3_2_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_3_1TAC,                     UINT32,\
                    "NNP3_3_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_3_1CLK,                     UINT32,\
                    "NNP3_3_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_3_1ADC,                     UINT32,\
                    "NNP3_3_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_3_2TAC,                     UINT32,\
                    "NNP3_3_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_3_2CLK,                     UINT32,\
                    "NNP3_3_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_3_2ADC,                     UINT32,\
                    "NNP3_3_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_4_1TAC,                     UINT32,\
                    "NNP3_4_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_4_1CLK,                     UINT32,\
                    "NNP3_4_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_4_1ADC,                     UINT32,\
                    "NNP3_4_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_4_2TAC,                     UINT32,\
                    "NNP3_4_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_4_2CLK,                     UINT32,\
                    "NNP3_4_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_4_2ADC,                     UINT32,\
                    "NNP3_4_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_5_1TAC,                     UINT32,\
                    "NNP3_5_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_5_1CLK,                     UINT32,\
                    "NNP3_5_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_5_1ADC,                     UINT32,\
                    "NNP3_5_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_5_2TAC,                     UINT32,\
                    "NNP3_5_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_5_2CLK,                     UINT32,\
                    "NNP3_5_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_5_2ADC,                     UINT32,\
                    "NNP3_5_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_6_1TAC,                     UINT32,\
                    "NNP3_6_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_6_1CLK,                     UINT32,\
                    "NNP3_6_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_6_1ADC,                     UINT32,\
                    "NNP3_6_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_6_2TAC,                     UINT32,\
                    "NNP3_6_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_6_2CLK,                     UINT32,\
                    "NNP3_6_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_6_2ADC,                     UINT32,\
                    "NNP3_6_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_7_1TAC,                     UINT32,\
                    "NNP3_7_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_7_1CLK,                     UINT32,\
                    "NNP3_7_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_7_1ADC,                     UINT32,\
                    "NNP3_7_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_7_2TAC,                     UINT32,\
                    "NNP3_7_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_7_2CLK,                     UINT32,\
                    "NNP3_7_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_7_2ADC,                     UINT32,\
                    "NNP3_7_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_8_1TAC,                     UINT32,\
                    "NNP3_8_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_8_1CLK,                     UINT32,\
                    "NNP3_8_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_8_1ADC,                     UINT32,\
                    "NNP3_8_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_8_2TAC,                     UINT32,\
                    "NNP3_8_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_8_2CLK,                     UINT32,\
                    "NNP3_8_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_8_2ADC,                     UINT32,\
                    "NNP3_8_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_9_1TAC,                     UINT32,\
                    "NNP3_9_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_9_1CLK,                     UINT32,\
                    "NNP3_9_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_9_1ADC,                     UINT32,\
                    "NNP3_9_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_9_2TAC,                     UINT32,\
                    "NNP3_9_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_9_2CLK,                     UINT32,\
                    "NNP3_9_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_9_2ADC,                     UINT32,\
                    "NNP3_9_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_10_1TAC,                    UINT32,\
                    "NNP3_10_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_10_1CLK,                    UINT32,\
                    "NNP3_10_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_10_1ADC,                    UINT32,\
                    "NNP3_10_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_10_2TAC,                    UINT32,\
                    "NNP3_10_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_10_2CLK,                    UINT32,\
                    "NNP3_10_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_10_2ADC,                    UINT32,\
                    "NNP3_10_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_11_1TAC,                    UINT32,\
                    "NNP3_11_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_11_1CLK,                    UINT32,\
                    "NNP3_11_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_11_1ADC,                    UINT32,\
                    "NNP3_11_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_11_2TAC,                    UINT32,\
                    "NNP3_11_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_11_2CLK,                    UINT32,\
                    "NNP3_11_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_11_2ADC,                    UINT32,\
                    "NNP3_11_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_12_1TAC,                    UINT32,\
                    "NNP3_12_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_12_1CLK,                    UINT32,\
                    "NNP3_12_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_12_1ADC,                    UINT32,\
                    "NNP3_12_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_12_2TAC,                    UINT32,\
                    "NNP3_12_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_12_2CLK,                    UINT32,\
                    "NNP3_12_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_12_2ADC,                    UINT32,\
                    "NNP3_12_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_13_1TAC,                    UINT32,\
                    "NNP3_13_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_13_1CLK,                    UINT32,\
                    "NNP3_13_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_13_1ADC,                    UINT32,\
                    "NNP3_13_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_13_2TAC,                    UINT32,\
                    "NNP3_13_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_13_2CLK,                    UINT32,\
                    "NNP3_13_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_13_2ADC,                    UINT32,\
                    "NNP3_13_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_14_1TAC,                    UINT32,\
                    "NNP3_14_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_14_1CLK,                    UINT32,\
                    "NNP3_14_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_14_1ADC,                    UINT32,\
                    "NNP3_14_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_14_2TAC,                    UINT32,\
                    "NNP3_14_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_14_2CLK,                    UINT32,\
                    "NNP3_14_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_14_2ADC,                    UINT32,\
                    "NNP3_14_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_15_1TAC,                    UINT32,\
                    "NNP3_15_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_15_1CLK,                    UINT32,\
                    "NNP3_15_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_15_1ADC,                    UINT32,\
                    "NNP3_15_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_15_2TAC,                    UINT32,\
                    "NNP3_15_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_15_2CLK,                    UINT32,\
                    "NNP3_15_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_15_2ADC,                    UINT32,\
                    "NNP3_15_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_16_1TAC,                    UINT32,\
                    "NNP3_16_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_16_1CLK,                    UINT32,\
                    "NNP3_16_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_16_1ADC,                    UINT32,\
                    "NNP3_16_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_16_2TAC,                    UINT32,\
                    "NNP3_16_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_16_2CLK,                    UINT32,\
                    "NNP3_16_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_16_2ADC,                    UINT32,\
                    "NNP3_16_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_17_1TAC,                    UINT32,\
                    "NNP3_17_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_17_1CLK,                    UINT32,\
                    "NNP3_17_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_17_1ADC,                    UINT32,\
                    "NNP3_17_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_17_2TAC,                    UINT32,\
                    "NNP3_17_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_17_2CLK,                    UINT32,\
                    "NNP3_17_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_17_2ADC,                    UINT32,\
                    "NNP3_17_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_18_1TAC,                    UINT32,\
                    "NNP3_18_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_18_1CLK,                    UINT32,\
                    "NNP3_18_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_18_1ADC,                    UINT32,\
                    "NNP3_18_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_18_2TAC,                    UINT32,\
                    "NNP3_18_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_18_2CLK,                    UINT32,\
                    "NNP3_18_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_18_2ADC,                    UINT32,\
                    "NNP3_18_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_19_1TAC,                    UINT32,\
                    "NNP3_19_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_19_1CLK,                    UINT32,\
                    "NNP3_19_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_19_1ADC,                    UINT32,\
                    "NNP3_19_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_19_2TAC,                    UINT32,\
                    "NNP3_19_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_19_2CLK,                    UINT32,\
                    "NNP3_19_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_19_2ADC,                    UINT32,\
                    "NNP3_19_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_20_1TAC,                    UINT32,\
                    "NNP3_20_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_20_1CLK,                    UINT32,\
                    "NNP3_20_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_20_1ADC,                    UINT32,\
                    "NNP3_20_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_20_2TAC,                    UINT32,\
                    "NNP3_20_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_20_2CLK,                    UINT32,\
                    "NNP3_20_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_20_2ADC,                    UINT32,\
                    "NNP3_20_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_21_1TAC,                    UINT32,\
                    "NNP3_21_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_21_1CLK,                    UINT32,\
                    "NNP3_21_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_21_1ADC,                    UINT32,\
                    "NNP3_21_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_21_2TAC,                    UINT32,\
                    "NNP3_21_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_21_2CLK,                    UINT32,\
                    "NNP3_21_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_21_2ADC,                    UINT32,\
                    "NNP3_21_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_22_1TAC,                    UINT32,\
                    "NNP3_22_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_22_1CLK,                    UINT32,\
                    "NNP3_22_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_22_1ADC,                    UINT32,\
                    "NNP3_22_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_22_2TAC,                    UINT32,\
                    "NNP3_22_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_22_2CLK,                    UINT32,\
                    "NNP3_22_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_22_2ADC,                    UINT32,\
                    "NNP3_22_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_23_1TAC,                    UINT32,\
                    "NNP3_23_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_23_1CLK,                    UINT32,\
                    "NNP3_23_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_23_1ADC,                    UINT32,\
                    "NNP3_23_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_23_2TAC,                    UINT32,\
                    "NNP3_23_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_23_2CLK,                    UINT32,\
                    "NNP3_23_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_23_2ADC,                    UINT32,\
                    "NNP3_23_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_24_1TAC,                    UINT32,\
                    "NNP3_24_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_24_1CLK,                    UINT32,\
                    "NNP3_24_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_24_1ADC,                    UINT32,\
                    "NNP3_24_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_24_2TAC,                    UINT32,\
                    "NNP3_24_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_24_2CLK,                    UINT32,\
                    "NNP3_24_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_24_2ADC,                    UINT32,\
                    "NNP3_24_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_25_1TAC,                    UINT32,\
                    "NNP3_25_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_25_1CLK,                    UINT32,\
                    "NNP3_25_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_25_1ADC,                    UINT32,\
                    "NNP3_25_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_25_2TAC,                    UINT32,\
                    "NNP3_25_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_25_2CLK,                    UINT32,\
                    "NNP3_25_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_25_2ADC,                    UINT32,\
                    "NNP3_25_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_26_1TAC,                    UINT32,\
                    "NNP3_26_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_26_1CLK,                    UINT32,\
                    "NNP3_26_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_26_1ADC,                    UINT32,\
                    "NNP3_26_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_26_2TAC,                    UINT32,\
                    "NNP3_26_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_26_2CLK,                    UINT32,\
                    "NNP3_26_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_26_2ADC,                    UINT32,\
                    "NNP3_26_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_27_1TAC,                    UINT32,\
                    "NNP3_27_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_27_1CLK,                    UINT32,\
                    "NNP3_27_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_27_1ADC,                    UINT32,\
                    "NNP3_27_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_27_2TAC,                    UINT32,\
                    "NNP3_27_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_27_2CLK,                    UINT32,\
                    "NNP3_27_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_27_2ADC,                    UINT32,\
                    "NNP3_27_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_28_1TAC,                    UINT32,\
                    "NNP3_28_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_28_1CLK,                    UINT32,\
                    "NNP3_28_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_28_1ADC,                    UINT32,\
                    "NNP3_28_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_28_2TAC,                    UINT32,\
                    "NNP3_28_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_28_2CLK,                    UINT32,\
                    "NNP3_28_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_28_2ADC,                    UINT32,\
                    "NNP3_28_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_29_1TAC,                    UINT32,\
                    "NNP3_29_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_29_1CLK,                    UINT32,\
                    "NNP3_29_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_29_1ADC,                    UINT32,\
                    "NNP3_29_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_29_2TAC,                    UINT32,\
                    "NNP3_29_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_29_2CLK,                    UINT32,\
                    "NNP3_29_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_29_2ADC,                    UINT32,\
                    "NNP3_29_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_30_1TAC,                    UINT32,\
                    "NNP3_30_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_30_1CLK,                    UINT32,\
                    "NNP3_30_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_30_1ADC,                    UINT32,\
                    "NNP3_30_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_30_2TAC,                    UINT32,\
                    "NNP3_30_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_30_2CLK,                    UINT32,\
                    "NNP3_30_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_30_2ADC,                    UINT32,\
                    "NNP3_30_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_31_1TAC,                    UINT32,\
                    "NNP3_31_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_31_1CLK,                    UINT32,\
                    "NNP3_31_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_31_1ADC,                    UINT32,\
                    "NNP3_31_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_31_2TAC,                    UINT32,\
                    "NNP3_31_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_31_2CLK,                    UINT32,\
                    "NNP3_31_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_31_2ADC,                    UINT32,\
                    "NNP3_31_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_32_1TAC,                    UINT32,\
                    "NNP3_32_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_32_1CLK,                    UINT32,\
                    "NNP3_32_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_32_1ADC,                    UINT32,\
                    "NNP3_32_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_32_2TAC,                    UINT32,\
                    "NNP3_32_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_32_2CLK,                    UINT32,\
                    "NNP3_32_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_32_2ADC,                    UINT32,\
                    "NNP3_32_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_33_1TAC,                    UINT32,\
                    "NNP3_33_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_33_1CLK,                    UINT32,\
                    "NNP3_33_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_33_1ADC,                    UINT32,\
                    "NNP3_33_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_33_2TAC,                    UINT32,\
                    "NNP3_33_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_33_2CLK,                    UINT32,\
                    "NNP3_33_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_33_2ADC,                    UINT32,\
                    "NNP3_33_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_34_1TAC,                    UINT32,\
                    "NNP3_34_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_34_1CLK,                    UINT32,\
                    "NNP3_34_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_34_1ADC,                    UINT32,\
                    "NNP3_34_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_34_2TAC,                    UINT32,\
                    "NNP3_34_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_34_2CLK,                    UINT32,\
                    "NNP3_34_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_34_2ADC,                    UINT32,\
                    "NNP3_34_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_35_1TAC,                    UINT32,\
                    "NNP3_35_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_35_1CLK,                    UINT32,\
                    "NNP3_35_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_35_1ADC,                    UINT32,\
                    "NNP3_35_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_35_2TAC,                    UINT32,\
                    "NNP3_35_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_35_2CLK,                    UINT32,\
                    "NNP3_35_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_35_2ADC,                    UINT32,\
                    "NNP3_35_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_36_1TAC,                    UINT32,\
                    "NNP3_36_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_36_1CLK,                    UINT32,\
                    "NNP3_36_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_36_1ADC,                    UINT32,\
                    "NNP3_36_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_36_2TAC,                    UINT32,\
                    "NNP3_36_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_36_2CLK,                    UINT32,\
                    "NNP3_36_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_36_2ADC,                    UINT32,\
                    "NNP3_36_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_37_1TAC,                    UINT32,\
                    "NNP3_37_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_37_1CLK,                    UINT32,\
                    "NNP3_37_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_37_1ADC,                    UINT32,\
                    "NNP3_37_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_37_2TAC,                    UINT32,\
                    "NNP3_37_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_37_2CLK,                    UINT32,\
                    "NNP3_37_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_37_2ADC,                    UINT32,\
                    "NNP3_37_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_38_1TAC,                    UINT32,\
                    "NNP3_38_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_38_1CLK,                    UINT32,\
                    "NNP3_38_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_38_1ADC,                    UINT32,\
                    "NNP3_38_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_38_2TAC,                    UINT32,\
                    "NNP3_38_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_38_2CLK,                    UINT32,\
                    "NNP3_38_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_38_2ADC,                    UINT32,\
                    "NNP3_38_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_39_1TAC,                    UINT32,\
                    "NNP3_39_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_39_1CLK,                    UINT32,\
                    "NNP3_39_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_39_1ADC,                    UINT32,\
                    "NNP3_39_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_39_2TAC,                    UINT32,\
                    "NNP3_39_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_39_2CLK,                    UINT32,\
                    "NNP3_39_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_39_2ADC,                    UINT32,\
                    "NNP3_39_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_40_1TAC,                    UINT32,\
                    "NNP3_40_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_40_1CLK,                    UINT32,\
                    "NNP3_40_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_40_1ADC,                    UINT32,\
                    "NNP3_40_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_40_2TAC,                    UINT32,\
                    "NNP3_40_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_40_2CLK,                    UINT32,\
                    "NNP3_40_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_40_2ADC,                    UINT32,\
                    "NNP3_40_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_41_1TAC,                    UINT32,\
                    "NNP3_41_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_41_1CLK,                    UINT32,\
                    "NNP3_41_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_41_1ADC,                    UINT32,\
                    "NNP3_41_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_41_2TAC,                    UINT32,\
                    "NNP3_41_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_41_2CLK,                    UINT32,\
                    "NNP3_41_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_41_2ADC,                    UINT32,\
                    "NNP3_41_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_42_1TAC,                    UINT32,\
                    "NNP3_42_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_42_1CLK,                    UINT32,\
                    "NNP3_42_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_42_1ADC,                    UINT32,\
                    "NNP3_42_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_42_2TAC,                    UINT32,\
                    "NNP3_42_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_42_2CLK,                    UINT32,\
                    "NNP3_42_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_42_2ADC,                    UINT32,\
                    "NNP3_42_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_43_1TAC,                    UINT32,\
                    "NNP3_43_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_43_1CLK,                    UINT32,\
                    "NNP3_43_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_43_1ADC,                    UINT32,\
                    "NNP3_43_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_43_2TAC,                    UINT32,\
                    "NNP3_43_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_43_2CLK,                    UINT32,\
                    "NNP3_43_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_43_2ADC,                    UINT32,\
                    "NNP3_43_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_44_1TAC,                    UINT32,\
                    "NNP3_44_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_44_1CLK,                    UINT32,\
                    "NNP3_44_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_44_1ADC,                    UINT32,\
                    "NNP3_44_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_44_2TAC,                    UINT32,\
                    "NNP3_44_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_44_2CLK,                    UINT32,\
                    "NNP3_44_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_44_2ADC,                    UINT32,\
                    "NNP3_44_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_45_1TAC,                    UINT32,\
                    "NNP3_45_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_45_1CLK,                    UINT32,\
                    "NNP3_45_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_45_1ADC,                    UINT32,\
                    "NNP3_45_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_45_2TAC,                    UINT32,\
                    "NNP3_45_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_45_2CLK,                    UINT32,\
                    "NNP3_45_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_45_2ADC,                    UINT32,\
                    "NNP3_45_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_46_1TAC,                    UINT32,\
                    "NNP3_46_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_46_1CLK,                    UINT32,\
                    "NNP3_46_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_46_1ADC,                    UINT32,\
                    "NNP3_46_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_46_2TAC,                    UINT32,\
                    "NNP3_46_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_46_2CLK,                    UINT32,\
                    "NNP3_46_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_46_2ADC,                    UINT32,\
                    "NNP3_46_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_47_1TAC,                    UINT32,\
                    "NNP3_47_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_47_1CLK,                    UINT32,\
                    "NNP3_47_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_47_1ADC,                    UINT32,\
                    "NNP3_47_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_47_2TAC,                    UINT32,\
                    "NNP3_47_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_47_2CLK,                    UINT32,\
                    "NNP3_47_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_47_2ADC,                    UINT32,\
                    "NNP3_47_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_48_1TAC,                    UINT32,\
                    "NNP3_48_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_48_1CLK,                    UINT32,\
                    "NNP3_48_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_48_1ADC,                    UINT32,\
                    "NNP3_48_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_48_2TAC,                    UINT32,\
                    "NNP3_48_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_48_2CLK,                    UINT32,\
                    "NNP3_48_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_48_2ADC,                    UINT32,\
                    "NNP3_48_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_49_1TAC,                    UINT32,\
                    "NNP3_49_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_49_1CLK,                    UINT32,\
                    "NNP3_49_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_49_1ADC,                    UINT32,\
                    "NNP3_49_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_49_2TAC,                    UINT32,\
                    "NNP3_49_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_49_2CLK,                    UINT32,\
                    "NNP3_49_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_49_2ADC,                    UINT32,\
                    "NNP3_49_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_50_1TAC,                    UINT32,\
                    "NNP3_50_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_50_1CLK,                    UINT32,\
                    "NNP3_50_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_50_1ADC,                    UINT32,\
                    "NNP3_50_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_50_2TAC,                    UINT32,\
                    "NNP3_50_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_50_2CLK,                    UINT32,\
                    "NNP3_50_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP3_50_2ADC,                    UINT32,\
                    "NNP3_50_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_1_1TAC,                     UINT32,\
                    "NNP4_1_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_1_1CLK,                     UINT32,\
                    "NNP4_1_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_1_1ADC,                     UINT32,\
                    "NNP4_1_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_1_2TAC,                     UINT32,\
                    "NNP4_1_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_1_2CLK,                     UINT32,\
                    "NNP4_1_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_1_2ADC,                     UINT32,\
                    "NNP4_1_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_2_1TAC,                     UINT32,\
                    "NNP4_2_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_2_1CLK,                     UINT32,\
                    "NNP4_2_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_2_1ADC,                     UINT32,\
                    "NNP4_2_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_2_2TAC,                     UINT32,\
                    "NNP4_2_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_2_2CLK,                     UINT32,\
                    "NNP4_2_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_2_2ADC,                     UINT32,\
                    "NNP4_2_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_3_1TAC,                     UINT32,\
                    "NNP4_3_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_3_1CLK,                     UINT32,\
                    "NNP4_3_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_3_1ADC,                     UINT32,\
                    "NNP4_3_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_3_2TAC,                     UINT32,\
                    "NNP4_3_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_3_2CLK,                     UINT32,\
                    "NNP4_3_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_3_2ADC,                     UINT32,\
                    "NNP4_3_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_4_1TAC,                     UINT32,\
                    "NNP4_4_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_4_1CLK,                     UINT32,\
                    "NNP4_4_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_4_1ADC,                     UINT32,\
                    "NNP4_4_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_4_2TAC,                     UINT32,\
                    "NNP4_4_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_4_2CLK,                     UINT32,\
                    "NNP4_4_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_4_2ADC,                     UINT32,\
                    "NNP4_4_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_5_1TAC,                     UINT32,\
                    "NNP4_5_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_5_1CLK,                     UINT32,\
                    "NNP4_5_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_5_1ADC,                     UINT32,\
                    "NNP4_5_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_5_2TAC,                     UINT32,\
                    "NNP4_5_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_5_2CLK,                     UINT32,\
                    "NNP4_5_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_5_2ADC,                     UINT32,\
                    "NNP4_5_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_6_1TAC,                     UINT32,\
                    "NNP4_6_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_6_1CLK,                     UINT32,\
                    "NNP4_6_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_6_1ADC,                     UINT32,\
                    "NNP4_6_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_6_2TAC,                     UINT32,\
                    "NNP4_6_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_6_2CLK,                     UINT32,\
                    "NNP4_6_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_6_2ADC,                     UINT32,\
                    "NNP4_6_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_7_1TAC,                     UINT32,\
                    "NNP4_7_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_7_1CLK,                     UINT32,\
                    "NNP4_7_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_7_1ADC,                     UINT32,\
                    "NNP4_7_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_7_2TAC,                     UINT32,\
                    "NNP4_7_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_7_2CLK,                     UINT32,\
                    "NNP4_7_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_7_2ADC,                     UINT32,\
                    "NNP4_7_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_8_1TAC,                     UINT32,\
                    "NNP4_8_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_8_1CLK,                     UINT32,\
                    "NNP4_8_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_8_1ADC,                     UINT32,\
                    "NNP4_8_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_8_2TAC,                     UINT32,\
                    "NNP4_8_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_8_2CLK,                     UINT32,\
                    "NNP4_8_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_8_2ADC,                     UINT32,\
                    "NNP4_8_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_9_1TAC,                     UINT32,\
                    "NNP4_9_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_9_1CLK,                     UINT32,\
                    "NNP4_9_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_9_1ADC,                     UINT32,\
                    "NNP4_9_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_9_2TAC,                     UINT32,\
                    "NNP4_9_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_9_2CLK,                     UINT32,\
                    "NNP4_9_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_9_2ADC,                     UINT32,\
                    "NNP4_9_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_10_1TAC,                    UINT32,\
                    "NNP4_10_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_10_1CLK,                    UINT32,\
                    "NNP4_10_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_10_1ADC,                    UINT32,\
                    "NNP4_10_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_10_2TAC,                    UINT32,\
                    "NNP4_10_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_10_2CLK,                    UINT32,\
                    "NNP4_10_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_10_2ADC,                    UINT32,\
                    "NNP4_10_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_11_1TAC,                    UINT32,\
                    "NNP4_11_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_11_1CLK,                    UINT32,\
                    "NNP4_11_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_11_1ADC,                    UINT32,\
                    "NNP4_11_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_11_2TAC,                    UINT32,\
                    "NNP4_11_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_11_2CLK,                    UINT32,\
                    "NNP4_11_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_11_2ADC,                    UINT32,\
                    "NNP4_11_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_12_1TAC,                    UINT32,\
                    "NNP4_12_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_12_1CLK,                    UINT32,\
                    "NNP4_12_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_12_1ADC,                    UINT32,\
                    "NNP4_12_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_12_2TAC,                    UINT32,\
                    "NNP4_12_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_12_2CLK,                    UINT32,\
                    "NNP4_12_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_12_2ADC,                    UINT32,\
                    "NNP4_12_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_13_1TAC,                    UINT32,\
                    "NNP4_13_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_13_1CLK,                    UINT32,\
                    "NNP4_13_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_13_1ADC,                    UINT32,\
                    "NNP4_13_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_13_2TAC,                    UINT32,\
                    "NNP4_13_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_13_2CLK,                    UINT32,\
                    "NNP4_13_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_13_2ADC,                    UINT32,\
                    "NNP4_13_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_14_1TAC,                    UINT32,\
                    "NNP4_14_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_14_1CLK,                    UINT32,\
                    "NNP4_14_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_14_1ADC,                    UINT32,\
                    "NNP4_14_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_14_2TAC,                    UINT32,\
                    "NNP4_14_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_14_2CLK,                    UINT32,\
                    "NNP4_14_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_14_2ADC,                    UINT32,\
                    "NNP4_14_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_15_1TAC,                    UINT32,\
                    "NNP4_15_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_15_1CLK,                    UINT32,\
                    "NNP4_15_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_15_1ADC,                    UINT32,\
                    "NNP4_15_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_15_2TAC,                    UINT32,\
                    "NNP4_15_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_15_2CLK,                    UINT32,\
                    "NNP4_15_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_15_2ADC,                    UINT32,\
                    "NNP4_15_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_16_1TAC,                    UINT32,\
                    "NNP4_16_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_16_1CLK,                    UINT32,\
                    "NNP4_16_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_16_1ADC,                    UINT32,\
                    "NNP4_16_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_16_2TAC,                    UINT32,\
                    "NNP4_16_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_16_2CLK,                    UINT32,\
                    "NNP4_16_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_16_2ADC,                    UINT32,\
                    "NNP4_16_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_17_1TAC,                    UINT32,\
                    "NNP4_17_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_17_1CLK,                    UINT32,\
                    "NNP4_17_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_17_1ADC,                    UINT32,\
                    "NNP4_17_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_17_2TAC,                    UINT32,\
                    "NNP4_17_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_17_2CLK,                    UINT32,\
                    "NNP4_17_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_17_2ADC,                    UINT32,\
                    "NNP4_17_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_18_1TAC,                    UINT32,\
                    "NNP4_18_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_18_1CLK,                    UINT32,\
                    "NNP4_18_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_18_1ADC,                    UINT32,\
                    "NNP4_18_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_18_2TAC,                    UINT32,\
                    "NNP4_18_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_18_2CLK,                    UINT32,\
                    "NNP4_18_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_18_2ADC,                    UINT32,\
                    "NNP4_18_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_19_1TAC,                    UINT32,\
                    "NNP4_19_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_19_1CLK,                    UINT32,\
                    "NNP4_19_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_19_1ADC,                    UINT32,\
                    "NNP4_19_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_19_2TAC,                    UINT32,\
                    "NNP4_19_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_19_2CLK,                    UINT32,\
                    "NNP4_19_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_19_2ADC,                    UINT32,\
                    "NNP4_19_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_20_1TAC,                    UINT32,\
                    "NNP4_20_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_20_1CLK,                    UINT32,\
                    "NNP4_20_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_20_1ADC,                    UINT32,\
                    "NNP4_20_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_20_2TAC,                    UINT32,\
                    "NNP4_20_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_20_2CLK,                    UINT32,\
                    "NNP4_20_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_20_2ADC,                    UINT32,\
                    "NNP4_20_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_21_1TAC,                    UINT32,\
                    "NNP4_21_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_21_1CLK,                    UINT32,\
                    "NNP4_21_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_21_1ADC,                    UINT32,\
                    "NNP4_21_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_21_2TAC,                    UINT32,\
                    "NNP4_21_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_21_2CLK,                    UINT32,\
                    "NNP4_21_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_21_2ADC,                    UINT32,\
                    "NNP4_21_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_22_1TAC,                    UINT32,\
                    "NNP4_22_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_22_1CLK,                    UINT32,\
                    "NNP4_22_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_22_1ADC,                    UINT32,\
                    "NNP4_22_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_22_2TAC,                    UINT32,\
                    "NNP4_22_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_22_2CLK,                    UINT32,\
                    "NNP4_22_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_22_2ADC,                    UINT32,\
                    "NNP4_22_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_23_1TAC,                    UINT32,\
                    "NNP4_23_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_23_1CLK,                    UINT32,\
                    "NNP4_23_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_23_1ADC,                    UINT32,\
                    "NNP4_23_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_23_2TAC,                    UINT32,\
                    "NNP4_23_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_23_2CLK,                    UINT32,\
                    "NNP4_23_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_23_2ADC,                    UINT32,\
                    "NNP4_23_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_24_1TAC,                    UINT32,\
                    "NNP4_24_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_24_1CLK,                    UINT32,\
                    "NNP4_24_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_24_1ADC,                    UINT32,\
                    "NNP4_24_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_24_2TAC,                    UINT32,\
                    "NNP4_24_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_24_2CLK,                    UINT32,\
                    "NNP4_24_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_24_2ADC,                    UINT32,\
                    "NNP4_24_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_25_1TAC,                    UINT32,\
                    "NNP4_25_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_25_1CLK,                    UINT32,\
                    "NNP4_25_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_25_1ADC,                    UINT32,\
                    "NNP4_25_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_25_2TAC,                    UINT32,\
                    "NNP4_25_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_25_2CLK,                    UINT32,\
                    "NNP4_25_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_25_2ADC,                    UINT32,\
                    "NNP4_25_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_26_1TAC,                    UINT32,\
                    "NNP4_26_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_26_1CLK,                    UINT32,\
                    "NNP4_26_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_26_1ADC,                    UINT32,\
                    "NNP4_26_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_26_2TAC,                    UINT32,\
                    "NNP4_26_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_26_2CLK,                    UINT32,\
                    "NNP4_26_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_26_2ADC,                    UINT32,\
                    "NNP4_26_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_27_1TAC,                    UINT32,\
                    "NNP4_27_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_27_1CLK,                    UINT32,\
                    "NNP4_27_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_27_1ADC,                    UINT32,\
                    "NNP4_27_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_27_2TAC,                    UINT32,\
                    "NNP4_27_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_27_2CLK,                    UINT32,\
                    "NNP4_27_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_27_2ADC,                    UINT32,\
                    "NNP4_27_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_28_1TAC,                    UINT32,\
                    "NNP4_28_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_28_1CLK,                    UINT32,\
                    "NNP4_28_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_28_1ADC,                    UINT32,\
                    "NNP4_28_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_28_2TAC,                    UINT32,\
                    "NNP4_28_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_28_2CLK,                    UINT32,\
                    "NNP4_28_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_28_2ADC,                    UINT32,\
                    "NNP4_28_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_29_1TAC,                    UINT32,\
                    "NNP4_29_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_29_1CLK,                    UINT32,\
                    "NNP4_29_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_29_1ADC,                    UINT32,\
                    "NNP4_29_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_29_2TAC,                    UINT32,\
                    "NNP4_29_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_29_2CLK,                    UINT32,\
                    "NNP4_29_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_29_2ADC,                    UINT32,\
                    "NNP4_29_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_30_1TAC,                    UINT32,\
                    "NNP4_30_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_30_1CLK,                    UINT32,\
                    "NNP4_30_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_30_1ADC,                    UINT32,\
                    "NNP4_30_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_30_2TAC,                    UINT32,\
                    "NNP4_30_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_30_2CLK,                    UINT32,\
                    "NNP4_30_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_30_2ADC,                    UINT32,\
                    "NNP4_30_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_31_1TAC,                    UINT32,\
                    "NNP4_31_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_31_1CLK,                    UINT32,\
                    "NNP4_31_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_31_1ADC,                    UINT32,\
                    "NNP4_31_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_31_2TAC,                    UINT32,\
                    "NNP4_31_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_31_2CLK,                    UINT32,\
                    "NNP4_31_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_31_2ADC,                    UINT32,\
                    "NNP4_31_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_32_1TAC,                    UINT32,\
                    "NNP4_32_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_32_1CLK,                    UINT32,\
                    "NNP4_32_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_32_1ADC,                    UINT32,\
                    "NNP4_32_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_32_2TAC,                    UINT32,\
                    "NNP4_32_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_32_2CLK,                    UINT32,\
                    "NNP4_32_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_32_2ADC,                    UINT32,\
                    "NNP4_32_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_33_1TAC,                    UINT32,\
                    "NNP4_33_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_33_1CLK,                    UINT32,\
                    "NNP4_33_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_33_1ADC,                    UINT32,\
                    "NNP4_33_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_33_2TAC,                    UINT32,\
                    "NNP4_33_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_33_2CLK,                    UINT32,\
                    "NNP4_33_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_33_2ADC,                    UINT32,\
                    "NNP4_33_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_34_1TAC,                    UINT32,\
                    "NNP4_34_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_34_1CLK,                    UINT32,\
                    "NNP4_34_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_34_1ADC,                    UINT32,\
                    "NNP4_34_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_34_2TAC,                    UINT32,\
                    "NNP4_34_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_34_2CLK,                    UINT32,\
                    "NNP4_34_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_34_2ADC,                    UINT32,\
                    "NNP4_34_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_35_1TAC,                    UINT32,\
                    "NNP4_35_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_35_1CLK,                    UINT32,\
                    "NNP4_35_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_35_1ADC,                    UINT32,\
                    "NNP4_35_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_35_2TAC,                    UINT32,\
                    "NNP4_35_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_35_2CLK,                    UINT32,\
                    "NNP4_35_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_35_2ADC,                    UINT32,\
                    "NNP4_35_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_36_1TAC,                    UINT32,\
                    "NNP4_36_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_36_1CLK,                    UINT32,\
                    "NNP4_36_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_36_1ADC,                    UINT32,\
                    "NNP4_36_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_36_2TAC,                    UINT32,\
                    "NNP4_36_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_36_2CLK,                    UINT32,\
                    "NNP4_36_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_36_2ADC,                    UINT32,\
                    "NNP4_36_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_37_1TAC,                    UINT32,\
                    "NNP4_37_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_37_1CLK,                    UINT32,\
                    "NNP4_37_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_37_1ADC,                    UINT32,\
                    "NNP4_37_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_37_2TAC,                    UINT32,\
                    "NNP4_37_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_37_2CLK,                    UINT32,\
                    "NNP4_37_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_37_2ADC,                    UINT32,\
                    "NNP4_37_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_38_1TAC,                    UINT32,\
                    "NNP4_38_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_38_1CLK,                    UINT32,\
                    "NNP4_38_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_38_1ADC,                    UINT32,\
                    "NNP4_38_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_38_2TAC,                    UINT32,\
                    "NNP4_38_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_38_2CLK,                    UINT32,\
                    "NNP4_38_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_38_2ADC,                    UINT32,\
                    "NNP4_38_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_39_1TAC,                    UINT32,\
                    "NNP4_39_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_39_1CLK,                    UINT32,\
                    "NNP4_39_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_39_1ADC,                    UINT32,\
                    "NNP4_39_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_39_2TAC,                    UINT32,\
                    "NNP4_39_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_39_2CLK,                    UINT32,\
                    "NNP4_39_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_39_2ADC,                    UINT32,\
                    "NNP4_39_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_40_1TAC,                    UINT32,\
                    "NNP4_40_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_40_1CLK,                    UINT32,\
                    "NNP4_40_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_40_1ADC,                    UINT32,\
                    "NNP4_40_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_40_2TAC,                    UINT32,\
                    "NNP4_40_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_40_2CLK,                    UINT32,\
                    "NNP4_40_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_40_2ADC,                    UINT32,\
                    "NNP4_40_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_41_1TAC,                    UINT32,\
                    "NNP4_41_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_41_1CLK,                    UINT32,\
                    "NNP4_41_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_41_1ADC,                    UINT32,\
                    "NNP4_41_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_41_2TAC,                    UINT32,\
                    "NNP4_41_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_41_2CLK,                    UINT32,\
                    "NNP4_41_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_41_2ADC,                    UINT32,\
                    "NNP4_41_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_42_1TAC,                    UINT32,\
                    "NNP4_42_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_42_1CLK,                    UINT32,\
                    "NNP4_42_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_42_1ADC,                    UINT32,\
                    "NNP4_42_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_42_2TAC,                    UINT32,\
                    "NNP4_42_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_42_2CLK,                    UINT32,\
                    "NNP4_42_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_42_2ADC,                    UINT32,\
                    "NNP4_42_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_43_1TAC,                    UINT32,\
                    "NNP4_43_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_43_1CLK,                    UINT32,\
                    "NNP4_43_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_43_1ADC,                    UINT32,\
                    "NNP4_43_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_43_2TAC,                    UINT32,\
                    "NNP4_43_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_43_2CLK,                    UINT32,\
                    "NNP4_43_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_43_2ADC,                    UINT32,\
                    "NNP4_43_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_44_1TAC,                    UINT32,\
                    "NNP4_44_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_44_1CLK,                    UINT32,\
                    "NNP4_44_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_44_1ADC,                    UINT32,\
                    "NNP4_44_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_44_2TAC,                    UINT32,\
                    "NNP4_44_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_44_2CLK,                    UINT32,\
                    "NNP4_44_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_44_2ADC,                    UINT32,\
                    "NNP4_44_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_45_1TAC,                    UINT32,\
                    "NNP4_45_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_45_1CLK,                    UINT32,\
                    "NNP4_45_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_45_1ADC,                    UINT32,\
                    "NNP4_45_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_45_2TAC,                    UINT32,\
                    "NNP4_45_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_45_2CLK,                    UINT32,\
                    "NNP4_45_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_45_2ADC,                    UINT32,\
                    "NNP4_45_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_46_1TAC,                    UINT32,\
                    "NNP4_46_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_46_1CLK,                    UINT32,\
                    "NNP4_46_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_46_1ADC,                    UINT32,\
                    "NNP4_46_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_46_2TAC,                    UINT32,\
                    "NNP4_46_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_46_2CLK,                    UINT32,\
                    "NNP4_46_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_46_2ADC,                    UINT32,\
                    "NNP4_46_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_47_1TAC,                    UINT32,\
                    "NNP4_47_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_47_1CLK,                    UINT32,\
                    "NNP4_47_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_47_1ADC,                    UINT32,\
                    "NNP4_47_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_47_2TAC,                    UINT32,\
                    "NNP4_47_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_47_2CLK,                    UINT32,\
                    "NNP4_47_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_47_2ADC,                    UINT32,\
                    "NNP4_47_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_48_1TAC,                    UINT32,\
                    "NNP4_48_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_48_1CLK,                    UINT32,\
                    "NNP4_48_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_48_1ADC,                    UINT32,\
                    "NNP4_48_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_48_2TAC,                    UINT32,\
                    "NNP4_48_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_48_2CLK,                    UINT32,\
                    "NNP4_48_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_48_2ADC,                    UINT32,\
                    "NNP4_48_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_49_1TAC,                    UINT32,\
                    "NNP4_49_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_49_1CLK,                    UINT32,\
                    "NNP4_49_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_49_1ADC,                    UINT32,\
                    "NNP4_49_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_49_2TAC,                    UINT32,\
                    "NNP4_49_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_49_2CLK,                    UINT32,\
                    "NNP4_49_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_49_2ADC,                    UINT32,\
                    "NNP4_49_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_50_1TAC,                    UINT32,\
                    "NNP4_50_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_50_1CLK,                    UINT32,\
                    "NNP4_50_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_50_1ADC,                    UINT32,\
                    "NNP4_50_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_50_2TAC,                    UINT32,\
                    "NNP4_50_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_50_2CLK,                    UINT32,\
                    "NNP4_50_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP4_50_2ADC,                    UINT32,\
                    "NNP4_50_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_1_1TAC,                     UINT32,\
                    "NNP5_1_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_1_1CLK,                     UINT32,\
                    "NNP5_1_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_1_1ADC,                     UINT32,\
                    "NNP5_1_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_1_2TAC,                     UINT32,\
                    "NNP5_1_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_1_2CLK,                     UINT32,\
                    "NNP5_1_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_1_2ADC,                     UINT32,\
                    "NNP5_1_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_2_1TAC,                     UINT32,\
                    "NNP5_2_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_2_1CLK,                     UINT32,\
                    "NNP5_2_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_2_1ADC,                     UINT32,\
                    "NNP5_2_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_2_2TAC,                     UINT32,\
                    "NNP5_2_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_2_2CLK,                     UINT32,\
                    "NNP5_2_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_2_2ADC,                     UINT32,\
                    "NNP5_2_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_3_1TAC,                     UINT32,\
                    "NNP5_3_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_3_1CLK,                     UINT32,\
                    "NNP5_3_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_3_1ADC,                     UINT32,\
                    "NNP5_3_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_3_2TAC,                     UINT32,\
                    "NNP5_3_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_3_2CLK,                     UINT32,\
                    "NNP5_3_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_3_2ADC,                     UINT32,\
                    "NNP5_3_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_4_1TAC,                     UINT32,\
                    "NNP5_4_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_4_1CLK,                     UINT32,\
                    "NNP5_4_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_4_1ADC,                     UINT32,\
                    "NNP5_4_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_4_2TAC,                     UINT32,\
                    "NNP5_4_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_4_2CLK,                     UINT32,\
                    "NNP5_4_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_4_2ADC,                     UINT32,\
                    "NNP5_4_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_5_1TAC,                     UINT32,\
                    "NNP5_5_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_5_1CLK,                     UINT32,\
                    "NNP5_5_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_5_1ADC,                     UINT32,\
                    "NNP5_5_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_5_2TAC,                     UINT32,\
                    "NNP5_5_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_5_2CLK,                     UINT32,\
                    "NNP5_5_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_5_2ADC,                     UINT32,\
                    "NNP5_5_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_6_1TAC,                     UINT32,\
                    "NNP5_6_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_6_1CLK,                     UINT32,\
                    "NNP5_6_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_6_1ADC,                     UINT32,\
                    "NNP5_6_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_6_2TAC,                     UINT32,\
                    "NNP5_6_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_6_2CLK,                     UINT32,\
                    "NNP5_6_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_6_2ADC,                     UINT32,\
                    "NNP5_6_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_7_1TAC,                     UINT32,\
                    "NNP5_7_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_7_1CLK,                     UINT32,\
                    "NNP5_7_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_7_1ADC,                     UINT32,\
                    "NNP5_7_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_7_2TAC,                     UINT32,\
                    "NNP5_7_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_7_2CLK,                     UINT32,\
                    "NNP5_7_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_7_2ADC,                     UINT32,\
                    "NNP5_7_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_8_1TAC,                     UINT32,\
                    "NNP5_8_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_8_1CLK,                     UINT32,\
                    "NNP5_8_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_8_1ADC,                     UINT32,\
                    "NNP5_8_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_8_2TAC,                     UINT32,\
                    "NNP5_8_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_8_2CLK,                     UINT32,\
                    "NNP5_8_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_8_2ADC,                     UINT32,\
                    "NNP5_8_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_9_1TAC,                     UINT32,\
                    "NNP5_9_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_9_1CLK,                     UINT32,\
                    "NNP5_9_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_9_1ADC,                     UINT32,\
                    "NNP5_9_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_9_2TAC,                     UINT32,\
                    "NNP5_9_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_9_2CLK,                     UINT32,\
                    "NNP5_9_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_9_2ADC,                     UINT32,\
                    "NNP5_9_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_10_1TAC,                    UINT32,\
                    "NNP5_10_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_10_1CLK,                    UINT32,\
                    "NNP5_10_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_10_1ADC,                    UINT32,\
                    "NNP5_10_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_10_2TAC,                    UINT32,\
                    "NNP5_10_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_10_2CLK,                    UINT32,\
                    "NNP5_10_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_10_2ADC,                    UINT32,\
                    "NNP5_10_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_11_1TAC,                    UINT32,\
                    "NNP5_11_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_11_1CLK,                    UINT32,\
                    "NNP5_11_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_11_1ADC,                    UINT32,\
                    "NNP5_11_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_11_2TAC,                    UINT32,\
                    "NNP5_11_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_11_2CLK,                    UINT32,\
                    "NNP5_11_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_11_2ADC,                    UINT32,\
                    "NNP5_11_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_12_1TAC,                    UINT32,\
                    "NNP5_12_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_12_1CLK,                    UINT32,\
                    "NNP5_12_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_12_1ADC,                    UINT32,\
                    "NNP5_12_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_12_2TAC,                    UINT32,\
                    "NNP5_12_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_12_2CLK,                    UINT32,\
                    "NNP5_12_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_12_2ADC,                    UINT32,\
                    "NNP5_12_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_13_1TAC,                    UINT32,\
                    "NNP5_13_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_13_1CLK,                    UINT32,\
                    "NNP5_13_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_13_1ADC,                    UINT32,\
                    "NNP5_13_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_13_2TAC,                    UINT32,\
                    "NNP5_13_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_13_2CLK,                    UINT32,\
                    "NNP5_13_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_13_2ADC,                    UINT32,\
                    "NNP5_13_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_14_1TAC,                    UINT32,\
                    "NNP5_14_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_14_1CLK,                    UINT32,\
                    "NNP5_14_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_14_1ADC,                    UINT32,\
                    "NNP5_14_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_14_2TAC,                    UINT32,\
                    "NNP5_14_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_14_2CLK,                    UINT32,\
                    "NNP5_14_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_14_2ADC,                    UINT32,\
                    "NNP5_14_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_15_1TAC,                    UINT32,\
                    "NNP5_15_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_15_1CLK,                    UINT32,\
                    "NNP5_15_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_15_1ADC,                    UINT32,\
                    "NNP5_15_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_15_2TAC,                    UINT32,\
                    "NNP5_15_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_15_2CLK,                    UINT32,\
                    "NNP5_15_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_15_2ADC,                    UINT32,\
                    "NNP5_15_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_16_1TAC,                    UINT32,\
                    "NNP5_16_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_16_1CLK,                    UINT32,\
                    "NNP5_16_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_16_1ADC,                    UINT32,\
                    "NNP5_16_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_16_2TAC,                    UINT32,\
                    "NNP5_16_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_16_2CLK,                    UINT32,\
                    "NNP5_16_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_16_2ADC,                    UINT32,\
                    "NNP5_16_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_17_1TAC,                    UINT32,\
                    "NNP5_17_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_17_1CLK,                    UINT32,\
                    "NNP5_17_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_17_1ADC,                    UINT32,\
                    "NNP5_17_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_17_2TAC,                    UINT32,\
                    "NNP5_17_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_17_2CLK,                    UINT32,\
                    "NNP5_17_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_17_2ADC,                    UINT32,\
                    "NNP5_17_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_18_1TAC,                    UINT32,\
                    "NNP5_18_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_18_1CLK,                    UINT32,\
                    "NNP5_18_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_18_1ADC,                    UINT32,\
                    "NNP5_18_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_18_2TAC,                    UINT32,\
                    "NNP5_18_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_18_2CLK,                    UINT32,\
                    "NNP5_18_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_18_2ADC,                    UINT32,\
                    "NNP5_18_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_19_1TAC,                    UINT32,\
                    "NNP5_19_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_19_1CLK,                    UINT32,\
                    "NNP5_19_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_19_1ADC,                    UINT32,\
                    "NNP5_19_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_19_2TAC,                    UINT32,\
                    "NNP5_19_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_19_2CLK,                    UINT32,\
                    "NNP5_19_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_19_2ADC,                    UINT32,\
                    "NNP5_19_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_20_1TAC,                    UINT32,\
                    "NNP5_20_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_20_1CLK,                    UINT32,\
                    "NNP5_20_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_20_1ADC,                    UINT32,\
                    "NNP5_20_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_20_2TAC,                    UINT32,\
                    "NNP5_20_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_20_2CLK,                    UINT32,\
                    "NNP5_20_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_20_2ADC,                    UINT32,\
                    "NNP5_20_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_21_1TAC,                    UINT32,\
                    "NNP5_21_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_21_1CLK,                    UINT32,\
                    "NNP5_21_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_21_1ADC,                    UINT32,\
                    "NNP5_21_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_21_2TAC,                    UINT32,\
                    "NNP5_21_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_21_2CLK,                    UINT32,\
                    "NNP5_21_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_21_2ADC,                    UINT32,\
                    "NNP5_21_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_22_1TAC,                    UINT32,\
                    "NNP5_22_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_22_1CLK,                    UINT32,\
                    "NNP5_22_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_22_1ADC,                    UINT32,\
                    "NNP5_22_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_22_2TAC,                    UINT32,\
                    "NNP5_22_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_22_2CLK,                    UINT32,\
                    "NNP5_22_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_22_2ADC,                    UINT32,\
                    "NNP5_22_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_23_1TAC,                    UINT32,\
                    "NNP5_23_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_23_1CLK,                    UINT32,\
                    "NNP5_23_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_23_1ADC,                    UINT32,\
                    "NNP5_23_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_23_2TAC,                    UINT32,\
                    "NNP5_23_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_23_2CLK,                    UINT32,\
                    "NNP5_23_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_23_2ADC,                    UINT32,\
                    "NNP5_23_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_24_1TAC,                    UINT32,\
                    "NNP5_24_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_24_1CLK,                    UINT32,\
                    "NNP5_24_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_24_1ADC,                    UINT32,\
                    "NNP5_24_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_24_2TAC,                    UINT32,\
                    "NNP5_24_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_24_2CLK,                    UINT32,\
                    "NNP5_24_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_24_2ADC,                    UINT32,\
                    "NNP5_24_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_25_1TAC,                    UINT32,\
                    "NNP5_25_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_25_1CLK,                    UINT32,\
                    "NNP5_25_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_25_1ADC,                    UINT32,\
                    "NNP5_25_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_25_2TAC,                    UINT32,\
                    "NNP5_25_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_25_2CLK,                    UINT32,\
                    "NNP5_25_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_25_2ADC,                    UINT32,\
                    "NNP5_25_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_26_1TAC,                    UINT32,\
                    "NNP5_26_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_26_1CLK,                    UINT32,\
                    "NNP5_26_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_26_1ADC,                    UINT32,\
                    "NNP5_26_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_26_2TAC,                    UINT32,\
                    "NNP5_26_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_26_2CLK,                    UINT32,\
                    "NNP5_26_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_26_2ADC,                    UINT32,\
                    "NNP5_26_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_27_1TAC,                    UINT32,\
                    "NNP5_27_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_27_1CLK,                    UINT32,\
                    "NNP5_27_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_27_1ADC,                    UINT32,\
                    "NNP5_27_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_27_2TAC,                    UINT32,\
                    "NNP5_27_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_27_2CLK,                    UINT32,\
                    "NNP5_27_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_27_2ADC,                    UINT32,\
                    "NNP5_27_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_28_1TAC,                    UINT32,\
                    "NNP5_28_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_28_1CLK,                    UINT32,\
                    "NNP5_28_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_28_1ADC,                    UINT32,\
                    "NNP5_28_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_28_2TAC,                    UINT32,\
                    "NNP5_28_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_28_2CLK,                    UINT32,\
                    "NNP5_28_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_28_2ADC,                    UINT32,\
                    "NNP5_28_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_29_1TAC,                    UINT32,\
                    "NNP5_29_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_29_1CLK,                    UINT32,\
                    "NNP5_29_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_29_1ADC,                    UINT32,\
                    "NNP5_29_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_29_2TAC,                    UINT32,\
                    "NNP5_29_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_29_2CLK,                    UINT32,\
                    "NNP5_29_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_29_2ADC,                    UINT32,\
                    "NNP5_29_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_30_1TAC,                    UINT32,\
                    "NNP5_30_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_30_1CLK,                    UINT32,\
                    "NNP5_30_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_30_1ADC,                    UINT32,\
                    "NNP5_30_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_30_2TAC,                    UINT32,\
                    "NNP5_30_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_30_2CLK,                    UINT32,\
                    "NNP5_30_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_30_2ADC,                    UINT32,\
                    "NNP5_30_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_31_1TAC,                    UINT32,\
                    "NNP5_31_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_31_1CLK,                    UINT32,\
                    "NNP5_31_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_31_1ADC,                    UINT32,\
                    "NNP5_31_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_31_2TAC,                    UINT32,\
                    "NNP5_31_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_31_2CLK,                    UINT32,\
                    "NNP5_31_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_31_2ADC,                    UINT32,\
                    "NNP5_31_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_32_1TAC,                    UINT32,\
                    "NNP5_32_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_32_1CLK,                    UINT32,\
                    "NNP5_32_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_32_1ADC,                    UINT32,\
                    "NNP5_32_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_32_2TAC,                    UINT32,\
                    "NNP5_32_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_32_2CLK,                    UINT32,\
                    "NNP5_32_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_32_2ADC,                    UINT32,\
                    "NNP5_32_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_33_1TAC,                    UINT32,\
                    "NNP5_33_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_33_1CLK,                    UINT32,\
                    "NNP5_33_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_33_1ADC,                    UINT32,\
                    "NNP5_33_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_33_2TAC,                    UINT32,\
                    "NNP5_33_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_33_2CLK,                    UINT32,\
                    "NNP5_33_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_33_2ADC,                    UINT32,\
                    "NNP5_33_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_34_1TAC,                    UINT32,\
                    "NNP5_34_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_34_1CLK,                    UINT32,\
                    "NNP5_34_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_34_1ADC,                    UINT32,\
                    "NNP5_34_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_34_2TAC,                    UINT32,\
                    "NNP5_34_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_34_2CLK,                    UINT32,\
                    "NNP5_34_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_34_2ADC,                    UINT32,\
                    "NNP5_34_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_35_1TAC,                    UINT32,\
                    "NNP5_35_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_35_1CLK,                    UINT32,\
                    "NNP5_35_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_35_1ADC,                    UINT32,\
                    "NNP5_35_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_35_2TAC,                    UINT32,\
                    "NNP5_35_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_35_2CLK,                    UINT32,\
                    "NNP5_35_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_35_2ADC,                    UINT32,\
                    "NNP5_35_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_36_1TAC,                    UINT32,\
                    "NNP5_36_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_36_1CLK,                    UINT32,\
                    "NNP5_36_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_36_1ADC,                    UINT32,\
                    "NNP5_36_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_36_2TAC,                    UINT32,\
                    "NNP5_36_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_36_2CLK,                    UINT32,\
                    "NNP5_36_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_36_2ADC,                    UINT32,\
                    "NNP5_36_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_37_1TAC,                    UINT32,\
                    "NNP5_37_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_37_1CLK,                    UINT32,\
                    "NNP5_37_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_37_1ADC,                    UINT32,\
                    "NNP5_37_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_37_2TAC,                    UINT32,\
                    "NNP5_37_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_37_2CLK,                    UINT32,\
                    "NNP5_37_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_37_2ADC,                    UINT32,\
                    "NNP5_37_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_38_1TAC,                    UINT32,\
                    "NNP5_38_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_38_1CLK,                    UINT32,\
                    "NNP5_38_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_38_1ADC,                    UINT32,\
                    "NNP5_38_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_38_2TAC,                    UINT32,\
                    "NNP5_38_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_38_2CLK,                    UINT32,\
                    "NNP5_38_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_38_2ADC,                    UINT32,\
                    "NNP5_38_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_39_1TAC,                    UINT32,\
                    "NNP5_39_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_39_1CLK,                    UINT32,\
                    "NNP5_39_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_39_1ADC,                    UINT32,\
                    "NNP5_39_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_39_2TAC,                    UINT32,\
                    "NNP5_39_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_39_2CLK,                    UINT32,\
                    "NNP5_39_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_39_2ADC,                    UINT32,\
                    "NNP5_39_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_40_1TAC,                    UINT32,\
                    "NNP5_40_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_40_1CLK,                    UINT32,\
                    "NNP5_40_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_40_1ADC,                    UINT32,\
                    "NNP5_40_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_40_2TAC,                    UINT32,\
                    "NNP5_40_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_40_2CLK,                    UINT32,\
                    "NNP5_40_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_40_2ADC,                    UINT32,\
                    "NNP5_40_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_41_1TAC,                    UINT32,\
                    "NNP5_41_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_41_1CLK,                    UINT32,\
                    "NNP5_41_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_41_1ADC,                    UINT32,\
                    "NNP5_41_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_41_2TAC,                    UINT32,\
                    "NNP5_41_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_41_2CLK,                    UINT32,\
                    "NNP5_41_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_41_2ADC,                    UINT32,\
                    "NNP5_41_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_42_1TAC,                    UINT32,\
                    "NNP5_42_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_42_1CLK,                    UINT32,\
                    "NNP5_42_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_42_1ADC,                    UINT32,\
                    "NNP5_42_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_42_2TAC,                    UINT32,\
                    "NNP5_42_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_42_2CLK,                    UINT32,\
                    "NNP5_42_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_42_2ADC,                    UINT32,\
                    "NNP5_42_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_43_1TAC,                    UINT32,\
                    "NNP5_43_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_43_1CLK,                    UINT32,\
                    "NNP5_43_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_43_1ADC,                    UINT32,\
                    "NNP5_43_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_43_2TAC,                    UINT32,\
                    "NNP5_43_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_43_2CLK,                    UINT32,\
                    "NNP5_43_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_43_2ADC,                    UINT32,\
                    "NNP5_43_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_44_1TAC,                    UINT32,\
                    "NNP5_44_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_44_1CLK,                    UINT32,\
                    "NNP5_44_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_44_1ADC,                    UINT32,\
                    "NNP5_44_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_44_2TAC,                    UINT32,\
                    "NNP5_44_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_44_2CLK,                    UINT32,\
                    "NNP5_44_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_44_2ADC,                    UINT32,\
                    "NNP5_44_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_45_1TAC,                    UINT32,\
                    "NNP5_45_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_45_1CLK,                    UINT32,\
                    "NNP5_45_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_45_1ADC,                    UINT32,\
                    "NNP5_45_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_45_2TAC,                    UINT32,\
                    "NNP5_45_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_45_2CLK,                    UINT32,\
                    "NNP5_45_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_45_2ADC,                    UINT32,\
                    "NNP5_45_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_46_1TAC,                    UINT32,\
                    "NNP5_46_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_46_1CLK,                    UINT32,\
                    "NNP5_46_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_46_1ADC,                    UINT32,\
                    "NNP5_46_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_46_2TAC,                    UINT32,\
                    "NNP5_46_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_46_2CLK,                    UINT32,\
                    "NNP5_46_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_46_2ADC,                    UINT32,\
                    "NNP5_46_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_47_1TAC,                    UINT32,\
                    "NNP5_47_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_47_1CLK,                    UINT32,\
                    "NNP5_47_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_47_1ADC,                    UINT32,\
                    "NNP5_47_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_47_2TAC,                    UINT32,\
                    "NNP5_47_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_47_2CLK,                    UINT32,\
                    "NNP5_47_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_47_2ADC,                    UINT32,\
                    "NNP5_47_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_48_1TAC,                    UINT32,\
                    "NNP5_48_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_48_1CLK,                    UINT32,\
                    "NNP5_48_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_48_1ADC,                    UINT32,\
                    "NNP5_48_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_48_2TAC,                    UINT32,\
                    "NNP5_48_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_48_2CLK,                    UINT32,\
                    "NNP5_48_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_48_2ADC,                    UINT32,\
                    "NNP5_48_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_49_1TAC,                    UINT32,\
                    "NNP5_49_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_49_1CLK,                    UINT32,\
                    "NNP5_49_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_49_1ADC,                    UINT32,\
                    "NNP5_49_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_49_2TAC,                    UINT32,\
                    "NNP5_49_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_49_2CLK,                    UINT32,\
                    "NNP5_49_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_49_2ADC,                    UINT32,\
                    "NNP5_49_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_50_1TAC,                    UINT32,\
                    "NNP5_50_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_50_1CLK,                    UINT32,\
                    "NNP5_50_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_50_1ADC,                    UINT32,\
                    "NNP5_50_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_50_2TAC,                    UINT32,\
                    "NNP5_50_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_50_2CLK,                    UINT32,\
                    "NNP5_50_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP5_50_2ADC,                    UINT32,\
                    "NNP5_50_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_1_1TAC,                     UINT32,\
                    "NNP6_1_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_1_1CLK,                     UINT32,\
                    "NNP6_1_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_1_1ADC,                     UINT32,\
                    "NNP6_1_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_1_2TAC,                     UINT32,\
                    "NNP6_1_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_1_2CLK,                     UINT32,\
                    "NNP6_1_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_1_2ADC,                     UINT32,\
                    "NNP6_1_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_2_1TAC,                     UINT32,\
                    "NNP6_2_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_2_1CLK,                     UINT32,\
                    "NNP6_2_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_2_1ADC,                     UINT32,\
                    "NNP6_2_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_2_2TAC,                     UINT32,\
                    "NNP6_2_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_2_2CLK,                     UINT32,\
                    "NNP6_2_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_2_2ADC,                     UINT32,\
                    "NNP6_2_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_3_1TAC,                     UINT32,\
                    "NNP6_3_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_3_1CLK,                     UINT32,\
                    "NNP6_3_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_3_1ADC,                     UINT32,\
                    "NNP6_3_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_3_2TAC,                     UINT32,\
                    "NNP6_3_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_3_2CLK,                     UINT32,\
                    "NNP6_3_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_3_2ADC,                     UINT32,\
                    "NNP6_3_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_4_1TAC,                     UINT32,\
                    "NNP6_4_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_4_1CLK,                     UINT32,\
                    "NNP6_4_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_4_1ADC,                     UINT32,\
                    "NNP6_4_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_4_2TAC,                     UINT32,\
                    "NNP6_4_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_4_2CLK,                     UINT32,\
                    "NNP6_4_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_4_2ADC,                     UINT32,\
                    "NNP6_4_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_5_1TAC,                     UINT32,\
                    "NNP6_5_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_5_1CLK,                     UINT32,\
                    "NNP6_5_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_5_1ADC,                     UINT32,\
                    "NNP6_5_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_5_2TAC,                     UINT32,\
                    "NNP6_5_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_5_2CLK,                     UINT32,\
                    "NNP6_5_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_5_2ADC,                     UINT32,\
                    "NNP6_5_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_6_1TAC,                     UINT32,\
                    "NNP6_6_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_6_1CLK,                     UINT32,\
                    "NNP6_6_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_6_1ADC,                     UINT32,\
                    "NNP6_6_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_6_2TAC,                     UINT32,\
                    "NNP6_6_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_6_2CLK,                     UINT32,\
                    "NNP6_6_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_6_2ADC,                     UINT32,\
                    "NNP6_6_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_7_1TAC,                     UINT32,\
                    "NNP6_7_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_7_1CLK,                     UINT32,\
                    "NNP6_7_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_7_1ADC,                     UINT32,\
                    "NNP6_7_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_7_2TAC,                     UINT32,\
                    "NNP6_7_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_7_2CLK,                     UINT32,\
                    "NNP6_7_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_7_2ADC,                     UINT32,\
                    "NNP6_7_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_8_1TAC,                     UINT32,\
                    "NNP6_8_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_8_1CLK,                     UINT32,\
                    "NNP6_8_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_8_1ADC,                     UINT32,\
                    "NNP6_8_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_8_2TAC,                     UINT32,\
                    "NNP6_8_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_8_2CLK,                     UINT32,\
                    "NNP6_8_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_8_2ADC,                     UINT32,\
                    "NNP6_8_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_9_1TAC,                     UINT32,\
                    "NNP6_9_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_9_1CLK,                     UINT32,\
                    "NNP6_9_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_9_1ADC,                     UINT32,\
                    "NNP6_9_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_9_2TAC,                     UINT32,\
                    "NNP6_9_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_9_2CLK,                     UINT32,\
                    "NNP6_9_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_9_2ADC,                     UINT32,\
                    "NNP6_9_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_10_1TAC,                    UINT32,\
                    "NNP6_10_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_10_1CLK,                    UINT32,\
                    "NNP6_10_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_10_1ADC,                    UINT32,\
                    "NNP6_10_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_10_2TAC,                    UINT32,\
                    "NNP6_10_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_10_2CLK,                    UINT32,\
                    "NNP6_10_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_10_2ADC,                    UINT32,\
                    "NNP6_10_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_11_1TAC,                    UINT32,\
                    "NNP6_11_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_11_1CLK,                    UINT32,\
                    "NNP6_11_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_11_1ADC,                    UINT32,\
                    "NNP6_11_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_11_2TAC,                    UINT32,\
                    "NNP6_11_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_11_2CLK,                    UINT32,\
                    "NNP6_11_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_11_2ADC,                    UINT32,\
                    "NNP6_11_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_12_1TAC,                    UINT32,\
                    "NNP6_12_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_12_1CLK,                    UINT32,\
                    "NNP6_12_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_12_1ADC,                    UINT32,\
                    "NNP6_12_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_12_2TAC,                    UINT32,\
                    "NNP6_12_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_12_2CLK,                    UINT32,\
                    "NNP6_12_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_12_2ADC,                    UINT32,\
                    "NNP6_12_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_13_1TAC,                    UINT32,\
                    "NNP6_13_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_13_1CLK,                    UINT32,\
                    "NNP6_13_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_13_1ADC,                    UINT32,\
                    "NNP6_13_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_13_2TAC,                    UINT32,\
                    "NNP6_13_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_13_2CLK,                    UINT32,\
                    "NNP6_13_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_13_2ADC,                    UINT32,\
                    "NNP6_13_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_14_1TAC,                    UINT32,\
                    "NNP6_14_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_14_1CLK,                    UINT32,\
                    "NNP6_14_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_14_1ADC,                    UINT32,\
                    "NNP6_14_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_14_2TAC,                    UINT32,\
                    "NNP6_14_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_14_2CLK,                    UINT32,\
                    "NNP6_14_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_14_2ADC,                    UINT32,\
                    "NNP6_14_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_15_1TAC,                    UINT32,\
                    "NNP6_15_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_15_1CLK,                    UINT32,\
                    "NNP6_15_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_15_1ADC,                    UINT32,\
                    "NNP6_15_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_15_2TAC,                    UINT32,\
                    "NNP6_15_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_15_2CLK,                    UINT32,\
                    "NNP6_15_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_15_2ADC,                    UINT32,\
                    "NNP6_15_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_16_1TAC,                    UINT32,\
                    "NNP6_16_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_16_1CLK,                    UINT32,\
                    "NNP6_16_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_16_1ADC,                    UINT32,\
                    "NNP6_16_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_16_2TAC,                    UINT32,\
                    "NNP6_16_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_16_2CLK,                    UINT32,\
                    "NNP6_16_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_16_2ADC,                    UINT32,\
                    "NNP6_16_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_17_1TAC,                    UINT32,\
                    "NNP6_17_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_17_1CLK,                    UINT32,\
                    "NNP6_17_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_17_1ADC,                    UINT32,\
                    "NNP6_17_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_17_2TAC,                    UINT32,\
                    "NNP6_17_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_17_2CLK,                    UINT32,\
                    "NNP6_17_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_17_2ADC,                    UINT32,\
                    "NNP6_17_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_18_1TAC,                    UINT32,\
                    "NNP6_18_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_18_1CLK,                    UINT32,\
                    "NNP6_18_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_18_1ADC,                    UINT32,\
                    "NNP6_18_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_18_2TAC,                    UINT32,\
                    "NNP6_18_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_18_2CLK,                    UINT32,\
                    "NNP6_18_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_18_2ADC,                    UINT32,\
                    "NNP6_18_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_19_1TAC,                    UINT32,\
                    "NNP6_19_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_19_1CLK,                    UINT32,\
                    "NNP6_19_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_19_1ADC,                    UINT32,\
                    "NNP6_19_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_19_2TAC,                    UINT32,\
                    "NNP6_19_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_19_2CLK,                    UINT32,\
                    "NNP6_19_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_19_2ADC,                    UINT32,\
                    "NNP6_19_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_20_1TAC,                    UINT32,\
                    "NNP6_20_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_20_1CLK,                    UINT32,\
                    "NNP6_20_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_20_1ADC,                    UINT32,\
                    "NNP6_20_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_20_2TAC,                    UINT32,\
                    "NNP6_20_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_20_2CLK,                    UINT32,\
                    "NNP6_20_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_20_2ADC,                    UINT32,\
                    "NNP6_20_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_21_1TAC,                    UINT32,\
                    "NNP6_21_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_21_1CLK,                    UINT32,\
                    "NNP6_21_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_21_1ADC,                    UINT32,\
                    "NNP6_21_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_21_2TAC,                    UINT32,\
                    "NNP6_21_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_21_2CLK,                    UINT32,\
                    "NNP6_21_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_21_2ADC,                    UINT32,\
                    "NNP6_21_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_22_1TAC,                    UINT32,\
                    "NNP6_22_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_22_1CLK,                    UINT32,\
                    "NNP6_22_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_22_1ADC,                    UINT32,\
                    "NNP6_22_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_22_2TAC,                    UINT32,\
                    "NNP6_22_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_22_2CLK,                    UINT32,\
                    "NNP6_22_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_22_2ADC,                    UINT32,\
                    "NNP6_22_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_23_1TAC,                    UINT32,\
                    "NNP6_23_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_23_1CLK,                    UINT32,\
                    "NNP6_23_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_23_1ADC,                    UINT32,\
                    "NNP6_23_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_23_2TAC,                    UINT32,\
                    "NNP6_23_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_23_2CLK,                    UINT32,\
                    "NNP6_23_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_23_2ADC,                    UINT32,\
                    "NNP6_23_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_24_1TAC,                    UINT32,\
                    "NNP6_24_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_24_1CLK,                    UINT32,\
                    "NNP6_24_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_24_1ADC,                    UINT32,\
                    "NNP6_24_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_24_2TAC,                    UINT32,\
                    "NNP6_24_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_24_2CLK,                    UINT32,\
                    "NNP6_24_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_24_2ADC,                    UINT32,\
                    "NNP6_24_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_25_1TAC,                    UINT32,\
                    "NNP6_25_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_25_1CLK,                    UINT32,\
                    "NNP6_25_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_25_1ADC,                    UINT32,\
                    "NNP6_25_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_25_2TAC,                    UINT32,\
                    "NNP6_25_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_25_2CLK,                    UINT32,\
                    "NNP6_25_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_25_2ADC,                    UINT32,\
                    "NNP6_25_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_26_1TAC,                    UINT32,\
                    "NNP6_26_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_26_1CLK,                    UINT32,\
                    "NNP6_26_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_26_1ADC,                    UINT32,\
                    "NNP6_26_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_26_2TAC,                    UINT32,\
                    "NNP6_26_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_26_2CLK,                    UINT32,\
                    "NNP6_26_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_26_2ADC,                    UINT32,\
                    "NNP6_26_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_27_1TAC,                    UINT32,\
                    "NNP6_27_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_27_1CLK,                    UINT32,\
                    "NNP6_27_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_27_1ADC,                    UINT32,\
                    "NNP6_27_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_27_2TAC,                    UINT32,\
                    "NNP6_27_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_27_2CLK,                    UINT32,\
                    "NNP6_27_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_27_2ADC,                    UINT32,\
                    "NNP6_27_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_28_1TAC,                    UINT32,\
                    "NNP6_28_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_28_1CLK,                    UINT32,\
                    "NNP6_28_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_28_1ADC,                    UINT32,\
                    "NNP6_28_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_28_2TAC,                    UINT32,\
                    "NNP6_28_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_28_2CLK,                    UINT32,\
                    "NNP6_28_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_28_2ADC,                    UINT32,\
                    "NNP6_28_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_29_1TAC,                    UINT32,\
                    "NNP6_29_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_29_1CLK,                    UINT32,\
                    "NNP6_29_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_29_1ADC,                    UINT32,\
                    "NNP6_29_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_29_2TAC,                    UINT32,\
                    "NNP6_29_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_29_2CLK,                    UINT32,\
                    "NNP6_29_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_29_2ADC,                    UINT32,\
                    "NNP6_29_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_30_1TAC,                    UINT32,\
                    "NNP6_30_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_30_1CLK,                    UINT32,\
                    "NNP6_30_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_30_1ADC,                    UINT32,\
                    "NNP6_30_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_30_2TAC,                    UINT32,\
                    "NNP6_30_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_30_2CLK,                    UINT32,\
                    "NNP6_30_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_30_2ADC,                    UINT32,\
                    "NNP6_30_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_31_1TAC,                    UINT32,\
                    "NNP6_31_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_31_1CLK,                    UINT32,\
                    "NNP6_31_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_31_1ADC,                    UINT32,\
                    "NNP6_31_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_31_2TAC,                    UINT32,\
                    "NNP6_31_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_31_2CLK,                    UINT32,\
                    "NNP6_31_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_31_2ADC,                    UINT32,\
                    "NNP6_31_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_32_1TAC,                    UINT32,\
                    "NNP6_32_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_32_1CLK,                    UINT32,\
                    "NNP6_32_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_32_1ADC,                    UINT32,\
                    "NNP6_32_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_32_2TAC,                    UINT32,\
                    "NNP6_32_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_32_2CLK,                    UINT32,\
                    "NNP6_32_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_32_2ADC,                    UINT32,\
                    "NNP6_32_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_33_1TAC,                    UINT32,\
                    "NNP6_33_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_33_1CLK,                    UINT32,\
                    "NNP6_33_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_33_1ADC,                    UINT32,\
                    "NNP6_33_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_33_2TAC,                    UINT32,\
                    "NNP6_33_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_33_2CLK,                    UINT32,\
                    "NNP6_33_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_33_2ADC,                    UINT32,\
                    "NNP6_33_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_34_1TAC,                    UINT32,\
                    "NNP6_34_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_34_1CLK,                    UINT32,\
                    "NNP6_34_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_34_1ADC,                    UINT32,\
                    "NNP6_34_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_34_2TAC,                    UINT32,\
                    "NNP6_34_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_34_2CLK,                    UINT32,\
                    "NNP6_34_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_34_2ADC,                    UINT32,\
                    "NNP6_34_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_35_1TAC,                    UINT32,\
                    "NNP6_35_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_35_1CLK,                    UINT32,\
                    "NNP6_35_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_35_1ADC,                    UINT32,\
                    "NNP6_35_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_35_2TAC,                    UINT32,\
                    "NNP6_35_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_35_2CLK,                    UINT32,\
                    "NNP6_35_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_35_2ADC,                    UINT32,\
                    "NNP6_35_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_36_1TAC,                    UINT32,\
                    "NNP6_36_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_36_1CLK,                    UINT32,\
                    "NNP6_36_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_36_1ADC,                    UINT32,\
                    "NNP6_36_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_36_2TAC,                    UINT32,\
                    "NNP6_36_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_36_2CLK,                    UINT32,\
                    "NNP6_36_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_36_2ADC,                    UINT32,\
                    "NNP6_36_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_37_1TAC,                    UINT32,\
                    "NNP6_37_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_37_1CLK,                    UINT32,\
                    "NNP6_37_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_37_1ADC,                    UINT32,\
                    "NNP6_37_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_37_2TAC,                    UINT32,\
                    "NNP6_37_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_37_2CLK,                    UINT32,\
                    "NNP6_37_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_37_2ADC,                    UINT32,\
                    "NNP6_37_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_38_1TAC,                    UINT32,\
                    "NNP6_38_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_38_1CLK,                    UINT32,\
                    "NNP6_38_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_38_1ADC,                    UINT32,\
                    "NNP6_38_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_38_2TAC,                    UINT32,\
                    "NNP6_38_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_38_2CLK,                    UINT32,\
                    "NNP6_38_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_38_2ADC,                    UINT32,\
                    "NNP6_38_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_39_1TAC,                    UINT32,\
                    "NNP6_39_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_39_1CLK,                    UINT32,\
                    "NNP6_39_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_39_1ADC,                    UINT32,\
                    "NNP6_39_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_39_2TAC,                    UINT32,\
                    "NNP6_39_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_39_2CLK,                    UINT32,\
                    "NNP6_39_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_39_2ADC,                    UINT32,\
                    "NNP6_39_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_40_1TAC,                    UINT32,\
                    "NNP6_40_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_40_1CLK,                    UINT32,\
                    "NNP6_40_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_40_1ADC,                    UINT32,\
                    "NNP6_40_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_40_2TAC,                    UINT32,\
                    "NNP6_40_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_40_2CLK,                    UINT32,\
                    "NNP6_40_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_40_2ADC,                    UINT32,\
                    "NNP6_40_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_41_1TAC,                    UINT32,\
                    "NNP6_41_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_41_1CLK,                    UINT32,\
                    "NNP6_41_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_41_1ADC,                    UINT32,\
                    "NNP6_41_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_41_2TAC,                    UINT32,\
                    "NNP6_41_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_41_2CLK,                    UINT32,\
                    "NNP6_41_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_41_2ADC,                    UINT32,\
                    "NNP6_41_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_42_1TAC,                    UINT32,\
                    "NNP6_42_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_42_1CLK,                    UINT32,\
                    "NNP6_42_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_42_1ADC,                    UINT32,\
                    "NNP6_42_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_42_2TAC,                    UINT32,\
                    "NNP6_42_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_42_2CLK,                    UINT32,\
                    "NNP6_42_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_42_2ADC,                    UINT32,\
                    "NNP6_42_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_43_1TAC,                    UINT32,\
                    "NNP6_43_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_43_1CLK,                    UINT32,\
                    "NNP6_43_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_43_1ADC,                    UINT32,\
                    "NNP6_43_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_43_2TAC,                    UINT32,\
                    "NNP6_43_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_43_2CLK,                    UINT32,\
                    "NNP6_43_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_43_2ADC,                    UINT32,\
                    "NNP6_43_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_44_1TAC,                    UINT32,\
                    "NNP6_44_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_44_1CLK,                    UINT32,\
                    "NNP6_44_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_44_1ADC,                    UINT32,\
                    "NNP6_44_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_44_2TAC,                    UINT32,\
                    "NNP6_44_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_44_2CLK,                    UINT32,\
                    "NNP6_44_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_44_2ADC,                    UINT32,\
                    "NNP6_44_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_45_1TAC,                    UINT32,\
                    "NNP6_45_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_45_1CLK,                    UINT32,\
                    "NNP6_45_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_45_1ADC,                    UINT32,\
                    "NNP6_45_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_45_2TAC,                    UINT32,\
                    "NNP6_45_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_45_2CLK,                    UINT32,\
                    "NNP6_45_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_45_2ADC,                    UINT32,\
                    "NNP6_45_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_46_1TAC,                    UINT32,\
                    "NNP6_46_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_46_1CLK,                    UINT32,\
                    "NNP6_46_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_46_1ADC,                    UINT32,\
                    "NNP6_46_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_46_2TAC,                    UINT32,\
                    "NNP6_46_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_46_2CLK,                    UINT32,\
                    "NNP6_46_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_46_2ADC,                    UINT32,\
                    "NNP6_46_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_47_1TAC,                    UINT32,\
                    "NNP6_47_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_47_1CLK,                    UINT32,\
                    "NNP6_47_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_47_1ADC,                    UINT32,\
                    "NNP6_47_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_47_2TAC,                    UINT32,\
                    "NNP6_47_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_47_2CLK,                    UINT32,\
                    "NNP6_47_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_47_2ADC,                    UINT32,\
                    "NNP6_47_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_48_1TAC,                    UINT32,\
                    "NNP6_48_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_48_1CLK,                    UINT32,\
                    "NNP6_48_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_48_1ADC,                    UINT32,\
                    "NNP6_48_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_48_2TAC,                    UINT32,\
                    "NNP6_48_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_48_2CLK,                    UINT32,\
                    "NNP6_48_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_48_2ADC,                    UINT32,\
                    "NNP6_48_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_49_1TAC,                    UINT32,\
                    "NNP6_49_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_49_1CLK,                    UINT32,\
                    "NNP6_49_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_49_1ADC,                    UINT32,\
                    "NNP6_49_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_49_2TAC,                    UINT32,\
                    "NNP6_49_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_49_2CLK,                    UINT32,\
                    "NNP6_49_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_49_2ADC,                    UINT32,\
                    "NNP6_49_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_50_1TAC,                    UINT32,\
                    "NNP6_50_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_50_1CLK,                    UINT32,\
                    "NNP6_50_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_50_1ADC,                    UINT32,\
                    "NNP6_50_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_50_2TAC,                    UINT32,\
                    "NNP6_50_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_50_2CLK,                    UINT32,\
                    "NNP6_50_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP6_50_2ADC,                    UINT32,\
                    "NNP6_50_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_1_1TAC,                     UINT32,\
                    "NNP7_1_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_1_1CLK,                     UINT32,\
                    "NNP7_1_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_1_1ADC,                     UINT32,\
                    "NNP7_1_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_1_2TAC,                     UINT32,\
                    "NNP7_1_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_1_2CLK,                     UINT32,\
                    "NNP7_1_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_1_2ADC,                     UINT32,\
                    "NNP7_1_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_2_1TAC,                     UINT32,\
                    "NNP7_2_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_2_1CLK,                     UINT32,\
                    "NNP7_2_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_2_1ADC,                     UINT32,\
                    "NNP7_2_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_2_2TAC,                     UINT32,\
                    "NNP7_2_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_2_2CLK,                     UINT32,\
                    "NNP7_2_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_2_2ADC,                     UINT32,\
                    "NNP7_2_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_3_1TAC,                     UINT32,\
                    "NNP7_3_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_3_1CLK,                     UINT32,\
                    "NNP7_3_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_3_1ADC,                     UINT32,\
                    "NNP7_3_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_3_2TAC,                     UINT32,\
                    "NNP7_3_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_3_2CLK,                     UINT32,\
                    "NNP7_3_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_3_2ADC,                     UINT32,\
                    "NNP7_3_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_4_1TAC,                     UINT32,\
                    "NNP7_4_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_4_1CLK,                     UINT32,\
                    "NNP7_4_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_4_1ADC,                     UINT32,\
                    "NNP7_4_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_4_2TAC,                     UINT32,\
                    "NNP7_4_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_4_2CLK,                     UINT32,\
                    "NNP7_4_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_4_2ADC,                     UINT32,\
                    "NNP7_4_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_5_1TAC,                     UINT32,\
                    "NNP7_5_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_5_1CLK,                     UINT32,\
                    "NNP7_5_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_5_1ADC,                     UINT32,\
                    "NNP7_5_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_5_2TAC,                     UINT32,\
                    "NNP7_5_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_5_2CLK,                     UINT32,\
                    "NNP7_5_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_5_2ADC,                     UINT32,\
                    "NNP7_5_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_6_1TAC,                     UINT32,\
                    "NNP7_6_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_6_1CLK,                     UINT32,\
                    "NNP7_6_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_6_1ADC,                     UINT32,\
                    "NNP7_6_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_6_2TAC,                     UINT32,\
                    "NNP7_6_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_6_2CLK,                     UINT32,\
                    "NNP7_6_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_6_2ADC,                     UINT32,\
                    "NNP7_6_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_7_1TAC,                     UINT32,\
                    "NNP7_7_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_7_1CLK,                     UINT32,\
                    "NNP7_7_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_7_1ADC,                     UINT32,\
                    "NNP7_7_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_7_2TAC,                     UINT32,\
                    "NNP7_7_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_7_2CLK,                     UINT32,\
                    "NNP7_7_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_7_2ADC,                     UINT32,\
                    "NNP7_7_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_8_1TAC,                     UINT32,\
                    "NNP7_8_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_8_1CLK,                     UINT32,\
                    "NNP7_8_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_8_1ADC,                     UINT32,\
                    "NNP7_8_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_8_2TAC,                     UINT32,\
                    "NNP7_8_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_8_2CLK,                     UINT32,\
                    "NNP7_8_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_8_2ADC,                     UINT32,\
                    "NNP7_8_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_9_1TAC,                     UINT32,\
                    "NNP7_9_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_9_1CLK,                     UINT32,\
                    "NNP7_9_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_9_1ADC,                     UINT32,\
                    "NNP7_9_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_9_2TAC,                     UINT32,\
                    "NNP7_9_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_9_2CLK,                     UINT32,\
                    "NNP7_9_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_9_2ADC,                     UINT32,\
                    "NNP7_9_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_10_1TAC,                    UINT32,\
                    "NNP7_10_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_10_1CLK,                    UINT32,\
                    "NNP7_10_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_10_1ADC,                    UINT32,\
                    "NNP7_10_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_10_2TAC,                    UINT32,\
                    "NNP7_10_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_10_2CLK,                    UINT32,\
                    "NNP7_10_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_10_2ADC,                    UINT32,\
                    "NNP7_10_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_11_1TAC,                    UINT32,\
                    "NNP7_11_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_11_1CLK,                    UINT32,\
                    "NNP7_11_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_11_1ADC,                    UINT32,\
                    "NNP7_11_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_11_2TAC,                    UINT32,\
                    "NNP7_11_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_11_2CLK,                    UINT32,\
                    "NNP7_11_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_11_2ADC,                    UINT32,\
                    "NNP7_11_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_12_1TAC,                    UINT32,\
                    "NNP7_12_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_12_1CLK,                    UINT32,\
                    "NNP7_12_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_12_1ADC,                    UINT32,\
                    "NNP7_12_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_12_2TAC,                    UINT32,\
                    "NNP7_12_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_12_2CLK,                    UINT32,\
                    "NNP7_12_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_12_2ADC,                    UINT32,\
                    "NNP7_12_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_13_1TAC,                    UINT32,\
                    "NNP7_13_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_13_1CLK,                    UINT32,\
                    "NNP7_13_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_13_1ADC,                    UINT32,\
                    "NNP7_13_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_13_2TAC,                    UINT32,\
                    "NNP7_13_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_13_2CLK,                    UINT32,\
                    "NNP7_13_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_13_2ADC,                    UINT32,\
                    "NNP7_13_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_14_1TAC,                    UINT32,\
                    "NNP7_14_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_14_1CLK,                    UINT32,\
                    "NNP7_14_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_14_1ADC,                    UINT32,\
                    "NNP7_14_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_14_2TAC,                    UINT32,\
                    "NNP7_14_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_14_2CLK,                    UINT32,\
                    "NNP7_14_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_14_2ADC,                    UINT32,\
                    "NNP7_14_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_15_1TAC,                    UINT32,\
                    "NNP7_15_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_15_1CLK,                    UINT32,\
                    "NNP7_15_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_15_1ADC,                    UINT32,\
                    "NNP7_15_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_15_2TAC,                    UINT32,\
                    "NNP7_15_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_15_2CLK,                    UINT32,\
                    "NNP7_15_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_15_2ADC,                    UINT32,\
                    "NNP7_15_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_16_1TAC,                    UINT32,\
                    "NNP7_16_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_16_1CLK,                    UINT32,\
                    "NNP7_16_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_16_1ADC,                    UINT32,\
                    "NNP7_16_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_16_2TAC,                    UINT32,\
                    "NNP7_16_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_16_2CLK,                    UINT32,\
                    "NNP7_16_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_16_2ADC,                    UINT32,\
                    "NNP7_16_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_17_1TAC,                    UINT32,\
                    "NNP7_17_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_17_1CLK,                    UINT32,\
                    "NNP7_17_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_17_1ADC,                    UINT32,\
                    "NNP7_17_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_17_2TAC,                    UINT32,\
                    "NNP7_17_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_17_2CLK,                    UINT32,\
                    "NNP7_17_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_17_2ADC,                    UINT32,\
                    "NNP7_17_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_18_1TAC,                    UINT32,\
                    "NNP7_18_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_18_1CLK,                    UINT32,\
                    "NNP7_18_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_18_1ADC,                    UINT32,\
                    "NNP7_18_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_18_2TAC,                    UINT32,\
                    "NNP7_18_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_18_2CLK,                    UINT32,\
                    "NNP7_18_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_18_2ADC,                    UINT32,\
                    "NNP7_18_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_19_1TAC,                    UINT32,\
                    "NNP7_19_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_19_1CLK,                    UINT32,\
                    "NNP7_19_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_19_1ADC,                    UINT32,\
                    "NNP7_19_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_19_2TAC,                    UINT32,\
                    "NNP7_19_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_19_2CLK,                    UINT32,\
                    "NNP7_19_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_19_2ADC,                    UINT32,\
                    "NNP7_19_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_20_1TAC,                    UINT32,\
                    "NNP7_20_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_20_1CLK,                    UINT32,\
                    "NNP7_20_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_20_1ADC,                    UINT32,\
                    "NNP7_20_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_20_2TAC,                    UINT32,\
                    "NNP7_20_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_20_2CLK,                    UINT32,\
                    "NNP7_20_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_20_2ADC,                    UINT32,\
                    "NNP7_20_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_21_1TAC,                    UINT32,\
                    "NNP7_21_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_21_1CLK,                    UINT32,\
                    "NNP7_21_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_21_1ADC,                    UINT32,\
                    "NNP7_21_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_21_2TAC,                    UINT32,\
                    "NNP7_21_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_21_2CLK,                    UINT32,\
                    "NNP7_21_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_21_2ADC,                    UINT32,\
                    "NNP7_21_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_22_1TAC,                    UINT32,\
                    "NNP7_22_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_22_1CLK,                    UINT32,\
                    "NNP7_22_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_22_1ADC,                    UINT32,\
                    "NNP7_22_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_22_2TAC,                    UINT32,\
                    "NNP7_22_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_22_2CLK,                    UINT32,\
                    "NNP7_22_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_22_2ADC,                    UINT32,\
                    "NNP7_22_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_23_1TAC,                    UINT32,\
                    "NNP7_23_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_23_1CLK,                    UINT32,\
                    "NNP7_23_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_23_1ADC,                    UINT32,\
                    "NNP7_23_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_23_2TAC,                    UINT32,\
                    "NNP7_23_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_23_2CLK,                    UINT32,\
                    "NNP7_23_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_23_2ADC,                    UINT32,\
                    "NNP7_23_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_24_1TAC,                    UINT32,\
                    "NNP7_24_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_24_1CLK,                    UINT32,\
                    "NNP7_24_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_24_1ADC,                    UINT32,\
                    "NNP7_24_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_24_2TAC,                    UINT32,\
                    "NNP7_24_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_24_2CLK,                    UINT32,\
                    "NNP7_24_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_24_2ADC,                    UINT32,\
                    "NNP7_24_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_25_1TAC,                    UINT32,\
                    "NNP7_25_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_25_1CLK,                    UINT32,\
                    "NNP7_25_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_25_1ADC,                    UINT32,\
                    "NNP7_25_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_25_2TAC,                    UINT32,\
                    "NNP7_25_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_25_2CLK,                    UINT32,\
                    "NNP7_25_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_25_2ADC,                    UINT32,\
                    "NNP7_25_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_26_1TAC,                    UINT32,\
                    "NNP7_26_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_26_1CLK,                    UINT32,\
                    "NNP7_26_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_26_1ADC,                    UINT32,\
                    "NNP7_26_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_26_2TAC,                    UINT32,\
                    "NNP7_26_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_26_2CLK,                    UINT32,\
                    "NNP7_26_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_26_2ADC,                    UINT32,\
                    "NNP7_26_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_27_1TAC,                    UINT32,\
                    "NNP7_27_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_27_1CLK,                    UINT32,\
                    "NNP7_27_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_27_1ADC,                    UINT32,\
                    "NNP7_27_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_27_2TAC,                    UINT32,\
                    "NNP7_27_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_27_2CLK,                    UINT32,\
                    "NNP7_27_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_27_2ADC,                    UINT32,\
                    "NNP7_27_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_28_1TAC,                    UINT32,\
                    "NNP7_28_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_28_1CLK,                    UINT32,\
                    "NNP7_28_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_28_1ADC,                    UINT32,\
                    "NNP7_28_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_28_2TAC,                    UINT32,\
                    "NNP7_28_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_28_2CLK,                    UINT32,\
                    "NNP7_28_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_28_2ADC,                    UINT32,\
                    "NNP7_28_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_29_1TAC,                    UINT32,\
                    "NNP7_29_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_29_1CLK,                    UINT32,\
                    "NNP7_29_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_29_1ADC,                    UINT32,\
                    "NNP7_29_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_29_2TAC,                    UINT32,\
                    "NNP7_29_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_29_2CLK,                    UINT32,\
                    "NNP7_29_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_29_2ADC,                    UINT32,\
                    "NNP7_29_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_30_1TAC,                    UINT32,\
                    "NNP7_30_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_30_1CLK,                    UINT32,\
                    "NNP7_30_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_30_1ADC,                    UINT32,\
                    "NNP7_30_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_30_2TAC,                    UINT32,\
                    "NNP7_30_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_30_2CLK,                    UINT32,\
                    "NNP7_30_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_30_2ADC,                    UINT32,\
                    "NNP7_30_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_31_1TAC,                    UINT32,\
                    "NNP7_31_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_31_1CLK,                    UINT32,\
                    "NNP7_31_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_31_1ADC,                    UINT32,\
                    "NNP7_31_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_31_2TAC,                    UINT32,\
                    "NNP7_31_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_31_2CLK,                    UINT32,\
                    "NNP7_31_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_31_2ADC,                    UINT32,\
                    "NNP7_31_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_32_1TAC,                    UINT32,\
                    "NNP7_32_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_32_1CLK,                    UINT32,\
                    "NNP7_32_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_32_1ADC,                    UINT32,\
                    "NNP7_32_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_32_2TAC,                    UINT32,\
                    "NNP7_32_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_32_2CLK,                    UINT32,\
                    "NNP7_32_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_32_2ADC,                    UINT32,\
                    "NNP7_32_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_33_1TAC,                    UINT32,\
                    "NNP7_33_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_33_1CLK,                    UINT32,\
                    "NNP7_33_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_33_1ADC,                    UINT32,\
                    "NNP7_33_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_33_2TAC,                    UINT32,\
                    "NNP7_33_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_33_2CLK,                    UINT32,\
                    "NNP7_33_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_33_2ADC,                    UINT32,\
                    "NNP7_33_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_34_1TAC,                    UINT32,\
                    "NNP7_34_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_34_1CLK,                    UINT32,\
                    "NNP7_34_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_34_1ADC,                    UINT32,\
                    "NNP7_34_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_34_2TAC,                    UINT32,\
                    "NNP7_34_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_34_2CLK,                    UINT32,\
                    "NNP7_34_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_34_2ADC,                    UINT32,\
                    "NNP7_34_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_35_1TAC,                    UINT32,\
                    "NNP7_35_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_35_1CLK,                    UINT32,\
                    "NNP7_35_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_35_1ADC,                    UINT32,\
                    "NNP7_35_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_35_2TAC,                    UINT32,\
                    "NNP7_35_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_35_2CLK,                    UINT32,\
                    "NNP7_35_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_35_2ADC,                    UINT32,\
                    "NNP7_35_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_36_1TAC,                    UINT32,\
                    "NNP7_36_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_36_1CLK,                    UINT32,\
                    "NNP7_36_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_36_1ADC,                    UINT32,\
                    "NNP7_36_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_36_2TAC,                    UINT32,\
                    "NNP7_36_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_36_2CLK,                    UINT32,\
                    "NNP7_36_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_36_2ADC,                    UINT32,\
                    "NNP7_36_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_37_1TAC,                    UINT32,\
                    "NNP7_37_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_37_1CLK,                    UINT32,\
                    "NNP7_37_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_37_1ADC,                    UINT32,\
                    "NNP7_37_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_37_2TAC,                    UINT32,\
                    "NNP7_37_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_37_2CLK,                    UINT32,\
                    "NNP7_37_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_37_2ADC,                    UINT32,\
                    "NNP7_37_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_38_1TAC,                    UINT32,\
                    "NNP7_38_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_38_1CLK,                    UINT32,\
                    "NNP7_38_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_38_1ADC,                    UINT32,\
                    "NNP7_38_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_38_2TAC,                    UINT32,\
                    "NNP7_38_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_38_2CLK,                    UINT32,\
                    "NNP7_38_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_38_2ADC,                    UINT32,\
                    "NNP7_38_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_39_1TAC,                    UINT32,\
                    "NNP7_39_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_39_1CLK,                    UINT32,\
                    "NNP7_39_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_39_1ADC,                    UINT32,\
                    "NNP7_39_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_39_2TAC,                    UINT32,\
                    "NNP7_39_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_39_2CLK,                    UINT32,\
                    "NNP7_39_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_39_2ADC,                    UINT32,\
                    "NNP7_39_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_40_1TAC,                    UINT32,\
                    "NNP7_40_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_40_1CLK,                    UINT32,\
                    "NNP7_40_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_40_1ADC,                    UINT32,\
                    "NNP7_40_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_40_2TAC,                    UINT32,\
                    "NNP7_40_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_40_2CLK,                    UINT32,\
                    "NNP7_40_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_40_2ADC,                    UINT32,\
                    "NNP7_40_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_41_1TAC,                    UINT32,\
                    "NNP7_41_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_41_1CLK,                    UINT32,\
                    "NNP7_41_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_41_1ADC,                    UINT32,\
                    "NNP7_41_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_41_2TAC,                    UINT32,\
                    "NNP7_41_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_41_2CLK,                    UINT32,\
                    "NNP7_41_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_41_2ADC,                    UINT32,\
                    "NNP7_41_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_42_1TAC,                    UINT32,\
                    "NNP7_42_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_42_1CLK,                    UINT32,\
                    "NNP7_42_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_42_1ADC,                    UINT32,\
                    "NNP7_42_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_42_2TAC,                    UINT32,\
                    "NNP7_42_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_42_2CLK,                    UINT32,\
                    "NNP7_42_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_42_2ADC,                    UINT32,\
                    "NNP7_42_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_43_1TAC,                    UINT32,\
                    "NNP7_43_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_43_1CLK,                    UINT32,\
                    "NNP7_43_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_43_1ADC,                    UINT32,\
                    "NNP7_43_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_43_2TAC,                    UINT32,\
                    "NNP7_43_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_43_2CLK,                    UINT32,\
                    "NNP7_43_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_43_2ADC,                    UINT32,\
                    "NNP7_43_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_44_1TAC,                    UINT32,\
                    "NNP7_44_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_44_1CLK,                    UINT32,\
                    "NNP7_44_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_44_1ADC,                    UINT32,\
                    "NNP7_44_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_44_2TAC,                    UINT32,\
                    "NNP7_44_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_44_2CLK,                    UINT32,\
                    "NNP7_44_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_44_2ADC,                    UINT32,\
                    "NNP7_44_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_45_1TAC,                    UINT32,\
                    "NNP7_45_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_45_1CLK,                    UINT32,\
                    "NNP7_45_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_45_1ADC,                    UINT32,\
                    "NNP7_45_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_45_2TAC,                    UINT32,\
                    "NNP7_45_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_45_2CLK,                    UINT32,\
                    "NNP7_45_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_45_2ADC,                    UINT32,\
                    "NNP7_45_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_46_1TAC,                    UINT32,\
                    "NNP7_46_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_46_1CLK,                    UINT32,\
                    "NNP7_46_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_46_1ADC,                    UINT32,\
                    "NNP7_46_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_46_2TAC,                    UINT32,\
                    "NNP7_46_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_46_2CLK,                    UINT32,\
                    "NNP7_46_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_46_2ADC,                    UINT32,\
                    "NNP7_46_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_47_1TAC,                    UINT32,\
                    "NNP7_47_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_47_1CLK,                    UINT32,\
                    "NNP7_47_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_47_1ADC,                    UINT32,\
                    "NNP7_47_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_47_2TAC,                    UINT32,\
                    "NNP7_47_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_47_2CLK,                    UINT32,\
                    "NNP7_47_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_47_2ADC,                    UINT32,\
                    "NNP7_47_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_48_1TAC,                    UINT32,\
                    "NNP7_48_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_48_1CLK,                    UINT32,\
                    "NNP7_48_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_48_1ADC,                    UINT32,\
                    "NNP7_48_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_48_2TAC,                    UINT32,\
                    "NNP7_48_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_48_2CLK,                    UINT32,\
                    "NNP7_48_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_48_2ADC,                    UINT32,\
                    "NNP7_48_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_49_1TAC,                    UINT32,\
                    "NNP7_49_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_49_1CLK,                    UINT32,\
                    "NNP7_49_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_49_1ADC,                    UINT32,\
                    "NNP7_49_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_49_2TAC,                    UINT32,\
                    "NNP7_49_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_49_2CLK,                    UINT32,\
                    "NNP7_49_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_49_2ADC,                    UINT32,\
                    "NNP7_49_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_50_1TAC,                    UINT32,\
                    "NNP7_50_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_50_1CLK,                    UINT32,\
                    "NNP7_50_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_50_1ADC,                    UINT32,\
                    "NNP7_50_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_50_2TAC,                    UINT32,\
                    "NNP7_50_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_50_2CLK,                    UINT32,\
                    "NNP7_50_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP7_50_2ADC,                    UINT32,\
                    "NNP7_50_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_1_1TAC,                     UINT32,\
                    "NNP8_1_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_1_1CLK,                     UINT32,\
                    "NNP8_1_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_1_1ADC,                     UINT32,\
                    "NNP8_1_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_1_2TAC,                     UINT32,\
                    "NNP8_1_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_1_2CLK,                     UINT32,\
                    "NNP8_1_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_1_2ADC,                     UINT32,\
                    "NNP8_1_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_2_1TAC,                     UINT32,\
                    "NNP8_2_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_2_1CLK,                     UINT32,\
                    "NNP8_2_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_2_1ADC,                     UINT32,\
                    "NNP8_2_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_2_2TAC,                     UINT32,\
                    "NNP8_2_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_2_2CLK,                     UINT32,\
                    "NNP8_2_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_2_2ADC,                     UINT32,\
                    "NNP8_2_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_3_1TAC,                     UINT32,\
                    "NNP8_3_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_3_1CLK,                     UINT32,\
                    "NNP8_3_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_3_1ADC,                     UINT32,\
                    "NNP8_3_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_3_2TAC,                     UINT32,\
                    "NNP8_3_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_3_2CLK,                     UINT32,\
                    "NNP8_3_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_3_2ADC,                     UINT32,\
                    "NNP8_3_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_4_1TAC,                     UINT32,\
                    "NNP8_4_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_4_1CLK,                     UINT32,\
                    "NNP8_4_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_4_1ADC,                     UINT32,\
                    "NNP8_4_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_4_2TAC,                     UINT32,\
                    "NNP8_4_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_4_2CLK,                     UINT32,\
                    "NNP8_4_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_4_2ADC,                     UINT32,\
                    "NNP8_4_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_5_1TAC,                     UINT32,\
                    "NNP8_5_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_5_1CLK,                     UINT32,\
                    "NNP8_5_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_5_1ADC,                     UINT32,\
                    "NNP8_5_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_5_2TAC,                     UINT32,\
                    "NNP8_5_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_5_2CLK,                     UINT32,\
                    "NNP8_5_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_5_2ADC,                     UINT32,\
                    "NNP8_5_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_6_1TAC,                     UINT32,\
                    "NNP8_6_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_6_1CLK,                     UINT32,\
                    "NNP8_6_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_6_1ADC,                     UINT32,\
                    "NNP8_6_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_6_2TAC,                     UINT32,\
                    "NNP8_6_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_6_2CLK,                     UINT32,\
                    "NNP8_6_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_6_2ADC,                     UINT32,\
                    "NNP8_6_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_7_1TAC,                     UINT32,\
                    "NNP8_7_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_7_1CLK,                     UINT32,\
                    "NNP8_7_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_7_1ADC,                     UINT32,\
                    "NNP8_7_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_7_2TAC,                     UINT32,\
                    "NNP8_7_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_7_2CLK,                     UINT32,\
                    "NNP8_7_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_7_2ADC,                     UINT32,\
                    "NNP8_7_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_8_1TAC,                     UINT32,\
                    "NNP8_8_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_8_1CLK,                     UINT32,\
                    "NNP8_8_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_8_1ADC,                     UINT32,\
                    "NNP8_8_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_8_2TAC,                     UINT32,\
                    "NNP8_8_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_8_2CLK,                     UINT32,\
                    "NNP8_8_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_8_2ADC,                     UINT32,\
                    "NNP8_8_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_9_1TAC,                     UINT32,\
                    "NNP8_9_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_9_1CLK,                     UINT32,\
                    "NNP8_9_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_9_1ADC,                     UINT32,\
                    "NNP8_9_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_9_2TAC,                     UINT32,\
                    "NNP8_9_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_9_2CLK,                     UINT32,\
                    "NNP8_9_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_9_2ADC,                     UINT32,\
                    "NNP8_9_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_10_1TAC,                    UINT32,\
                    "NNP8_10_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_10_1CLK,                    UINT32,\
                    "NNP8_10_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_10_1ADC,                    UINT32,\
                    "NNP8_10_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_10_2TAC,                    UINT32,\
                    "NNP8_10_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_10_2CLK,                    UINT32,\
                    "NNP8_10_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_10_2ADC,                    UINT32,\
                    "NNP8_10_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_11_1TAC,                    UINT32,\
                    "NNP8_11_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_11_1CLK,                    UINT32,\
                    "NNP8_11_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_11_1ADC,                    UINT32,\
                    "NNP8_11_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_11_2TAC,                    UINT32,\
                    "NNP8_11_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_11_2CLK,                    UINT32,\
                    "NNP8_11_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_11_2ADC,                    UINT32,\
                    "NNP8_11_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_12_1TAC,                    UINT32,\
                    "NNP8_12_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_12_1CLK,                    UINT32,\
                    "NNP8_12_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_12_1ADC,                    UINT32,\
                    "NNP8_12_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_12_2TAC,                    UINT32,\
                    "NNP8_12_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_12_2CLK,                    UINT32,\
                    "NNP8_12_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_12_2ADC,                    UINT32,\
                    "NNP8_12_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_13_1TAC,                    UINT32,\
                    "NNP8_13_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_13_1CLK,                    UINT32,\
                    "NNP8_13_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_13_1ADC,                    UINT32,\
                    "NNP8_13_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_13_2TAC,                    UINT32,\
                    "NNP8_13_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_13_2CLK,                    UINT32,\
                    "NNP8_13_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_13_2ADC,                    UINT32,\
                    "NNP8_13_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_14_1TAC,                    UINT32,\
                    "NNP8_14_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_14_1CLK,                    UINT32,\
                    "NNP8_14_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_14_1ADC,                    UINT32,\
                    "NNP8_14_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_14_2TAC,                    UINT32,\
                    "NNP8_14_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_14_2CLK,                    UINT32,\
                    "NNP8_14_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_14_2ADC,                    UINT32,\
                    "NNP8_14_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_15_1TAC,                    UINT32,\
                    "NNP8_15_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_15_1CLK,                    UINT32,\
                    "NNP8_15_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_15_1ADC,                    UINT32,\
                    "NNP8_15_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_15_2TAC,                    UINT32,\
                    "NNP8_15_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_15_2CLK,                    UINT32,\
                    "NNP8_15_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_15_2ADC,                    UINT32,\
                    "NNP8_15_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_16_1TAC,                    UINT32,\
                    "NNP8_16_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_16_1CLK,                    UINT32,\
                    "NNP8_16_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_16_1ADC,                    UINT32,\
                    "NNP8_16_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_16_2TAC,                    UINT32,\
                    "NNP8_16_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_16_2CLK,                    UINT32,\
                    "NNP8_16_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_16_2ADC,                    UINT32,\
                    "NNP8_16_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_17_1TAC,                    UINT32,\
                    "NNP8_17_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_17_1CLK,                    UINT32,\
                    "NNP8_17_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_17_1ADC,                    UINT32,\
                    "NNP8_17_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_17_2TAC,                    UINT32,\
                    "NNP8_17_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_17_2CLK,                    UINT32,\
                    "NNP8_17_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_17_2ADC,                    UINT32,\
                    "NNP8_17_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_18_1TAC,                    UINT32,\
                    "NNP8_18_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_18_1CLK,                    UINT32,\
                    "NNP8_18_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_18_1ADC,                    UINT32,\
                    "NNP8_18_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_18_2TAC,                    UINT32,\
                    "NNP8_18_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_18_2CLK,                    UINT32,\
                    "NNP8_18_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_18_2ADC,                    UINT32,\
                    "NNP8_18_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_19_1TAC,                    UINT32,\
                    "NNP8_19_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_19_1CLK,                    UINT32,\
                    "NNP8_19_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_19_1ADC,                    UINT32,\
                    "NNP8_19_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_19_2TAC,                    UINT32,\
                    "NNP8_19_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_19_2CLK,                    UINT32,\
                    "NNP8_19_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_19_2ADC,                    UINT32,\
                    "NNP8_19_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_20_1TAC,                    UINT32,\
                    "NNP8_20_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_20_1CLK,                    UINT32,\
                    "NNP8_20_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_20_1ADC,                    UINT32,\
                    "NNP8_20_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_20_2TAC,                    UINT32,\
                    "NNP8_20_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_20_2CLK,                    UINT32,\
                    "NNP8_20_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_20_2ADC,                    UINT32,\
                    "NNP8_20_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_21_1TAC,                    UINT32,\
                    "NNP8_21_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_21_1CLK,                    UINT32,\
                    "NNP8_21_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_21_1ADC,                    UINT32,\
                    "NNP8_21_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_21_2TAC,                    UINT32,\
                    "NNP8_21_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_21_2CLK,                    UINT32,\
                    "NNP8_21_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_21_2ADC,                    UINT32,\
                    "NNP8_21_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_22_1TAC,                    UINT32,\
                    "NNP8_22_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_22_1CLK,                    UINT32,\
                    "NNP8_22_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_22_1ADC,                    UINT32,\
                    "NNP8_22_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_22_2TAC,                    UINT32,\
                    "NNP8_22_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_22_2CLK,                    UINT32,\
                    "NNP8_22_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_22_2ADC,                    UINT32,\
                    "NNP8_22_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_23_1TAC,                    UINT32,\
                    "NNP8_23_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_23_1CLK,                    UINT32,\
                    "NNP8_23_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_23_1ADC,                    UINT32,\
                    "NNP8_23_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_23_2TAC,                    UINT32,\
                    "NNP8_23_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_23_2CLK,                    UINT32,\
                    "NNP8_23_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_23_2ADC,                    UINT32,\
                    "NNP8_23_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_24_1TAC,                    UINT32,\
                    "NNP8_24_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_24_1CLK,                    UINT32,\
                    "NNP8_24_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_24_1ADC,                    UINT32,\
                    "NNP8_24_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_24_2TAC,                    UINT32,\
                    "NNP8_24_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_24_2CLK,                    UINT32,\
                    "NNP8_24_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_24_2ADC,                    UINT32,\
                    "NNP8_24_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_25_1TAC,                    UINT32,\
                    "NNP8_25_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_25_1CLK,                    UINT32,\
                    "NNP8_25_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_25_1ADC,                    UINT32,\
                    "NNP8_25_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_25_2TAC,                    UINT32,\
                    "NNP8_25_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_25_2CLK,                    UINT32,\
                    "NNP8_25_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_25_2ADC,                    UINT32,\
                    "NNP8_25_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_26_1TAC,                    UINT32,\
                    "NNP8_26_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_26_1CLK,                    UINT32,\
                    "NNP8_26_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_26_1ADC,                    UINT32,\
                    "NNP8_26_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_26_2TAC,                    UINT32,\
                    "NNP8_26_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_26_2CLK,                    UINT32,\
                    "NNP8_26_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_26_2ADC,                    UINT32,\
                    "NNP8_26_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_27_1TAC,                    UINT32,\
                    "NNP8_27_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_27_1CLK,                    UINT32,\
                    "NNP8_27_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_27_1ADC,                    UINT32,\
                    "NNP8_27_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_27_2TAC,                    UINT32,\
                    "NNP8_27_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_27_2CLK,                    UINT32,\
                    "NNP8_27_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_27_2ADC,                    UINT32,\
                    "NNP8_27_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_28_1TAC,                    UINT32,\
                    "NNP8_28_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_28_1CLK,                    UINT32,\
                    "NNP8_28_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_28_1ADC,                    UINT32,\
                    "NNP8_28_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_28_2TAC,                    UINT32,\
                    "NNP8_28_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_28_2CLK,                    UINT32,\
                    "NNP8_28_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_28_2ADC,                    UINT32,\
                    "NNP8_28_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_29_1TAC,                    UINT32,\
                    "NNP8_29_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_29_1CLK,                    UINT32,\
                    "NNP8_29_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_29_1ADC,                    UINT32,\
                    "NNP8_29_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_29_2TAC,                    UINT32,\
                    "NNP8_29_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_29_2CLK,                    UINT32,\
                    "NNP8_29_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_29_2ADC,                    UINT32,\
                    "NNP8_29_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_30_1TAC,                    UINT32,\
                    "NNP8_30_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_30_1CLK,                    UINT32,\
                    "NNP8_30_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_30_1ADC,                    UINT32,\
                    "NNP8_30_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_30_2TAC,                    UINT32,\
                    "NNP8_30_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_30_2CLK,                    UINT32,\
                    "NNP8_30_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_30_2ADC,                    UINT32,\
                    "NNP8_30_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_31_1TAC,                    UINT32,\
                    "NNP8_31_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_31_1CLK,                    UINT32,\
                    "NNP8_31_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_31_1ADC,                    UINT32,\
                    "NNP8_31_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_31_2TAC,                    UINT32,\
                    "NNP8_31_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_31_2CLK,                    UINT32,\
                    "NNP8_31_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_31_2ADC,                    UINT32,\
                    "NNP8_31_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_32_1TAC,                    UINT32,\
                    "NNP8_32_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_32_1CLK,                    UINT32,\
                    "NNP8_32_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_32_1ADC,                    UINT32,\
                    "NNP8_32_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_32_2TAC,                    UINT32,\
                    "NNP8_32_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_32_2CLK,                    UINT32,\
                    "NNP8_32_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_32_2ADC,                    UINT32,\
                    "NNP8_32_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_33_1TAC,                    UINT32,\
                    "NNP8_33_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_33_1CLK,                    UINT32,\
                    "NNP8_33_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_33_1ADC,                    UINT32,\
                    "NNP8_33_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_33_2TAC,                    UINT32,\
                    "NNP8_33_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_33_2CLK,                    UINT32,\
                    "NNP8_33_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_33_2ADC,                    UINT32,\
                    "NNP8_33_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_34_1TAC,                    UINT32,\
                    "NNP8_34_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_34_1CLK,                    UINT32,\
                    "NNP8_34_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_34_1ADC,                    UINT32,\
                    "NNP8_34_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_34_2TAC,                    UINT32,\
                    "NNP8_34_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_34_2CLK,                    UINT32,\
                    "NNP8_34_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_34_2ADC,                    UINT32,\
                    "NNP8_34_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_35_1TAC,                    UINT32,\
                    "NNP8_35_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_35_1CLK,                    UINT32,\
                    "NNP8_35_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_35_1ADC,                    UINT32,\
                    "NNP8_35_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_35_2TAC,                    UINT32,\
                    "NNP8_35_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_35_2CLK,                    UINT32,\
                    "NNP8_35_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_35_2ADC,                    UINT32,\
                    "NNP8_35_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_36_1TAC,                    UINT32,\
                    "NNP8_36_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_36_1CLK,                    UINT32,\
                    "NNP8_36_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_36_1ADC,                    UINT32,\
                    "NNP8_36_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_36_2TAC,                    UINT32,\
                    "NNP8_36_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_36_2CLK,                    UINT32,\
                    "NNP8_36_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_36_2ADC,                    UINT32,\
                    "NNP8_36_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_37_1TAC,                    UINT32,\
                    "NNP8_37_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_37_1CLK,                    UINT32,\
                    "NNP8_37_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_37_1ADC,                    UINT32,\
                    "NNP8_37_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_37_2TAC,                    UINT32,\
                    "NNP8_37_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_37_2CLK,                    UINT32,\
                    "NNP8_37_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_37_2ADC,                    UINT32,\
                    "NNP8_37_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_38_1TAC,                    UINT32,\
                    "NNP8_38_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_38_1CLK,                    UINT32,\
                    "NNP8_38_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_38_1ADC,                    UINT32,\
                    "NNP8_38_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_38_2TAC,                    UINT32,\
                    "NNP8_38_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_38_2CLK,                    UINT32,\
                    "NNP8_38_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_38_2ADC,                    UINT32,\
                    "NNP8_38_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_39_1TAC,                    UINT32,\
                    "NNP8_39_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_39_1CLK,                    UINT32,\
                    "NNP8_39_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_39_1ADC,                    UINT32,\
                    "NNP8_39_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_39_2TAC,                    UINT32,\
                    "NNP8_39_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_39_2CLK,                    UINT32,\
                    "NNP8_39_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_39_2ADC,                    UINT32,\
                    "NNP8_39_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_40_1TAC,                    UINT32,\
                    "NNP8_40_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_40_1CLK,                    UINT32,\
                    "NNP8_40_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_40_1ADC,                    UINT32,\
                    "NNP8_40_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_40_2TAC,                    UINT32,\
                    "NNP8_40_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_40_2CLK,                    UINT32,\
                    "NNP8_40_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_40_2ADC,                    UINT32,\
                    "NNP8_40_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_41_1TAC,                    UINT32,\
                    "NNP8_41_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_41_1CLK,                    UINT32,\
                    "NNP8_41_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_41_1ADC,                    UINT32,\
                    "NNP8_41_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_41_2TAC,                    UINT32,\
                    "NNP8_41_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_41_2CLK,                    UINT32,\
                    "NNP8_41_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_41_2ADC,                    UINT32,\
                    "NNP8_41_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_42_1TAC,                    UINT32,\
                    "NNP8_42_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_42_1CLK,                    UINT32,\
                    "NNP8_42_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_42_1ADC,                    UINT32,\
                    "NNP8_42_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_42_2TAC,                    UINT32,\
                    "NNP8_42_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_42_2CLK,                    UINT32,\
                    "NNP8_42_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_42_2ADC,                    UINT32,\
                    "NNP8_42_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_43_1TAC,                    UINT32,\
                    "NNP8_43_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_43_1CLK,                    UINT32,\
                    "NNP8_43_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_43_1ADC,                    UINT32,\
                    "NNP8_43_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_43_2TAC,                    UINT32,\
                    "NNP8_43_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_43_2CLK,                    UINT32,\
                    "NNP8_43_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_43_2ADC,                    UINT32,\
                    "NNP8_43_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_44_1TAC,                    UINT32,\
                    "NNP8_44_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_44_1CLK,                    UINT32,\
                    "NNP8_44_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_44_1ADC,                    UINT32,\
                    "NNP8_44_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_44_2TAC,                    UINT32,\
                    "NNP8_44_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_44_2CLK,                    UINT32,\
                    "NNP8_44_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_44_2ADC,                    UINT32,\
                    "NNP8_44_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_45_1TAC,                    UINT32,\
                    "NNP8_45_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_45_1CLK,                    UINT32,\
                    "NNP8_45_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_45_1ADC,                    UINT32,\
                    "NNP8_45_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_45_2TAC,                    UINT32,\
                    "NNP8_45_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_45_2CLK,                    UINT32,\
                    "NNP8_45_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_45_2ADC,                    UINT32,\
                    "NNP8_45_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_46_1TAC,                    UINT32,\
                    "NNP8_46_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_46_1CLK,                    UINT32,\
                    "NNP8_46_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_46_1ADC,                    UINT32,\
                    "NNP8_46_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_46_2TAC,                    UINT32,\
                    "NNP8_46_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_46_2CLK,                    UINT32,\
                    "NNP8_46_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_46_2ADC,                    UINT32,\
                    "NNP8_46_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_47_1TAC,                    UINT32,\
                    "NNP8_47_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_47_1CLK,                    UINT32,\
                    "NNP8_47_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_47_1ADC,                    UINT32,\
                    "NNP8_47_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_47_2TAC,                    UINT32,\
                    "NNP8_47_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_47_2CLK,                    UINT32,\
                    "NNP8_47_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_47_2ADC,                    UINT32,\
                    "NNP8_47_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_48_1TAC,                    UINT32,\
                    "NNP8_48_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_48_1CLK,                    UINT32,\
                    "NNP8_48_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_48_1ADC,                    UINT32,\
                    "NNP8_48_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_48_2TAC,                    UINT32,\
                    "NNP8_48_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_48_2CLK,                    UINT32,\
                    "NNP8_48_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_48_2ADC,                    UINT32,\
                    "NNP8_48_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_49_1TAC,                    UINT32,\
                    "NNP8_49_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_49_1CLK,                    UINT32,\
                    "NNP8_49_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_49_1ADC,                    UINT32,\
                    "NNP8_49_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_49_2TAC,                    UINT32,\
                    "NNP8_49_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_49_2CLK,                    UINT32,\
                    "NNP8_49_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_49_2ADC,                    UINT32,\
                    "NNP8_49_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_50_1TAC,                    UINT32,\
                    "NNP8_50_1TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_50_1CLK,                    UINT32,\
                    "NNP8_50_1CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_50_1ADC,                    UINT32,\
                    "NNP8_50_1ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_50_2TAC,                    UINT32,\
                    "NNP8_50_2TAC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_50_2CLK,                    UINT32,\
                    "NNP8_50_2CLK",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     NNP8_50_2ADC,                    UINT32,\
                    "NNP8_50_2ADC",65535); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX1M,                          UINT32,\
                    "PSPX1M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX1MI,                         UINT32,\
                    "PSPX1MI",                         "PSPX1M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX1ME,                         UINT32,\
                    "PSPX1ME",                         "PSPX1M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX1,                           UINT32,\
                    "PSPX1",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX1v,                          UINT32,\
                    "PSPX1v",                          "PSPX1"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX2M,                          UINT32,\
                    "PSPX2M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX2MI,                         UINT32,\
                    "PSPX2MI",                         "PSPX2M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX2ME,                         UINT32,\
                    "PSPX2ME",                         "PSPX2M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX2,                           UINT32,\
                    "PSPX2",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX2v,                          UINT32,\
                    "PSPX2v",                          "PSPX2"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX3M,                          UINT32,\
                    "PSPX3M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX3MI,                         UINT32,\
                    "PSPX3MI",                         "PSPX3M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX3ME,                         UINT32,\
                    "PSPX3ME",                         "PSPX3M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX3,                           UINT32,\
                    "PSPX3",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX3v,                          UINT32,\
                    "PSPX3v",                          "PSPX3"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX4M,                          UINT32,\
                    "PSPX4M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX4MI,                         UINT32,\
                    "PSPX4MI",                         "PSPX4M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX4ME,                         UINT32,\
                    "PSPX4ME",                         "PSPX4M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX4,                           UINT32,\
                    "PSPX4",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX4v,                          UINT32,\
                    "PSPX4v",                          "PSPX4"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX5M,                          UINT32,\
                    "PSPX5M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX5MI,                         UINT32,\
                    "PSPX5MI",                         "PSPX5M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX5ME,                         UINT32,\
                    "PSPX5ME",                         "PSPX5M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX5,                           UINT32,\
                    "PSPX5",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX5v,                          UINT32,\
                    "PSPX5v",                          "PSPX5"); \
  \
} while (0);

/********************************************************
 *
 * For internal use by the network data reader:
 * (version checks, etc)
 */

typedef struct EXT_STR_h101_layout_t
{
  uint32_t _magic;
  uint32_t _size_info;
  uint32_t _size_struct;
  uint32_t _size_struct_onion;
  uint32_t _pack_list_items;

  uint32_t _num_items;
  struct {
    uint32_t _offset;
    uint32_t _size;
    uint32_t _xor;
    const char *_name;
  } _items[1];
  uint32_t _pack_list[6664];
} EXT_STR_h101_layout;

#define EXT_STR_h101_LAYOUT_INIT { \
  0x57e65c93, \
  sizeof(EXT_STR_h101_layout), \
  sizeof(EXT_STR_h101), \
  sizeof(EXT_STR_h101_onion), \
  6664, \
  1, \
  { \
    { 0, sizeof(EXT_STR_h101), 0xfc58b6ed, "h101" }, \
  }, \
  { \
    0x40000000, 0x40000004, 0x400003e8, 0x400003ec, \
    0x400003f0, 0x400003f4, 0x400003f8, 0x400003fc, \
    0x40000400, 0x40000404, 0x40000408, 0x4000040c, \
    0x40000410, 0x40000414, 0x40000418, 0x4000041c, \
    0x40000420, 0x40000424, 0x40000428, 0x4000042c, \
    0x40000430, 0x40000434, 0x40000438, 0x4000043c, \
    0x40000440, 0x40000444, 0x40000448, 0x4000044c, \
    0x40000450, 0x40000454, 0x40000458, 0x4000045c, \
    0x40000460, 0x40000464, 0x40000468, 0x4000046c, \
    0x40000470, 0x40000474, 0x40000478, 0x4000047c, \
    0x40000480, 0x40000484, 0x40000488, 0x4000048c, \
    0x40000490, 0x40000494, 0x40000498, 0x4000049c, \
    0x400004a0, 0x400004a4, 0x400004a8, 0x400004ac, \
    0x400004b0, 0x400004b4, 0x400004b8, 0x400004bc, \
    0x400004c0, 0x400004c4, 0x400004c8, 0x400004cc, \
    0x400004d0, 0x400004d4, 0x400004d8, 0x400004dc, \
    0x400004e0, 0x400004e4, 0x400004e8, 0x400004ec, \
    0x400004f0, 0x400004f4, 0x400004f8, 0x400004fc, \
    0x40000500, 0x40000504, 0x40000508, 0x4000050c, \
    0x40000510, 0x40000514, 0x40000518, 0x4000051c, \
    0x40000520, 0x40000524, 0x40000528, 0x4000052c, \
    0x40000530, 0x40000534, 0x40000538, 0x4000053c, \
    0x40000540, 0x40000544, 0x40000548, 0x4000054c, \
    0x40000550, 0x40000554, 0x40000558, 0x4000055c, \
    0x40000560, 0x40000564, 0x40000568, 0x4000056c, \
    0x40000570, 0x40000574, 0x40000578, 0x4000057c, \
    0x40000580, 0x40000584, 0x40000588, 0x4000058c, \
    0x40000590, 0x40000594, 0x40000598, 0x4000059c, \
    0x400005a0, 0x400005a4, 0x400005a8, 0x400005ac, \
    0x400005b0, 0x400005b4, 0x400005b8, 0x400005bc, \
    0x400005c0, 0x400005c4, 0x400005c8, 0x400005cc, \
    0x400005d0, 0x400005d4, 0x400005d8, 0x400005dc, \
    0x400005e0, 0x400005e4, 0x400005e8, 0x400005ec, \
    0x400005f0, 0x400005f4, 0x400005f8, 0x400005fc, \
    0x40000600, 0x40000604, 0x40000608, 0x4000060c, \
    0x40000610, 0x40000614, 0x40000618, 0x4000061c, \
    0x40000620, 0x40000624, 0x40000628, 0x4000062c, \
    0x40000630, 0x40000634, 0x40000638, 0x4000063c, \
    0x40000640, 0x40000644, 0x40000648, 0x4000064c, \
    0x40000650, 0x40000654, 0x40000658, 0x4000065c, \
    0x40000660, 0x40000664, 0x40000668, 0x4000066c, \
    0x40000670, 0x40000674, 0x40000678, 0x4000067c, \
    0x40000680, 0x40000684, 0x40000688, 0x4000068c, \
    0x40000690, 0x40000694, 0x40000698, 0x4000069c, \
    0x400006a0, 0x400006a4, 0x400006a8, 0x400006ac, \
    0x400006b0, 0x400006b4, 0x400006b8, 0x400006bc, \
    0x400006c0, 0x400006c4, 0x400006c8, 0x400006cc, \
    0x400006d0, 0x400006d4, 0x400006d8, 0x400006dc, \
    0x400006e0, 0x400006e4, 0x400006e8, 0x400006ec, \
    0x400006f0, 0x400006f4, 0x400006f8, 0x400006fc, \
    0x40000700, 0x40000704, 0x40000708, 0x4000070c, \
    0x40000710, 0x40000714, 0x40000718, 0x4000071c, \
    0x40000720, 0x40000724, 0x40000728, 0x4000072c, \
    0x40000730, 0x40000734, 0x40000738, 0x4000073c, \
    0x40000740, 0x40000744, 0x40000748, 0x4000074c, \
    0x40000750, 0x40000754, 0x40000758, 0x4000075c, \
    0x40000760, 0x40000764, 0x40000768, 0x4000076c, \
    0x40000770, 0x40000774, 0x40000778, 0x4000077c, \
    0x40000780, 0x40000784, 0x40000788, 0x4000078c, \
    0x40000790, 0x40000794, 0x40000798, 0x4000079c, \
    0x400007a0, 0x400007a4, 0x400007a8, 0x400007ac, \
    0x400007b0, 0x400007b4, 0x400007b8, 0x400007bc, \
    0x400007c0, 0x400007c4, 0x400007c8, 0x400007cc, \
    0x400007d0, 0x400007d4, 0x400007d8, 0x400007dc, \
    0x400007e0, 0x400007e4, 0x400007e8, 0x400007ec, \
    0x400007f0, 0x400007f4, 0x400007f8, 0x400007fc, \
    0x40000800, 0x40000804, 0x40000808, 0x4000080c, \
    0x40000810, 0x40000814, 0x40000818, 0x4000081c, \
    0x40000820, 0x40000824, 0x40000828, 0x4000082c, \
    0x40000830, 0x40000834, 0x40000838, 0x4000083c, \
    0x40000840, 0x40000844, 0x40000848, 0x4000084c, \
    0x40000850, 0x40000854, 0x40000858, 0x4000085c, \
    0x40000860, 0x40000864, 0x40000868, 0x4000086c, \
    0x40000870, 0x40000874, 0x40000878, 0x4000087c, \
    0x40000880, 0x40000884, 0x40000888, 0x4000088c, \
    0x40000890, 0x40000894, 0x40000898, 0x4000089c, \
    0x400008a0, 0x400008a4, 0x400008a8, 0x400008ac, \
    0x400008b0, 0x400008b4, 0x400008b8, 0x400008bc, \
    0x400008c0, 0x400008c4, 0x400008c8, 0x400008cc, \
    0x400008d0, 0x400008d4, 0x400008d8, 0x400008dc, \
    0x400008e0, 0x400008e4, 0x400008e8, 0x400008ec, \
    0x400008f0, 0x400008f4, 0x400008f8, 0x400008fc, \
    0x40000900, 0x40000904, 0x40000908, 0x4000090c, \
    0x40000910, 0x40000914, 0x40000918, 0x4000091c, \
    0x40000920, 0x40000924, 0x40000928, 0x4000092c, \
    0x40000930, 0x40000934, 0x40000938, 0x4000093c, \
    0x40000940, 0x40000944, 0x40000948, 0x4000094c, \
    0x40000950, 0x40000954, 0x40000958, 0x4000095c, \
    0x40000960, 0x40000964, 0x40000968, 0x4000096c, \
    0x40000970, 0x40000974, 0x40000978, 0x4000097c, \
    0x40000980, 0x40000984, 0x40000988, 0x4000098c, \
    0x40000990, 0x40000994, 0x40000998, 0x4000099c, \
    0x400009a0, 0x400009a4, 0x400009a8, 0x400009ac, \
    0x400009b0, 0x400009b4, 0x400009b8, 0x400009bc, \
    0x400009c0, 0x400009c4, 0x400009c8, 0x400009cc, \
    0x400009d0, 0x400009d4, 0x400009d8, 0x400009dc, \
    0x400009e0, 0x400009e4, 0x400009e8, 0x400009ec, \
    0x400009f0, 0x400009f4, 0x400009f8, 0x400009fc, \
    0x40000a00, 0x40000a04, 0x40000a08, 0x40000a0c, \
    0x40000a10, 0x40000a14, 0x40000a18, 0x40000a1c, \
    0x40000a20, 0x40000a24, 0x40000a28, 0x40000a2c, \
    0x40000a30, 0x40000a34, 0x40000a38, 0x40000a3c, \
    0x40000a40, 0x40000a44, 0x40000a48, 0x40000a4c, \
    0x40000a50, 0x40000a54, 0x40000a58, 0x40000a5c, \
    0x40000a60, 0x40000a64, 0x40000a68, 0x40000a6c, \
    0x40000a70, 0x40000a74, 0x40000a78, 0x40000a7c, \
    0x40000a80, 0x40000a84, 0x40000a88, 0x40000a8c, \
    0x40000a90, 0x40000a94, 0x40000a98, 0x40000a9c, \
    0x40000aa0, 0x40000aa4, 0x40000aa8, 0x40000aac, \
    0x40000ab0, 0x40000ab4, 0x40000ab8, 0x40000abc, \
    0x40000ac0, 0x40000ac4, 0x40000ac8, 0x40000acc, \
    0x40000ad0, 0x40000ad4, 0x40000ad8, 0x40000adc, \
    0x40000ae0, 0x40000ae4, 0x40000ae8, 0x40000aec, \
    0x40000af0, 0x40000af4, 0x40000af8, 0x40000afc, \
    0x40000b00, 0x40000b04, 0x40000b08, 0x40000b0c, \
    0x40000b10, 0x40000b14, 0x40000b18, 0x40000b1c, \
    0x40000b20, 0x40000b24, 0x40000b28, 0x40000b2c, \
    0x40000b30, 0x40000b34, 0x40000b38, 0x40000b3c, \
    0x40000b40, 0x40000b44, 0x40000b48, 0x40000b4c, \
    0x40000b50, 0x40000b54, 0x40000b58, 0x40000b5c, \
    0x40000b60, 0x40000b64, 0x40000b68, 0x40000b6c, \
    0x40000b70, 0x40000b74, 0x40000b78, 0x40000b7c, \
    0x40000b80, 0x40000b84, 0x40000b88, 0x40000b8c, \
    0x40000b90, 0x40000b94, 0x40000b98, 0x40000b9c, \
    0x40000ba0, 0x40000ba4, 0x40000ba8, 0x40000bac, \
    0x40000bb0, 0x40000bb4, 0x40000bb8, 0x40000bbc, \
    0x40000bc0, 0x40000bc4, 0x40000bc8, 0x40000bcc, \
    0x40000bd0, 0x40000bd4, 0x40000bd8, 0x40000bdc, \
    0x40000be0, 0x40000be4, 0x40000be8, 0x40000bec, \
    0x40000bf0, 0x40000bf4, 0x40000bf8, 0x40000bfc, \
    0x40000c00, 0x40000c04, 0x40000c08, 0x40000c0c, \
    0x40000c10, 0x40000c14, 0x40000c18, 0x40000c1c, \
    0x40000c20, 0x40000c24, 0x40000c28, 0x40000c2c, \
    0x40000c30, 0x40000c34, 0x40000c38, 0x40000c3c, \
    0x40000c40, 0x40000c44, 0x40000c48, 0x40000c4c, \
    0x40000c50, 0x40000c54, 0x40000c58, 0x40000c5c, \
    0x40000c60, 0x40000c64, 0x40000c68, 0x40000c6c, \
    0x40000c70, 0x40000c74, 0x40000c78, 0x40000c7c, \
    0x40000c80, 0x40000c84, 0x40000c88, 0x40000c8c, \
    0x40000c90, 0x40000c94, 0x40000c98, 0x40000c9c, \
    0x40000ca0, 0x40000ca4, 0x40000ca8, 0x40000cac, \
    0x40000cb0, 0x40000cb4, 0x40000cb8, 0x40000cbc, \
    0x40000cc0, 0x40000cc4, 0x40000cc8, 0x40000ccc, \
    0x40000cd0, 0x40000cd4, 0x40000cd8, 0x40000cdc, \
    0x40000ce0, 0x40000ce4, 0x40000ce8, 0x40000cec, \
    0x40000cf0, 0x40000cf4, 0x40000cf8, 0x40000cfc, \
    0x40000d00, 0x40000d04, 0x40000d08, 0x40000d0c, \
    0x40000d10, 0x40000d14, 0x40000d18, 0x40000d1c, \
    0x40000d20, 0x40000d24, 0x40000d28, 0x40000d2c, \
    0x40000d30, 0x40000d34, 0x40000d38, 0x40000d3c, \
    0x40000d40, 0x40000d44, 0x40000d48, 0x40000d4c, \
    0x40000d50, 0x40000d54, 0x40000d58, 0x40000d5c, \
    0x40000d60, 0x40000d64, 0x40000d68, 0x40000d6c, \
    0x40000d70, 0x40000d74, 0x40000d78, 0x40000d7c, \
    0x40000d80, 0x40000d84, 0x40000d88, 0x40000d8c, \
    0x40000d90, 0x40000d94, 0x40000d98, 0x40000d9c, \
    0x40000da0, 0x40000da4, 0x40000da8, 0x40000dac, \
    0x40000db0, 0x40000db4, 0x40000db8, 0x40000dbc, \
    0x40000dc0, 0x40000dc4, 0x40000dc8, 0x40000dcc, \
    0x40000dd0, 0x40000dd4, 0x40000dd8, 0x40000ddc, \
    0x40000de0, 0x40000de4, 0x40000de8, 0x40000dec, \
    0x40000df0, 0x40000df4, 0x40000df8, 0x40000dfc, \
    0x40000e00, 0x40000e04, 0x40000e08, 0x40000e0c, \
    0x40000e10, 0x40000e14, 0x40000e18, 0x40000e1c, \
    0x40000e20, 0x40000e24, 0x40000e28, 0x40000e2c, \
    0x40000e30, 0x40000e34, 0x40000e38, 0x40000e3c, \
    0x40000e40, 0x40000e44, 0x40000e48, 0x40000e4c, \
    0x40000e50, 0x40000e54, 0x40000e58, 0x40000e5c, \
    0x40000e60, 0x40000e64, 0x40000e68, 0x40000e6c, \
    0x40000e70, 0x40000e74, 0x40000e78, 0x40000e7c, \
    0x40000e80, 0x40000e84, 0x40000e88, 0x40000e8c, \
    0x40000e90, 0x40000e94, 0x40000e98, 0x40000e9c, \
    0x40000ea0, 0x40000ea4, 0x40000ea8, 0x40000eac, \
    0x40000eb0, 0x40000eb4, 0x40000eb8, 0x40000ebc, \
    0x40000ec0, 0x40000ec4, 0x40000ec8, 0x40000ecc, \
    0x40000ed0, 0x40000ed4, 0x40000ed8, 0x40000edc, \
    0x40000ee0, 0x40000ee4, 0x40000ee8, 0x40000eec, \
    0x40000ef0, 0x40000ef4, 0x40000ef8, 0x40000efc, \
    0x40000f00, 0x40000f04, 0x40000f08, 0x40000f0c, \
    0x40000f10, 0x40000f14, 0x40000f18, 0x40000f1c, \
    0x40000f20, 0x40000f24, 0x40000f28, 0x40000f2c, \
    0x40000f30, 0x40000f34, 0x40000f38, 0x40000f3c, \
    0x40000f40, 0x40000f44, 0x40000f48, 0x40000f4c, \
    0x40000f50, 0x40000f54, 0x40000f58, 0x40000f5c, \
    0x40000f60, 0x40000f64, 0x40000f68, 0x40000f6c, \
    0x40000f70, 0x40000f74, 0x40000f78, 0x40000f7c, \
    0x40000f80, 0x40000f84, 0x40000f88, 0x40000f8c, \
    0x40000f90, 0x40000f94, 0x40000f98, 0x40000f9c, \
    0x40000fa0, 0x40000fa4, 0x40000fa8, 0x40000fac, \
    0x40000fb0, 0x40000fb4, 0x40000fb8, 0x40000fbc, \
    0x40000fc0, 0x40000fc4, 0x40000fc8, 0x40000fcc, \
    0x40000fd0, 0x40000fd4, 0x40000fd8, 0x40000fdc, \
    0x40000fe0, 0x40000fe4, 0x40000fe8, 0x40000fec, \
    0x40000ff0, 0x40000ff4, 0x40000ff8, 0x40000ffc, \
    0x40001000, 0x40001004, 0x40001008, 0x4000100c, \
    0x40001010, 0x40001014, 0x40001018, 0x4000101c, \
    0x40001020, 0x40001024, 0x40001028, 0x4000102c, \
    0x40001030, 0x40001034, 0x40001038, 0x4000103c, \
    0x40001040, 0x40001044, 0x40001048, 0x4000104c, \
    0x40001050, 0x40001054, 0x40001058, 0x4000105c, \
    0x40001060, 0x40001064, 0x40001068, 0x4000106c, \
    0x40001070, 0x40001074, 0x40001078, 0x4000107c, \
    0x40001080, 0x40001084, 0x40001088, 0x4000108c, \
    0x40001090, 0x40001094, 0x40001098, 0x4000109c, \
    0x400010a0, 0x400010a4, 0x400010a8, 0x400010ac, \
    0x400010b0, 0x400010b4, 0x400010b8, 0x400010bc, \
    0x400010c0, 0x400010c4, 0x400010c8, 0x400010cc, \
    0x400010d0, 0x400010d4, 0x400010d8, 0x400010dc, \
    0x400010e0, 0x400010e4, 0x400010e8, 0x400010ec, \
    0x400010f0, 0x400010f4, 0x400010f8, 0x400010fc, \
    0x40001100, 0x40001104, 0x40001108, 0x4000110c, \
    0x40001110, 0x40001114, 0x40001118, 0x4000111c, \
    0x40001120, 0x40001124, 0x40001128, 0x4000112c, \
    0x40001130, 0x40001134, 0x40001138, 0x4000113c, \
    0x40001140, 0x40001144, 0x40001148, 0x4000114c, \
    0x40001150, 0x40001154, 0x40001158, 0x4000115c, \
    0x40001160, 0x40001164, 0x40001168, 0x4000116c, \
    0x40001170, 0x40001174, 0x40001178, 0x4000117c, \
    0x40001180, 0x40001184, 0x40001188, 0x4000118c, \
    0x40001190, 0x40001194, 0x40001198, 0x4000119c, \
    0x400011a0, 0x400011a4, 0x400011a8, 0x400011ac, \
    0x400011b0, 0x400011b4, 0x400011b8, 0x400011bc, \
    0x400011c0, 0x400011c4, 0x400011c8, 0x400011cc, \
    0x400011d0, 0x400011d4, 0x400011d8, 0x400011dc, \
    0x400011e0, 0x400011e4, 0x400011e8, 0x400011ec, \
    0x400011f0, 0x400011f4, 0x400011f8, 0x400011fc, \
    0x40001200, 0x40001204, 0x40001208, 0x4000120c, \
    0x40001210, 0x40001214, 0x40001218, 0x4000121c, \
    0x40001220, 0x40001224, 0x40001228, 0x4000122c, \
    0x40001230, 0x40001234, 0x40001238, 0x4000123c, \
    0x40001240, 0x40001244, 0x40001248, 0x4000124c, \
    0x40001250, 0x40001254, 0x40001258, 0x4000125c, \
    0x40001260, 0x40001264, 0x40001268, 0x4000126c, \
    0x40001270, 0x40001274, 0x40001278, 0x4000127c, \
    0x40001280, 0x40001284, 0x40001288, 0x4000128c, \
    0x40001290, 0x40001294, 0x40001298, 0x4000129c, \
    0x400012a0, 0x400012a4, 0x400012a8, 0x400012ac, \
    0x400012b0, 0x400012b4, 0x400012b8, 0x400012bc, \
    0x400012c0, 0x400012c4, 0x400012c8, 0x400012cc, \
    0x400012d0, 0x400012d4, 0x400012d8, 0x400012dc, \
    0x400012e0, 0x400012e4, 0x400012e8, 0x400012ec, \
    0x400012f0, 0x400012f4, 0x400012f8, 0x400012fc, \
    0x40001300, 0x40001304, 0x40001308, 0x4000130c, \
    0x40001310, 0x40001314, 0x40001318, 0x4000131c, \
    0x40001320, 0x40001324, 0x40001328, 0x4000132c, \
    0x40001330, 0x40001334, 0x40001338, 0x4000133c, \
    0x40001340, 0x40001344, 0x40001348, 0x4000134c, \
    0x40001350, 0x40001354, 0x40001358, 0x4000135c, \
    0x40001360, 0x40001364, 0x40001368, 0x4000136c, \
    0x40001370, 0x40001374, 0x40001378, 0x4000137c, \
    0x40001380, 0x40001384, 0x40001388, 0x4000138c, \
    0x40001390, 0x40001394, 0x40001398, 0x4000139c, \
    0x400013a0, 0x400013a4, 0x400013a8, 0x400013ac, \
    0x400013b0, 0x400013b4, 0x400013b8, 0x400013bc, \
    0x400013c0, 0x400013c4, 0x400013c8, 0x400013cc, \
    0x400013d0, 0x400013d4, 0x400013d8, 0x400013dc, \
    0x400013e0, 0x400013e4, 0x400013e8, 0x400013ec, \
    0x400013f0, 0x400013f4, 0x400013f8, 0x400013fc, \
    0x40001400, 0x40001404, 0x40001408, 0x4000140c, \
    0x40001410, 0x40001414, 0x40001418, 0x4000141c, \
    0x40001420, 0x40001424, 0x40001428, 0x4000142c, \
    0x40001430, 0x40001434, 0x40001438, 0x4000143c, \
    0x40001440, 0x40001444, 0x40001448, 0x4000144c, \
    0x40001450, 0x40001454, 0x40001458, 0x4000145c, \
    0x40001460, 0x40001464, 0x40001468, 0x4000146c, \
    0x40001470, 0x40001474, 0x40001478, 0x4000147c, \
    0x40001480, 0x40001484, 0x40001488, 0x4000148c, \
    0x40001490, 0x40001494, 0x40001498, 0x4000149c, \
    0x400014a0, 0x400014a4, 0x400014a8, 0x400014ac, \
    0x400014b0, 0x400014b4, 0x400014b8, 0x400014bc, \
    0x400014c0, 0x400014c4, 0x400014c8, 0x400014cc, \
    0x400014d0, 0x400014d4, 0x400014d8, 0x400014dc, \
    0x400014e0, 0x400014e4, 0x400014e8, 0x400014ec, \
    0x400014f0, 0x400014f4, 0x400014f8, 0x400014fc, \
    0x40001500, 0x40001504, 0x40001508, 0x4000150c, \
    0x40001510, 0x40001514, 0x40001518, 0x4000151c, \
    0x40001520, 0x40001524, 0x40001528, 0x4000152c, \
    0x40001530, 0x40001534, 0x40001538, 0x4000153c, \
    0x40001540, 0x40001544, 0x40001548, 0x4000154c, \
    0x40001550, 0x40001554, 0x40001558, 0x4000155c, \
    0x40001560, 0x40001564, 0x40001568, 0x4000156c, \
    0x40001570, 0x40001574, 0x40001578, 0x4000157c, \
    0x40001580, 0x40001584, 0x40001588, 0x4000158c, \
    0x40001590, 0x40001594, 0x40001598, 0x4000159c, \
    0x400015a0, 0x400015a4, 0x400015a8, 0x400015ac, \
    0x400015b0, 0x400015b4, 0x400015b8, 0x400015bc, \
    0x400015c0, 0x400015c4, 0x400015c8, 0x400015cc, \
    0x400015d0, 0x400015d4, 0x400015d8, 0x400015dc, \
    0x400015e0, 0x400015e4, 0x400015e8, 0x400015ec, \
    0x400015f0, 0x400015f4, 0x400015f8, 0x400015fc, \
    0x40001600, 0x40001604, 0x40001608, 0x4000160c, \
    0x40001610, 0x40001614, 0x40001618, 0x4000161c, \
    0x40001620, 0x40001624, 0x40001628, 0x4000162c, \
    0x40001630, 0x40001634, 0x40001638, 0x4000163c, \
    0x40001640, 0x40001644, 0x40001648, 0x4000164c, \
    0x40001650, 0x40001654, 0x40001658, 0x4000165c, \
    0x40001660, 0x40001664, 0x40001668, 0x4000166c, \
    0x40001670, 0x40001674, 0x40001678, 0x4000167c, \
    0x40001680, 0x40001684, 0x40001688, 0x4000168c, \
    0x40001690, 0x40001694, 0x40001698, 0x4000169c, \
    0x400016a0, 0x400016a4, 0x400016a8, 0x400016ac, \
    0x400016b0, 0x400016b4, 0x400016b8, 0x400016bc, \
    0x400016c0, 0x400016c4, 0x400016c8, 0x400016cc, \
    0x400016d0, 0x400016d4, 0x400016d8, 0x400016dc, \
    0x400016e0, 0x400016e4, 0x400016e8, 0x400016ec, \
    0x400016f0, 0x400016f4, 0x400016f8, 0x400016fc, \
    0x40001700, 0x40001704, 0x40001708, 0x4000170c, \
    0x40001710, 0x40001714, 0x40001718, 0x4000171c, \
    0x40001720, 0x40001724, 0x40001728, 0x4000172c, \
    0x40001730, 0x40001734, 0x40001738, 0x4000173c, \
    0x40001740, 0x40001744, 0x40001748, 0x4000174c, \
    0x40001750, 0x40001754, 0x40001758, 0x4000175c, \
    0x40001760, 0x40001764, 0x40001768, 0x4000176c, \
    0x40001770, 0x40001774, 0x40001778, 0x4000177c, \
    0x40001780, 0x40001784, 0x40001788, 0x4000178c, \
    0x40001790, 0x40001794, 0x40001798, 0x4000179c, \
    0x400017a0, 0x400017a4, 0x400017a8, 0x400017ac, \
    0x400017b0, 0x400017b4, 0x400017b8, 0x400017bc, \
    0x400017c0, 0x400017c4, 0x400017c8, 0x400017cc, \
    0x400017d0, 0x400017d4, 0x400017d8, 0x400017dc, \
    0x400017e0, 0x400017e4, 0x400017e8, 0x400017ec, \
    0x400017f0, 0x400017f4, 0x400017f8, 0x400017fc, \
    0x40001800, 0x40001804, 0x40001808, 0x4000180c, \
    0x40001810, 0x40001814, 0x40001818, 0x4000181c, \
    0x40001820, 0x40001824, 0x40001828, 0x4000182c, \
    0x40001830, 0x40001834, 0x40001838, 0x4000183c, \
    0x40001840, 0x40001844, 0x40001848, 0x4000184c, \
    0x40001850, 0x40001854, 0x40001858, 0x4000185c, \
    0x40001860, 0x40001864, 0x40001868, 0x4000186c, \
    0x40001870, 0x40001874, 0x40001878, 0x4000187c, \
    0x40001880, 0x40001884, 0x40001888, 0x4000188c, \
    0x40001890, 0x40001894, 0x40001898, 0x4000189c, \
    0x400018a0, 0x400018a4, 0x400018a8, 0x400018ac, \
    0x400018b0, 0x400018b4, 0x400018b8, 0x400018bc, \
    0x400018c0, 0x400018c4, 0x400018c8, 0x400018cc, \
    0x400018d0, 0x400018d4, 0x400018d8, 0x400018dc, \
    0x400018e0, 0x400018e4, 0x400018e8, 0x400018ec, \
    0x400018f0, 0x400018f4, 0x400018f8, 0x400018fc, \
    0x40001900, 0x40001904, 0x40001908, 0x4000190c, \
    0x40001910, 0x40001914, 0x40001918, 0x4000191c, \
    0x40001920, 0x40001924, 0x40001928, 0x4000192c, \
    0x40001930, 0x40001934, 0x40001938, 0x4000193c, \
    0x40001940, 0x40001944, 0x40001948, 0x4000194c, \
    0x40001950, 0x40001954, 0x40001958, 0x4000195c, \
    0x40001960, 0x40001964, 0x40001968, 0x4000196c, \
    0x40001970, 0x40001974, 0x40001978, 0x4000197c, \
    0x40001980, 0x40001984, 0x40001988, 0x4000198c, \
    0x40001990, 0x40001994, 0x40001998, 0x4000199c, \
    0x400019a0, 0x400019a4, 0x400019a8, 0x400019ac, \
    0x400019b0, 0x400019b4, 0x400019b8, 0x400019bc, \
    0x400019c0, 0x400019c4, 0x400019c8, 0x400019cc, \
    0x400019d0, 0x400019d4, 0x400019d8, 0x400019dc, \
    0x400019e0, 0x400019e4, 0x400019e8, 0x400019ec, \
    0x400019f0, 0x400019f4, 0x400019f8, 0x400019fc, \
    0x40001a00, 0x40001a04, 0x40001a08, 0x40001a0c, \
    0x40001a10, 0x40001a14, 0x40001a18, 0x40001a1c, \
    0x40001a20, 0x40001a24, 0x40001a28, 0x40001a2c, \
    0x40001a30, 0x40001a34, 0x40001a38, 0x40001a3c, \
    0x40001a40, 0x40001a44, 0x40001a48, 0x40001a4c, \
    0x40001a50, 0x40001a54, 0x40001a58, 0x40001a5c, \
    0x40001a60, 0x40001a64, 0x40001a68, 0x40001a6c, \
    0x40001a70, 0x40001a74, 0x40001a78, 0x40001a7c, \
    0x40001a80, 0x40001a84, 0x40001a88, 0x40001a8c, \
    0x40001a90, 0x40001a94, 0x40001a98, 0x40001a9c, \
    0x40001aa0, 0x40001aa4, 0x40001aa8, 0x40001aac, \
    0x40001ab0, 0x40001ab4, 0x40001ab8, 0x40001abc, \
    0x40001ac0, 0x40001ac4, 0x40001ac8, 0x40001acc, \
    0x40001ad0, 0x40001ad4, 0x40001ad8, 0x40001adc, \
    0x40001ae0, 0x40001ae4, 0x40001ae8, 0x40001aec, \
    0x40001af0, 0x40001af4, 0x40001af8, 0x40001afc, \
    0x40001b00, 0x40001b04, 0x40001b08, 0x40001b0c, \
    0x40001b10, 0x40001b14, 0x40001b18, 0x40001b1c, \
    0x40001b20, 0x40001b24, 0x40001b28, 0x40001b2c, \
    0x40001b30, 0x40001b34, 0x40001b38, 0x40001b3c, \
    0x40001b40, 0x40001b44, 0x40001b48, 0x40001b4c, \
    0x40001b50, 0x40001b54, 0x40001b58, 0x40001b5c, \
    0x40001b60, 0x40001b64, 0x40001b68, 0x40001b6c, \
    0x40001b70, 0x40001b74, 0x40001b78, 0x40001b7c, \
    0x40001b80, 0x40001b84, 0x40001b88, 0x40001b8c, \
    0x40001b90, 0x40001b94, 0x40001b98, 0x40001b9c, \
    0x40001ba0, 0x40001ba4, 0x40001ba8, 0x40001bac, \
    0x40001bb0, 0x40001bb4, 0x40001bb8, 0x40001bbc, \
    0x40001bc0, 0x40001bc4, 0x40001bc8, 0x40001bcc, \
    0x40001bd0, 0x40001bd4, 0x40001bd8, 0x40001bdc, \
    0x40001be0, 0x40001be4, 0x40001be8, 0x40001bec, \
    0x40001bf0, 0x40001bf4, 0x40001bf8, 0x40001bfc, \
    0x40001c00, 0x40001c04, 0x40001c08, 0x40001c0c, \
    0x40001c10, 0x40001c14, 0x40001c18, 0x40001c1c, \
    0x40001c20, 0x40001c24, 0x40001c28, 0x40001c2c, \
    0x40001c30, 0x40001c34, 0x40001c38, 0x40001c3c, \
    0x40001c40, 0x40001c44, 0x40001c48, 0x40001c4c, \
    0x40001c50, 0x40001c54, 0x40001c58, 0x40001c5c, \
    0x40001c60, 0x40001c64, 0x40001c68, 0x40001c6c, \
    0x40001c70, 0x40001c74, 0x40001c78, 0x40001c7c, \
    0x40001c80, 0x40001c84, 0x40001c88, 0x40001c8c, \
    0x40001c90, 0x40001c94, 0x40001c98, 0x40001c9c, \
    0x40001ca0, 0x40001ca4, 0x40001ca8, 0x40001cac, \
    0x40001cb0, 0x40001cb4, 0x40001cb8, 0x40001cbc, \
    0x40001cc0, 0x40001cc4, 0x40001cc8, 0x40001ccc, \
    0x40001cd0, 0x40001cd4, 0x40001cd8, 0x40001cdc, \
    0x40001ce0, 0x40001ce4, 0x40001ce8, 0x40001cec, \
    0x40001cf0, 0x40001cf4, 0x40001cf8, 0x40001cfc, \
    0x40001d00, 0x40001d04, 0x40001d08, 0x40001d0c, \
    0x40001d10, 0x40001d14, 0x40001d18, 0x40001d1c, \
    0x40001d20, 0x40001d24, 0x40001d28, 0x40001d2c, \
    0x40001d30, 0x40001d34, 0x40001d38, 0x40001d3c, \
    0x40001d40, 0x40001d44, 0x40001d48, 0x40001d4c, \
    0x40001d50, 0x40001d54, 0x40001d58, 0x40001d5c, \
    0x40001d60, 0x40001d64, 0x40001d68, 0x40001d6c, \
    0x40001d70, 0x40001d74, 0x40001d78, 0x40001d7c, \
    0x40001d80, 0x40001d84, 0x40001d88, 0x40001d8c, \
    0x40001d90, 0x40001d94, 0x40001d98, 0x40001d9c, \
    0x40001da0, 0x40001da4, 0x40001da8, 0x40001dac, \
    0x40001db0, 0x40001db4, 0x40001db8, 0x40001dbc, \
    0x40001dc0, 0x40001dc4, 0x40001dc8, 0x40001dcc, \
    0x40001dd0, 0x40001dd4, 0x40001dd8, 0x40001ddc, \
    0x40001de0, 0x40001de4, 0x40001de8, 0x40001dec, \
    0x40001df0, 0x40001df4, 0x40001df8, 0x40001dfc, \
    0x40001e00, 0x40001e04, 0x40001e08, 0x40001e0c, \
    0x40001e10, 0x40001e14, 0x40001e18, 0x40001e1c, \
    0x40001e20, 0x40001e24, 0x40001e28, 0x40001e2c, \
    0x40001e30, 0x40001e34, 0x40001e38, 0x40001e3c, \
    0x40001e40, 0x40001e44, 0x40001e48, 0x40001e4c, \
    0x40001e50, 0x40001e54, 0x40001e58, 0x40001e5c, \
    0x40001e60, 0x40001e64, 0x40001e68, 0x40001e6c, \
    0x40001e70, 0x40001e74, 0x40001e78, 0x40001e7c, \
    0x40001e80, 0x40001e84, 0x40001e88, 0x40001e8c, \
    0x40001e90, 0x40001e94, 0x40001e98, 0x40001e9c, \
    0x40001ea0, 0x40001ea4, 0x40001ea8, 0x40001eac, \
    0x40001eb0, 0x40001eb4, 0x40001eb8, 0x40001ebc, \
    0x40001ec0, 0x40001ec4, 0x40001ec8, 0x40001ecc, \
    0x40001ed0, 0x40001ed4, 0x40001ed8, 0x40001edc, \
    0x40001ee0, 0x40001ee4, 0x40001ee8, 0x40001eec, \
    0x40001ef0, 0x40001ef4, 0x40001ef8, 0x40001efc, \
    0x40001f00, 0x40001f04, 0x40001f08, 0x40001f0c, \
    0x40001f10, 0x40001f14, 0x40001f18, 0x40001f1c, \
    0x40001f20, 0x40001f24, 0x40001f28, 0x40001f2c, \
    0x40001f30, 0x40001f34, 0x40001f38, 0x40001f3c, \
    0x40001f40, 0x40001f44, 0x40001f48, 0x40001f4c, \
    0x40001f50, 0x40001f54, 0x40001f58, 0x40001f5c, \
    0x40001f60, 0x40001f64, 0x40001f68, 0x40001f6c, \
    0x40001f70, 0x40001f74, 0x40001f78, 0x40001f7c, \
    0x40001f80, 0x40001f84, 0x40001f88, 0x40001f8c, \
    0x40001f90, 0x40001f94, 0x40001f98, 0x40001f9c, \
    0x40001fa0, 0x40001fa4, 0x40001fa8, 0x40001fac, \
    0x40001fb0, 0x40001fb4, 0x40001fb8, 0x40001fbc, \
    0x40001fc0, 0x40001fc4, 0x40001fc8, 0x40001fcc, \
    0x40001fd0, 0x40001fd4, 0x40001fd8, 0x40001fdc, \
    0x40001fe0, 0x40001fe4, 0x40001fe8, 0x40001fec, \
    0x40001ff0, 0x40001ff4, 0x40001ff8, 0x40001ffc, \
    0x40002000, 0x40002004, 0x40002008, 0x4000200c, \
    0x40002010, 0x40002014, 0x40002018, 0x4000201c, \
    0x40002020, 0x40002024, 0x40002028, 0x4000202c, \
    0x40002030, 0x40002034, 0x40002038, 0x4000203c, \
    0x40002040, 0x40002044, 0x40002048, 0x4000204c, \
    0x40002050, 0x40002054, 0x40002058, 0x4000205c, \
    0x40002060, 0x40002064, 0x40002068, 0x4000206c, \
    0x40002070, 0x40002074, 0x40002078, 0x4000207c, \
    0x40002080, 0x40002084, 0x40002088, 0x4000208c, \
    0x40002090, 0x40002094, 0x40002098, 0x4000209c, \
    0x400020a0, 0x400020a4, 0x400020a8, 0x400020ac, \
    0x400020b0, 0x400020b4, 0x400020b8, 0x400020bc, \
    0x400020c0, 0x400020c4, 0x400020c8, 0x400020cc, \
    0x400020d0, 0x400020d4, 0x400020d8, 0x400020dc, \
    0x400020e0, 0x400020e4, 0x400020e8, 0x400020ec, \
    0x400020f0, 0x400020f4, 0x400020f8, 0x400020fc, \
    0x40002100, 0x40002104, 0x40002108, 0x4000210c, \
    0x40002110, 0x40002114, 0x40002118, 0x4000211c, \
    0x40002120, 0x40002124, 0x40002128, 0x4000212c, \
    0x40002130, 0x40002134, 0x40002138, 0x4000213c, \
    0x40002140, 0x40002144, 0x40002148, 0x4000214c, \
    0x40002150, 0x40002154, 0x40002158, 0x4000215c, \
    0x40002160, 0x40002164, 0x40002168, 0x4000216c, \
    0x40002170, 0x40002174, 0x40002178, 0x4000217c, \
    0x40002180, 0x40002184, 0x40002188, 0x4000218c, \
    0x40002190, 0x40002194, 0x40002198, 0x4000219c, \
    0x400021a0, 0x400021a4, 0x400021a8, 0x400021ac, \
    0x400021b0, 0x400021b4, 0x400021b8, 0x400021bc, \
    0x400021c0, 0x400021c4, 0x400021c8, 0x400021cc, \
    0x400021d0, 0x400021d4, 0x400021d8, 0x400021dc, \
    0x400021e0, 0x400021e4, 0x400021e8, 0x400021ec, \
    0x400021f0, 0x400021f4, 0x400021f8, 0x400021fc, \
    0x40002200, 0x40002204, 0x40002208, 0x4000220c, \
    0x40002210, 0x40002214, 0x40002218, 0x4000221c, \
    0x40002220, 0x40002224, 0x40002228, 0x4000222c, \
    0x40002230, 0x40002234, 0x40002238, 0x4000223c, \
    0x40002240, 0x40002244, 0x40002248, 0x4000224c, \
    0x40002250, 0x40002254, 0x40002258, 0x4000225c, \
    0x40002260, 0x40002264, 0x40002268, 0x4000226c, \
    0x40002270, 0x40002274, 0x40002278, 0x4000227c, \
    0x40002280, 0x40002284, 0x40002288, 0x4000228c, \
    0x40002290, 0x40002294, 0x40002298, 0x4000229c, \
    0x400022a0, 0x400022a4, 0x400022a8, 0x400022ac, \
    0x400022b0, 0x400022b4, 0x400022b8, 0x400022bc, \
    0x400022c0, 0x400022c4, 0x400022c8, 0x400022cc, \
    0x400022d0, 0x400022d4, 0x400022d8, 0x400022dc, \
    0x400022e0, 0x400022e4, 0x400022e8, 0x400022ec, \
    0x400022f0, 0x400022f4, 0x400022f8, 0x400022fc, \
    0x40002300, 0x40002304, 0x40002308, 0x4000230c, \
    0x40002310, 0x40002314, 0x40002318, 0x4000231c, \
    0x40002320, 0x40002324, 0x40002328, 0x4000232c, \
    0x40002330, 0x40002334, 0x40002338, 0x4000233c, \
    0x40002340, 0x40002344, 0x40002348, 0x4000234c, \
    0x40002350, 0x40002354, 0x40002358, 0x4000235c, \
    0x40002360, 0x40002364, 0x40002368, 0x4000236c, \
    0x40002370, 0x40002374, 0x40002378, 0x4000237c, \
    0x40002380, 0x40002384, 0x40002388, 0x4000238c, \
    0x40002390, 0x40002394, 0x40002398, 0x4000239c, \
    0x400023a0, 0x400023a4, 0x400023a8, 0x400023ac, \
    0x400023b0, 0x400023b4, 0x400023b8, 0x400023bc, \
    0x400023c0, 0x400023c4, 0x400023c8, 0x400023cc, \
    0x400023d0, 0x400023d4, 0x400023d8, 0x400023dc, \
    0x400023e0, 0x400023e4, 0x400023e8, 0x400023ec, \
    0x400023f0, 0x400023f4, 0x400023f8, 0x400023fc, \
    0x40002400, 0x40002404, 0x40002408, 0x4000240c, \
    0x40002410, 0x40002414, 0x40002418, 0x4000241c, \
    0x40002420, 0x40002424, 0x40002428, 0x4000242c, \
    0x40002430, 0x40002434, 0x40002438, 0x4000243c, \
    0x40002440, 0x40002444, 0x40002448, 0x4000244c, \
    0x40002450, 0x40002454, 0x40002458, 0x4000245c, \
    0x40002460, 0x40002464, 0x40002468, 0x4000246c, \
    0x40002470, 0x40002474, 0x40002478, 0x4000247c, \
    0x40002480, 0x40002484, 0x40002488, 0x4000248c, \
    0x40002490, 0x40002494, 0x40002498, 0x4000249c, \
    0x400024a0, 0x400024a4, 0x400024a8, 0x400024ac, \
    0x400024b0, 0x400024b4, 0x400024b8, 0x400024bc, \
    0x400024c0, 0x400024c4, 0x400024c8, 0x400024cc, \
    0x400024d0, 0x400024d4, 0x400024d8, 0x400024dc, \
    0x400024e0, 0x400024e4, 0x400024e8, 0x400024ec, \
    0x400024f0, 0x400024f4, 0x400024f8, 0x400024fc, \
    0x40002500, 0x40002504, 0x40002508, 0x4000250c, \
    0x40002510, 0x40002514, 0x40002518, 0x4000251c, \
    0x40002520, 0x40002524, 0x40002528, 0x4000252c, \
    0x40002530, 0x40002534, 0x40002538, 0x4000253c, \
    0x40002540, 0x40002544, 0x40002548, 0x4000254c, \
    0x40002550, 0x40002554, 0x40002558, 0x4000255c, \
    0x40002560, 0x40002564, 0x40002568, 0x4000256c, \
    0x40002570, 0x40002574, 0x40002578, 0x4000257c, \
    0x40002580, 0x40002584, 0x40002588, 0x4000258c, \
    0x40002590, 0x40002594, 0x40002598, 0x4000259c, \
    0x400025a0, 0x400025a4, 0x400025a8, 0x400025ac, \
    0x400025b0, 0x400025b4, 0x400025b8, 0x400025bc, \
    0x400025c0, 0x400025c4, 0x400025c8, 0x400025cc, \
    0x400025d0, 0x400025d4, 0x400025d8, 0x400025dc, \
    0x400025e0, 0x400025e4, 0x400025e8, 0x400025ec, \
    0x400025f0, 0x400025f4, 0x400025f8, 0x400025fc, \
    0x40002600, 0x40002604, 0x40002608, 0x4000260c, \
    0x40002610, 0x40002614, 0x40002618, 0x4000261c, \
    0x40002620, 0x40002624, 0x40002628, 0x4000262c, \
    0x40002630, 0x40002634, 0x40002638, 0x4000263c, \
    0x40002640, 0x40002644, 0x40002648, 0x4000264c, \
    0x40002650, 0x40002654, 0x40002658, 0x4000265c, \
    0x40002660, 0x40002664, 0x40002668, 0x4000266c, \
    0x40002670, 0x40002674, 0x40002678, 0x4000267c, \
    0x40002680, 0x40002684, 0x40002688, 0x4000268c, \
    0x40002690, 0x40002694, 0x40002698, 0x4000269c, \
    0x400026a0, 0x400026a4, 0x400026a8, 0x400026ac, \
    0x400026b0, 0x400026b4, 0x400026b8, 0x400026bc, \
    0x400026c0, 0x400026c4, 0x400026c8, 0x400026cc, \
    0x400026d0, 0x400026d4, 0x400026d8, 0x400026dc, \
    0x400026e0, 0x400026e4, 0x400026e8, 0x400026ec, \
    0x400026f0, 0x400026f4, 0x400026f8, 0x400026fc, \
    0x40002700, 0x40002704, 0x40002708, 0x4000270c, \
    0x40002710, 0x40002714, 0x40002718, 0x4000271c, \
    0x40002720, 0x40002724, 0x40002728, 0x4000272c, \
    0x40002730, 0x40002734, 0x40002738, 0x4000273c, \
    0x40002740, 0x40002744, 0x40002748, 0x4000274c, \
    0x40002750, 0x40002754, 0x40002758, 0x4000275c, \
    0x40002760, 0x40002764, 0x40002768, 0x4000276c, \
    0x40002770, 0x40002774, 0x40002778, 0x4000277c, \
    0x40002780, 0x40002784, 0x40002788, 0x4000278c, \
    0x40002790, 0x40002794, 0x40002798, 0x4000279c, \
    0x400027a0, 0x400027a4, 0x400027a8, 0x400027ac, \
    0x400027b0, 0x400027b4, 0x400027b8, 0x400027bc, \
    0x400027c0, 0x400027c4, 0x400027c8, 0x400027cc, \
    0x400027d0, 0x400027d4, 0x400027d8, 0x400027dc, \
    0x400027e0, 0x400027e4, 0x400027e8, 0x400027ec, \
    0x400027f0, 0x400027f4, 0x400027f8, 0x400027fc, \
    0x40002800, 0x40002804, 0x40002808, 0x4000280c, \
    0x40002810, 0x40002814, 0x40002818, 0x4000281c, \
    0x40002820, 0x40002824, 0x40002828, 0x4000282c, \
    0x40002830, 0x40002834, 0x40002838, 0x4000283c, \
    0x40002840, 0x40002844, 0x40002848, 0x4000284c, \
    0x40002850, 0x40002854, 0x40002858, 0x4000285c, \
    0x40002860, 0x40002864, 0x40002868, 0x4000286c, \
    0x40002870, 0x40002874, 0x40002878, 0x4000287c, \
    0x40002880, 0x40002884, 0x40002888, 0x4000288c, \
    0x40002890, 0x40002894, 0x40002898, 0x4000289c, \
    0x400028a0, 0x400028a4, 0x400028a8, 0x400028ac, \
    0x400028b0, 0x400028b4, 0x400028b8, 0x400028bc, \
    0x400028c0, 0x400028c4, 0x400028c8, 0x400028cc, \
    0x400028d0, 0x400028d4, 0x400028d8, 0x400028dc, \
    0x400028e0, 0x400028e4, 0x400028e8, 0x400028ec, \
    0x400028f0, 0x400028f4, 0x400028f8, 0x400028fc, \
    0x40002900, 0x40002904, 0x40002908, 0x4000290c, \
    0x40002910, 0x40002914, 0x40002918, 0x4000291c, \
    0x40002920, 0x40002924, 0x40002928, 0x4000292c, \
    0x40002930, 0x40002934, 0x40002938, 0x4000293c, \
    0x40002940, 0x40002944, 0x40002948, 0x4000294c, \
    0x40002950, 0x40002954, 0x40002958, 0x4000295c, \
    0x40002960, 0x40002964, 0x40002968, 0x4000296c, \
    0x40002970, 0x40002974, 0x40002978, 0x4000297c, \
    0x40002980, 0x40002984, 0x40002988, 0x4000298c, \
    0x40002990, 0x40002994, 0x40002998, 0x4000299c, \
    0x400029a0, 0x400029a4, 0x400029a8, 0x400029ac, \
    0x400029b0, 0x400029b4, 0x400029b8, 0x400029bc, \
    0x400029c0, 0x400029c4, 0x400029c8, 0x400029cc, \
    0x400029d0, 0x400029d4, 0x400029d8, 0x400029dc, \
    0x400029e0, 0x400029e4, 0x400029e8, 0x400029ec, \
    0x400029f0, 0x400029f4, 0x400029f8, 0x400029fc, \
    0x40002a00, 0x40002a04, 0x40002a08, 0x40002a0c, \
    0x40002a10, 0x40002a14, 0x40002a18, 0x40002a1c, \
    0x40002a20, 0x40002a24, 0x40002a28, 0x40002a2c, \
    0x40002a30, 0x40002a34, 0x40002a38, 0x40002a3c, \
    0x40002a40, 0x40002a44, 0x40002a48, 0x40002a4c, \
    0x40002a50, 0x40002a54, 0x40002a58, 0x40002a5c, \
    0x40002a60, 0x40002a64, 0x40002a68, 0x40002a6c, \
    0x40002a70, 0x40002a74, 0xc0000008, 0x00000005, \
    0x00000002, 0x4000000c, 0x40000020, 0x40000010, \
    0x40000024, 0x40000014, 0x40000028, 0x40000018, \
    0x4000002c, 0x4000001c, 0x40000030, 0xc0000034, \
    0x00000032, 0x00000001, 0x40000038, 0x4000003c, \
    0x40000040, 0x40000044, 0x40000048, 0x4000004c, \
    0x40000050, 0x40000054, 0x40000058, 0x4000005c, \
    0x40000060, 0x40000064, 0x40000068, 0x4000006c, \
    0x40000070, 0x40000074, 0x40000078, 0x4000007c, \
    0x40000080, 0x40000084, 0x40000088, 0x4000008c, \
    0x40000090, 0x40000094, 0x40000098, 0x4000009c, \
    0x400000a0, 0x400000a4, 0x400000a8, 0x400000ac, \
    0x400000b0, 0x400000b4, 0x400000b8, 0x400000bc, \
    0x400000c0, 0x400000c4, 0x400000c8, 0x400000cc, \
    0x400000d0, 0x400000d4, 0x400000d8, 0x400000dc, \
    0x400000e0, 0x400000e4, 0x400000e8, 0x400000ec, \
    0x400000f0, 0x400000f4, 0x400000f8, 0x400000fc, \
    0xc0000100, 0x00000005, 0x00000002, 0x40000104, \
    0x40000118, 0x40000108, 0x4000011c, 0x4000010c, \
    0x40000120, 0x40000110, 0x40000124, 0x40000114, \
    0x40000128, 0xc000012c, 0x00000032, 0x00000001, \
    0x40000130, 0x40000134, 0x40000138, 0x4000013c, \
    0x40000140, 0x40000144, 0x40000148, 0x4000014c, \
    0x40000150, 0x40000154, 0x40000158, 0x4000015c, \
    0x40000160, 0x40000164, 0x40000168, 0x4000016c, \
    0x40000170, 0x40000174, 0x40000178, 0x4000017c, \
    0x40000180, 0x40000184, 0x40000188, 0x4000018c, \
    0x40000190, 0x40000194, 0x40000198, 0x4000019c, \
    0x400001a0, 0x400001a4, 0x400001a8, 0x400001ac, \
    0x400001b0, 0x400001b4, 0x400001b8, 0x400001bc, \
    0x400001c0, 0x400001c4, 0x400001c8, 0x400001cc, \
    0x400001d0, 0x400001d4, 0x400001d8, 0x400001dc, \
    0x400001e0, 0x400001e4, 0x400001e8, 0x400001ec, \
    0x400001f0, 0x400001f4, 0xc00001f8, 0x00000005, \
    0x00000002, 0x400001fc, 0x40000210, 0x40000200, \
    0x40000214, 0x40000204, 0x40000218, 0x40000208, \
    0x4000021c, 0x4000020c, 0x40000220, 0xc0000224, \
    0x00000032, 0x00000001, 0x40000228, 0x4000022c, \
    0x40000230, 0x40000234, 0x40000238, 0x4000023c, \
    0x40000240, 0x40000244, 0x40000248, 0x4000024c, \
    0x40000250, 0x40000254, 0x40000258, 0x4000025c, \
    0x40000260, 0x40000264, 0x40000268, 0x4000026c, \
    0x40000270, 0x40000274, 0x40000278, 0x4000027c, \
    0x40000280, 0x40000284, 0x40000288, 0x4000028c, \
    0x40000290, 0x40000294, 0x40000298, 0x4000029c, \
    0x400002a0, 0x400002a4, 0x400002a8, 0x400002ac, \
    0x400002b0, 0x400002b4, 0x400002b8, 0x400002bc, \
    0x400002c0, 0x400002c4, 0x400002c8, 0x400002cc, \
    0x400002d0, 0x400002d4, 0x400002d8, 0x400002dc, \
    0x400002e0, 0x400002e4, 0x400002e8, 0x400002ec, \
    0xc00002f0, 0x00000005, 0x00000002, 0x400002f4, \
    0x40000308, 0x400002f8, 0x4000030c, 0x400002fc, \
    0x40000310, 0x40000300, 0x40000314, 0x40000304, \
    0x40000318, 0xc000031c, 0x00000032, 0x00000001, \
    0x40000320, 0x40000324, 0x40000328, 0x4000032c, \
    0x40000330, 0x40000334, 0x40000338, 0x4000033c, \
    0x40000340, 0x40000344, 0x40000348, 0x4000034c, \
    0x40000350, 0x40000354, 0x40000358, 0x4000035c, \
    0x40000360, 0x40000364, 0x40000368, 0x4000036c, \
    0x40000370, 0x40000374, 0x40000378, 0x4000037c, \
    0x40000380, 0x40000384, 0x40000388, 0x4000038c, \
    0x40000390, 0x40000394, 0x40000398, 0x4000039c, \
    0x400003a0, 0x400003a4, 0x400003a8, 0x400003ac, \
    0x400003b0, 0x400003b4, 0x400003b8, 0x400003bc, \
    0x400003c0, 0x400003c4, 0x400003c8, 0x400003cc, \
    0x400003d0, 0x400003d4, 0x400003d8, 0x400003dc, \
    0x400003e0, 0x400003e4, 0xc0002a78, 0x00000041, \
    0x00000002, 0x40002a7c, 0x40002b80, 0x40002a80, \
    0x40002b84, 0x40002a84, 0x40002b88, 0x40002a88, \
    0x40002b8c, 0x40002a8c, 0x40002b90, 0x40002a90, \
    0x40002b94, 0x40002a94, 0x40002b98, 0x40002a98, \
    0x40002b9c, 0x40002a9c, 0x40002ba0, 0x40002aa0, \
    0x40002ba4, 0x40002aa4, 0x40002ba8, 0x40002aa8, \
    0x40002bac, 0x40002aac, 0x40002bb0, 0x40002ab0, \
    0x40002bb4, 0x40002ab4, 0x40002bb8, 0x40002ab8, \
    0x40002bbc, 0x40002abc, 0x40002bc0, 0x40002ac0, \
    0x40002bc4, 0x40002ac4, 0x40002bc8, 0x40002ac8, \
    0x40002bcc, 0x40002acc, 0x40002bd0, 0x40002ad0, \
    0x40002bd4, 0x40002ad4, 0x40002bd8, 0x40002ad8, \
    0x40002bdc, 0x40002adc, 0x40002be0, 0x40002ae0, \
    0x40002be4, 0x40002ae4, 0x40002be8, 0x40002ae8, \
    0x40002bec, 0x40002aec, 0x40002bf0, 0x40002af0, \
    0x40002bf4, 0x40002af4, 0x40002bf8, 0x40002af8, \
    0x40002bfc, 0x40002afc, 0x40002c00, 0x40002b00, \
    0x40002c04, 0x40002b04, 0x40002c08, 0x40002b08, \
    0x40002c0c, 0x40002b0c, 0x40002c10, 0x40002b10, \
    0x40002c14, 0x40002b14, 0x40002c18, 0x40002b18, \
    0x40002c1c, 0x40002b1c, 0x40002c20, 0x40002b20, \
    0x40002c24, 0x40002b24, 0x40002c28, 0x40002b28, \
    0x40002c2c, 0x40002b2c, 0x40002c30, 0x40002b30, \
    0x40002c34, 0x40002b34, 0x40002c38, 0x40002b38, \
    0x40002c3c, 0x40002b3c, 0x40002c40, 0x40002b40, \
    0x40002c44, 0x40002b44, 0x40002c48, 0x40002b48, \
    0x40002c4c, 0x40002b4c, 0x40002c50, 0x40002b50, \
    0x40002c54, 0x40002b54, 0x40002c58, 0x40002b58, \
    0x40002c5c, 0x40002b5c, 0x40002c60, 0x40002b60, \
    0x40002c64, 0x40002b64, 0x40002c68, 0x40002b68, \
    0x40002c6c, 0x40002b6c, 0x40002c70, 0x40002b70, \
    0x40002c74, 0x40002b74, 0x40002c78, 0x40002b78, \
    0x40002c7c, 0x40002b7c, 0x40002c80, 0xc0002c84, \
    0x0000028a, 0x00000001, 0x40002c88, 0x40002c8c, \
    0x40002c90, 0x40002c94, 0x40002c98, 0x40002c9c, \
    0x40002ca0, 0x40002ca4, 0x40002ca8, 0x40002cac, \
    0x40002cb0, 0x40002cb4, 0x40002cb8, 0x40002cbc, \
    0x40002cc0, 0x40002cc4, 0x40002cc8, 0x40002ccc, \
    0x40002cd0, 0x40002cd4, 0x40002cd8, 0x40002cdc, \
    0x40002ce0, 0x40002ce4, 0x40002ce8, 0x40002cec, \
    0x40002cf0, 0x40002cf4, 0x40002cf8, 0x40002cfc, \
    0x40002d00, 0x40002d04, 0x40002d08, 0x40002d0c, \
    0x40002d10, 0x40002d14, 0x40002d18, 0x40002d1c, \
    0x40002d20, 0x40002d24, 0x40002d28, 0x40002d2c, \
    0x40002d30, 0x40002d34, 0x40002d38, 0x40002d3c, \
    0x40002d40, 0x40002d44, 0x40002d48, 0x40002d4c, \
    0x40002d50, 0x40002d54, 0x40002d58, 0x40002d5c, \
    0x40002d60, 0x40002d64, 0x40002d68, 0x40002d6c, \
    0x40002d70, 0x40002d74, 0x40002d78, 0x40002d7c, \
    0x40002d80, 0x40002d84, 0x40002d88, 0x40002d8c, \
    0x40002d90, 0x40002d94, 0x40002d98, 0x40002d9c, \
    0x40002da0, 0x40002da4, 0x40002da8, 0x40002dac, \
    0x40002db0, 0x40002db4, 0x40002db8, 0x40002dbc, \
    0x40002dc0, 0x40002dc4, 0x40002dc8, 0x40002dcc, \
    0x40002dd0, 0x40002dd4, 0x40002dd8, 0x40002ddc, \
    0x40002de0, 0x40002de4, 0x40002de8, 0x40002dec, \
    0x40002df0, 0x40002df4, 0x40002df8, 0x40002dfc, \
    0x40002e00, 0x40002e04, 0x40002e08, 0x40002e0c, \
    0x40002e10, 0x40002e14, 0x40002e18, 0x40002e1c, \
    0x40002e20, 0x40002e24, 0x40002e28, 0x40002e2c, \
    0x40002e30, 0x40002e34, 0x40002e38, 0x40002e3c, \
    0x40002e40, 0x40002e44, 0x40002e48, 0x40002e4c, \
    0x40002e50, 0x40002e54, 0x40002e58, 0x40002e5c, \
    0x40002e60, 0x40002e64, 0x40002e68, 0x40002e6c, \
    0x40002e70, 0x40002e74, 0x40002e78, 0x40002e7c, \
    0x40002e80, 0x40002e84, 0x40002e88, 0x40002e8c, \
    0x40002e90, 0x40002e94, 0x40002e98, 0x40002e9c, \
    0x40002ea0, 0x40002ea4, 0x40002ea8, 0x40002eac, \
    0x40002eb0, 0x40002eb4, 0x40002eb8, 0x40002ebc, \
    0x40002ec0, 0x40002ec4, 0x40002ec8, 0x40002ecc, \
    0x40002ed0, 0x40002ed4, 0x40002ed8, 0x40002edc, \
    0x40002ee0, 0x40002ee4, 0x40002ee8, 0x40002eec, \
    0x40002ef0, 0x40002ef4, 0x40002ef8, 0x40002efc, \
    0x40002f00, 0x40002f04, 0x40002f08, 0x40002f0c, \
    0x40002f10, 0x40002f14, 0x40002f18, 0x40002f1c, \
    0x40002f20, 0x40002f24, 0x40002f28, 0x40002f2c, \
    0x40002f30, 0x40002f34, 0x40002f38, 0x40002f3c, \
    0x40002f40, 0x40002f44, 0x40002f48, 0x40002f4c, \
    0x40002f50, 0x40002f54, 0x40002f58, 0x40002f5c, \
    0x40002f60, 0x40002f64, 0x40002f68, 0x40002f6c, \
    0x40002f70, 0x40002f74, 0x40002f78, 0x40002f7c, \
    0x40002f80, 0x40002f84, 0x40002f88, 0x40002f8c, \
    0x40002f90, 0x40002f94, 0x40002f98, 0x40002f9c, \
    0x40002fa0, 0x40002fa4, 0x40002fa8, 0x40002fac, \
    0x40002fb0, 0x40002fb4, 0x40002fb8, 0x40002fbc, \
    0x40002fc0, 0x40002fc4, 0x40002fc8, 0x40002fcc, \
    0x40002fd0, 0x40002fd4, 0x40002fd8, 0x40002fdc, \
    0x40002fe0, 0x40002fe4, 0x40002fe8, 0x40002fec, \
    0x40002ff0, 0x40002ff4, 0x40002ff8, 0x40002ffc, \
    0x40003000, 0x40003004, 0x40003008, 0x4000300c, \
    0x40003010, 0x40003014, 0x40003018, 0x4000301c, \
    0x40003020, 0x40003024, 0x40003028, 0x4000302c, \
    0x40003030, 0x40003034, 0x40003038, 0x4000303c, \
    0x40003040, 0x40003044, 0x40003048, 0x4000304c, \
    0x40003050, 0x40003054, 0x40003058, 0x4000305c, \
    0x40003060, 0x40003064, 0x40003068, 0x4000306c, \
    0x40003070, 0x40003074, 0x40003078, 0x4000307c, \
    0x40003080, 0x40003084, 0x40003088, 0x4000308c, \
    0x40003090, 0x40003094, 0x40003098, 0x4000309c, \
    0x400030a0, 0x400030a4, 0x400030a8, 0x400030ac, \
    0x400030b0, 0x400030b4, 0x400030b8, 0x400030bc, \
    0x400030c0, 0x400030c4, 0x400030c8, 0x400030cc, \
    0x400030d0, 0x400030d4, 0x400030d8, 0x400030dc, \
    0x400030e0, 0x400030e4, 0x400030e8, 0x400030ec, \
    0x400030f0, 0x400030f4, 0x400030f8, 0x400030fc, \
    0x40003100, 0x40003104, 0x40003108, 0x4000310c, \
    0x40003110, 0x40003114, 0x40003118, 0x4000311c, \
    0x40003120, 0x40003124, 0x40003128, 0x4000312c, \
    0x40003130, 0x40003134, 0x40003138, 0x4000313c, \
    0x40003140, 0x40003144, 0x40003148, 0x4000314c, \
    0x40003150, 0x40003154, 0x40003158, 0x4000315c, \
    0x40003160, 0x40003164, 0x40003168, 0x4000316c, \
    0x40003170, 0x40003174, 0x40003178, 0x4000317c, \
    0x40003180, 0x40003184, 0x40003188, 0x4000318c, \
    0x40003190, 0x40003194, 0x40003198, 0x4000319c, \
    0x400031a0, 0x400031a4, 0x400031a8, 0x400031ac, \
    0x400031b0, 0x400031b4, 0x400031b8, 0x400031bc, \
    0x400031c0, 0x400031c4, 0x400031c8, 0x400031cc, \
    0x400031d0, 0x400031d4, 0x400031d8, 0x400031dc, \
    0x400031e0, 0x400031e4, 0x400031e8, 0x400031ec, \
    0x400031f0, 0x400031f4, 0x400031f8, 0x400031fc, \
    0x40003200, 0x40003204, 0x40003208, 0x4000320c, \
    0x40003210, 0x40003214, 0x40003218, 0x4000321c, \
    0x40003220, 0x40003224, 0x40003228, 0x4000322c, \
    0x40003230, 0x40003234, 0x40003238, 0x4000323c, \
    0x40003240, 0x40003244, 0x40003248, 0x4000324c, \
    0x40003250, 0x40003254, 0x40003258, 0x4000325c, \
    0x40003260, 0x40003264, 0x40003268, 0x4000326c, \
    0x40003270, 0x40003274, 0x40003278, 0x4000327c, \
    0x40003280, 0x40003284, 0x40003288, 0x4000328c, \
    0x40003290, 0x40003294, 0x40003298, 0x4000329c, \
    0x400032a0, 0x400032a4, 0x400032a8, 0x400032ac, \
    0x400032b0, 0x400032b4, 0x400032b8, 0x400032bc, \
    0x400032c0, 0x400032c4, 0x400032c8, 0x400032cc, \
    0x400032d0, 0x400032d4, 0x400032d8, 0x400032dc, \
    0x400032e0, 0x400032e4, 0x400032e8, 0x400032ec, \
    0x400032f0, 0x400032f4, 0x400032f8, 0x400032fc, \
    0x40003300, 0x40003304, 0x40003308, 0x4000330c, \
    0x40003310, 0x40003314, 0x40003318, 0x4000331c, \
    0x40003320, 0x40003324, 0x40003328, 0x4000332c, \
    0x40003330, 0x40003334, 0x40003338, 0x4000333c, \
    0x40003340, 0x40003344, 0x40003348, 0x4000334c, \
    0x40003350, 0x40003354, 0x40003358, 0x4000335c, \
    0x40003360, 0x40003364, 0x40003368, 0x4000336c, \
    0x40003370, 0x40003374, 0x40003378, 0x4000337c, \
    0x40003380, 0x40003384, 0x40003388, 0x4000338c, \
    0x40003390, 0x40003394, 0x40003398, 0x4000339c, \
    0x400033a0, 0x400033a4, 0x400033a8, 0x400033ac, \
    0x400033b0, 0x400033b4, 0x400033b8, 0x400033bc, \
    0x400033c0, 0x400033c4, 0x400033c8, 0x400033cc, \
    0x400033d0, 0x400033d4, 0x400033d8, 0x400033dc, \
    0x400033e0, 0x400033e4, 0x400033e8, 0x400033ec, \
    0x400033f0, 0x400033f4, 0x400033f8, 0x400033fc, \
    0x40003400, 0x40003404, 0x40003408, 0x4000340c, \
    0x40003410, 0x40003414, 0x40003418, 0x4000341c, \
    0x40003420, 0x40003424, 0x40003428, 0x4000342c, \
    0x40003430, 0x40003434, 0x40003438, 0x4000343c, \
    0x40003440, 0x40003444, 0x40003448, 0x4000344c, \
    0x40003450, 0x40003454, 0x40003458, 0x4000345c, \
    0x40003460, 0x40003464, 0x40003468, 0x4000346c, \
    0x40003470, 0x40003474, 0x40003478, 0x4000347c, \
    0x40003480, 0x40003484, 0x40003488, 0x4000348c, \
    0x40003490, 0x40003494, 0x40003498, 0x4000349c, \
    0x400034a0, 0x400034a4, 0x400034a8, 0x400034ac, \
    0x400034b0, 0x400034b4, 0x400034b8, 0x400034bc, \
    0x400034c0, 0x400034c4, 0x400034c8, 0x400034cc, \
    0x400034d0, 0x400034d4, 0x400034d8, 0x400034dc, \
    0x400034e0, 0x400034e4, 0x400034e8, 0x400034ec, \
    0x400034f0, 0x400034f4, 0x400034f8, 0x400034fc, \
    0x40003500, 0x40003504, 0x40003508, 0x4000350c, \
    0x40003510, 0x40003514, 0x40003518, 0x4000351c, \
    0x40003520, 0x40003524, 0x40003528, 0x4000352c, \
    0x40003530, 0x40003534, 0x40003538, 0x4000353c, \
    0x40003540, 0x40003544, 0x40003548, 0x4000354c, \
    0x40003550, 0x40003554, 0x40003558, 0x4000355c, \
    0x40003560, 0x40003564, 0x40003568, 0x4000356c, \
    0x40003570, 0x40003574, 0x40003578, 0x4000357c, \
    0x40003580, 0x40003584, 0x40003588, 0x4000358c, \
    0x40003590, 0x40003594, 0x40003598, 0x4000359c, \
    0x400035a0, 0x400035a4, 0x400035a8, 0x400035ac, \
    0x400035b0, 0x400035b4, 0x400035b8, 0x400035bc, \
    0x400035c0, 0x400035c4, 0x400035c8, 0x400035cc, \
    0x400035d0, 0x400035d4, 0x400035d8, 0x400035dc, \
    0x400035e0, 0x400035e4, 0x400035e8, 0x400035ec, \
    0x400035f0, 0x400035f4, 0x400035f8, 0x400035fc, \
    0x40003600, 0x40003604, 0x40003608, 0x4000360c, \
    0x40003610, 0x40003614, 0x40003618, 0x4000361c, \
    0x40003620, 0x40003624, 0x40003628, 0x4000362c, \
    0x40003630, 0x40003634, 0x40003638, 0x4000363c, \
    0x40003640, 0x40003644, 0x40003648, 0x4000364c, \
    0x40003650, 0x40003654, 0x40003658, 0x4000365c, \
    0x40003660, 0x40003664, 0x40003668, 0x4000366c, \
    0x40003670, 0x40003674, 0x40003678, 0x4000367c, \
    0x40003680, 0x40003684, 0x40003688, 0x4000368c, \
    0x40003690, 0x40003694, 0x40003698, 0x4000369c, \
    0x400036a0, 0x400036a4, 0x400036a8, 0x400036ac, \
    0xc00036b0, 0x00000041, 0x00000002, 0x400036b4, \
    0x400037b8, 0x400036b8, 0x400037bc, 0x400036bc, \
    0x400037c0, 0x400036c0, 0x400037c4, 0x400036c4, \
    0x400037c8, 0x400036c8, 0x400037cc, 0x400036cc, \
    0x400037d0, 0x400036d0, 0x400037d4, 0x400036d4, \
    0x400037d8, 0x400036d8, 0x400037dc, 0x400036dc, \
    0x400037e0, 0x400036e0, 0x400037e4, 0x400036e4, \
    0x400037e8, 0x400036e8, 0x400037ec, 0x400036ec, \
    0x400037f0, 0x400036f0, 0x400037f4, 0x400036f4, \
    0x400037f8, 0x400036f8, 0x400037fc, 0x400036fc, \
    0x40003800, 0x40003700, 0x40003804, 0x40003704, \
    0x40003808, 0x40003708, 0x4000380c, 0x4000370c, \
    0x40003810, 0x40003710, 0x40003814, 0x40003714, \
    0x40003818, 0x40003718, 0x4000381c, 0x4000371c, \
    0x40003820, 0x40003720, 0x40003824, 0x40003724, \
    0x40003828, 0x40003728, 0x4000382c, 0x4000372c, \
    0x40003830, 0x40003730, 0x40003834, 0x40003734, \
    0x40003838, 0x40003738, 0x4000383c, 0x4000373c, \
    0x40003840, 0x40003740, 0x40003844, 0x40003744, \
    0x40003848, 0x40003748, 0x4000384c, 0x4000374c, \
    0x40003850, 0x40003750, 0x40003854, 0x40003754, \
    0x40003858, 0x40003758, 0x4000385c, 0x4000375c, \
    0x40003860, 0x40003760, 0x40003864, 0x40003764, \
    0x40003868, 0x40003768, 0x4000386c, 0x4000376c, \
    0x40003870, 0x40003770, 0x40003874, 0x40003774, \
    0x40003878, 0x40003778, 0x4000387c, 0x4000377c, \
    0x40003880, 0x40003780, 0x40003884, 0x40003784, \
    0x40003888, 0x40003788, 0x4000388c, 0x4000378c, \
    0x40003890, 0x40003790, 0x40003894, 0x40003794, \
    0x40003898, 0x40003798, 0x4000389c, 0x4000379c, \
    0x400038a0, 0x400037a0, 0x400038a4, 0x400037a4, \
    0x400038a8, 0x400037a8, 0x400038ac, 0x400037ac, \
    0x400038b0, 0x400037b0, 0x400038b4, 0x400037b4, \
    0x400038b8, 0xc00038bc, 0x0000028a, 0x00000001, \
    0x400038c0, 0x400038c4, 0x400038c8, 0x400038cc, \
    0x400038d0, 0x400038d4, 0x400038d8, 0x400038dc, \
    0x400038e0, 0x400038e4, 0x400038e8, 0x400038ec, \
    0x400038f0, 0x400038f4, 0x400038f8, 0x400038fc, \
    0x40003900, 0x40003904, 0x40003908, 0x4000390c, \
    0x40003910, 0x40003914, 0x40003918, 0x4000391c, \
    0x40003920, 0x40003924, 0x40003928, 0x4000392c, \
    0x40003930, 0x40003934, 0x40003938, 0x4000393c, \
    0x40003940, 0x40003944, 0x40003948, 0x4000394c, \
    0x40003950, 0x40003954, 0x40003958, 0x4000395c, \
    0x40003960, 0x40003964, 0x40003968, 0x4000396c, \
    0x40003970, 0x40003974, 0x40003978, 0x4000397c, \
    0x40003980, 0x40003984, 0x40003988, 0x4000398c, \
    0x40003990, 0x40003994, 0x40003998, 0x4000399c, \
    0x400039a0, 0x400039a4, 0x400039a8, 0x400039ac, \
    0x400039b0, 0x400039b4, 0x400039b8, 0x400039bc, \
    0x400039c0, 0x400039c4, 0x400039c8, 0x400039cc, \
    0x400039d0, 0x400039d4, 0x400039d8, 0x400039dc, \
    0x400039e0, 0x400039e4, 0x400039e8, 0x400039ec, \
    0x400039f0, 0x400039f4, 0x400039f8, 0x400039fc, \
    0x40003a00, 0x40003a04, 0x40003a08, 0x40003a0c, \
    0x40003a10, 0x40003a14, 0x40003a18, 0x40003a1c, \
    0x40003a20, 0x40003a24, 0x40003a28, 0x40003a2c, \
    0x40003a30, 0x40003a34, 0x40003a38, 0x40003a3c, \
    0x40003a40, 0x40003a44, 0x40003a48, 0x40003a4c, \
    0x40003a50, 0x40003a54, 0x40003a58, 0x40003a5c, \
    0x40003a60, 0x40003a64, 0x40003a68, 0x40003a6c, \
    0x40003a70, 0x40003a74, 0x40003a78, 0x40003a7c, \
    0x40003a80, 0x40003a84, 0x40003a88, 0x40003a8c, \
    0x40003a90, 0x40003a94, 0x40003a98, 0x40003a9c, \
    0x40003aa0, 0x40003aa4, 0x40003aa8, 0x40003aac, \
    0x40003ab0, 0x40003ab4, 0x40003ab8, 0x40003abc, \
    0x40003ac0, 0x40003ac4, 0x40003ac8, 0x40003acc, \
    0x40003ad0, 0x40003ad4, 0x40003ad8, 0x40003adc, \
    0x40003ae0, 0x40003ae4, 0x40003ae8, 0x40003aec, \
    0x40003af0, 0x40003af4, 0x40003af8, 0x40003afc, \
    0x40003b00, 0x40003b04, 0x40003b08, 0x40003b0c, \
    0x40003b10, 0x40003b14, 0x40003b18, 0x40003b1c, \
    0x40003b20, 0x40003b24, 0x40003b28, 0x40003b2c, \
    0x40003b30, 0x40003b34, 0x40003b38, 0x40003b3c, \
    0x40003b40, 0x40003b44, 0x40003b48, 0x40003b4c, \
    0x40003b50, 0x40003b54, 0x40003b58, 0x40003b5c, \
    0x40003b60, 0x40003b64, 0x40003b68, 0x40003b6c, \
    0x40003b70, 0x40003b74, 0x40003b78, 0x40003b7c, \
    0x40003b80, 0x40003b84, 0x40003b88, 0x40003b8c, \
    0x40003b90, 0x40003b94, 0x40003b98, 0x40003b9c, \
    0x40003ba0, 0x40003ba4, 0x40003ba8, 0x40003bac, \
    0x40003bb0, 0x40003bb4, 0x40003bb8, 0x40003bbc, \
    0x40003bc0, 0x40003bc4, 0x40003bc8, 0x40003bcc, \
    0x40003bd0, 0x40003bd4, 0x40003bd8, 0x40003bdc, \
    0x40003be0, 0x40003be4, 0x40003be8, 0x40003bec, \
    0x40003bf0, 0x40003bf4, 0x40003bf8, 0x40003bfc, \
    0x40003c00, 0x40003c04, 0x40003c08, 0x40003c0c, \
    0x40003c10, 0x40003c14, 0x40003c18, 0x40003c1c, \
    0x40003c20, 0x40003c24, 0x40003c28, 0x40003c2c, \
    0x40003c30, 0x40003c34, 0x40003c38, 0x40003c3c, \
    0x40003c40, 0x40003c44, 0x40003c48, 0x40003c4c, \
    0x40003c50, 0x40003c54, 0x40003c58, 0x40003c5c, \
    0x40003c60, 0x40003c64, 0x40003c68, 0x40003c6c, \
    0x40003c70, 0x40003c74, 0x40003c78, 0x40003c7c, \
    0x40003c80, 0x40003c84, 0x40003c88, 0x40003c8c, \
    0x40003c90, 0x40003c94, 0x40003c98, 0x40003c9c, \
    0x40003ca0, 0x40003ca4, 0x40003ca8, 0x40003cac, \
    0x40003cb0, 0x40003cb4, 0x40003cb8, 0x40003cbc, \
    0x40003cc0, 0x40003cc4, 0x40003cc8, 0x40003ccc, \
    0x40003cd0, 0x40003cd4, 0x40003cd8, 0x40003cdc, \
    0x40003ce0, 0x40003ce4, 0x40003ce8, 0x40003cec, \
    0x40003cf0, 0x40003cf4, 0x40003cf8, 0x40003cfc, \
    0x40003d00, 0x40003d04, 0x40003d08, 0x40003d0c, \
    0x40003d10, 0x40003d14, 0x40003d18, 0x40003d1c, \
    0x40003d20, 0x40003d24, 0x40003d28, 0x40003d2c, \
    0x40003d30, 0x40003d34, 0x40003d38, 0x40003d3c, \
    0x40003d40, 0x40003d44, 0x40003d48, 0x40003d4c, \
    0x40003d50, 0x40003d54, 0x40003d58, 0x40003d5c, \
    0x40003d60, 0x40003d64, 0x40003d68, 0x40003d6c, \
    0x40003d70, 0x40003d74, 0x40003d78, 0x40003d7c, \
    0x40003d80, 0x40003d84, 0x40003d88, 0x40003d8c, \
    0x40003d90, 0x40003d94, 0x40003d98, 0x40003d9c, \
    0x40003da0, 0x40003da4, 0x40003da8, 0x40003dac, \
    0x40003db0, 0x40003db4, 0x40003db8, 0x40003dbc, \
    0x40003dc0, 0x40003dc4, 0x40003dc8, 0x40003dcc, \
    0x40003dd0, 0x40003dd4, 0x40003dd8, 0x40003ddc, \
    0x40003de0, 0x40003de4, 0x40003de8, 0x40003dec, \
    0x40003df0, 0x40003df4, 0x40003df8, 0x40003dfc, \
    0x40003e00, 0x40003e04, 0x40003e08, 0x40003e0c, \
    0x40003e10, 0x40003e14, 0x40003e18, 0x40003e1c, \
    0x40003e20, 0x40003e24, 0x40003e28, 0x40003e2c, \
    0x40003e30, 0x40003e34, 0x40003e38, 0x40003e3c, \
    0x40003e40, 0x40003e44, 0x40003e48, 0x40003e4c, \
    0x40003e50, 0x40003e54, 0x40003e58, 0x40003e5c, \
    0x40003e60, 0x40003e64, 0x40003e68, 0x40003e6c, \
    0x40003e70, 0x40003e74, 0x40003e78, 0x40003e7c, \
    0x40003e80, 0x40003e84, 0x40003e88, 0x40003e8c, \
    0x40003e90, 0x40003e94, 0x40003e98, 0x40003e9c, \
    0x40003ea0, 0x40003ea4, 0x40003ea8, 0x40003eac, \
    0x40003eb0, 0x40003eb4, 0x40003eb8, 0x40003ebc, \
    0x40003ec0, 0x40003ec4, 0x40003ec8, 0x40003ecc, \
    0x40003ed0, 0x40003ed4, 0x40003ed8, 0x40003edc, \
    0x40003ee0, 0x40003ee4, 0x40003ee8, 0x40003eec, \
    0x40003ef0, 0x40003ef4, 0x40003ef8, 0x40003efc, \
    0x40003f00, 0x40003f04, 0x40003f08, 0x40003f0c, \
    0x40003f10, 0x40003f14, 0x40003f18, 0x40003f1c, \
    0x40003f20, 0x40003f24, 0x40003f28, 0x40003f2c, \
    0x40003f30, 0x40003f34, 0x40003f38, 0x40003f3c, \
    0x40003f40, 0x40003f44, 0x40003f48, 0x40003f4c, \
    0x40003f50, 0x40003f54, 0x40003f58, 0x40003f5c, \
    0x40003f60, 0x40003f64, 0x40003f68, 0x40003f6c, \
    0x40003f70, 0x40003f74, 0x40003f78, 0x40003f7c, \
    0x40003f80, 0x40003f84, 0x40003f88, 0x40003f8c, \
    0x40003f90, 0x40003f94, 0x40003f98, 0x40003f9c, \
    0x40003fa0, 0x40003fa4, 0x40003fa8, 0x40003fac, \
    0x40003fb0, 0x40003fb4, 0x40003fb8, 0x40003fbc, \
    0x40003fc0, 0x40003fc4, 0x40003fc8, 0x40003fcc, \
    0x40003fd0, 0x40003fd4, 0x40003fd8, 0x40003fdc, \
    0x40003fe0, 0x40003fe4, 0x40003fe8, 0x40003fec, \
    0x40003ff0, 0x40003ff4, 0x40003ff8, 0x40003ffc, \
    0x40004000, 0x40004004, 0x40004008, 0x4000400c, \
    0x40004010, 0x40004014, 0x40004018, 0x4000401c, \
    0x40004020, 0x40004024, 0x40004028, 0x4000402c, \
    0x40004030, 0x40004034, 0x40004038, 0x4000403c, \
    0x40004040, 0x40004044, 0x40004048, 0x4000404c, \
    0x40004050, 0x40004054, 0x40004058, 0x4000405c, \
    0x40004060, 0x40004064, 0x40004068, 0x4000406c, \
    0x40004070, 0x40004074, 0x40004078, 0x4000407c, \
    0x40004080, 0x40004084, 0x40004088, 0x4000408c, \
    0x40004090, 0x40004094, 0x40004098, 0x4000409c, \
    0x400040a0, 0x400040a4, 0x400040a8, 0x400040ac, \
    0x400040b0, 0x400040b4, 0x400040b8, 0x400040bc, \
    0x400040c0, 0x400040c4, 0x400040c8, 0x400040cc, \
    0x400040d0, 0x400040d4, 0x400040d8, 0x400040dc, \
    0x400040e0, 0x400040e4, 0x400040e8, 0x400040ec, \
    0x400040f0, 0x400040f4, 0x400040f8, 0x400040fc, \
    0x40004100, 0x40004104, 0x40004108, 0x4000410c, \
    0x40004110, 0x40004114, 0x40004118, 0x4000411c, \
    0x40004120, 0x40004124, 0x40004128, 0x4000412c, \
    0x40004130, 0x40004134, 0x40004138, 0x4000413c, \
    0x40004140, 0x40004144, 0x40004148, 0x4000414c, \
    0x40004150, 0x40004154, 0x40004158, 0x4000415c, \
    0x40004160, 0x40004164, 0x40004168, 0x4000416c, \
    0x40004170, 0x40004174, 0x40004178, 0x4000417c, \
    0x40004180, 0x40004184, 0x40004188, 0x4000418c, \
    0x40004190, 0x40004194, 0x40004198, 0x4000419c, \
    0x400041a0, 0x400041a4, 0x400041a8, 0x400041ac, \
    0x400041b0, 0x400041b4, 0x400041b8, 0x400041bc, \
    0x400041c0, 0x400041c4, 0x400041c8, 0x400041cc, \
    0x400041d0, 0x400041d4, 0x400041d8, 0x400041dc, \
    0x400041e0, 0x400041e4, 0x400041e8, 0x400041ec, \
    0x400041f0, 0x400041f4, 0x400041f8, 0x400041fc, \
    0x40004200, 0x40004204, 0x40004208, 0x4000420c, \
    0x40004210, 0x40004214, 0x40004218, 0x4000421c, \
    0x40004220, 0x40004224, 0x40004228, 0x4000422c, \
    0x40004230, 0x40004234, 0x40004238, 0x4000423c, \
    0x40004240, 0x40004244, 0x40004248, 0x4000424c, \
    0x40004250, 0x40004254, 0x40004258, 0x4000425c, \
    0x40004260, 0x40004264, 0x40004268, 0x4000426c, \
    0x40004270, 0x40004274, 0x40004278, 0x4000427c, \
    0x40004280, 0x40004284, 0x40004288, 0x4000428c, \
    0x40004290, 0x40004294, 0x40004298, 0x4000429c, \
    0x400042a0, 0x400042a4, 0x400042a8, 0x400042ac, \
    0x400042b0, 0x400042b4, 0x400042b8, 0x400042bc, \
    0x400042c0, 0x400042c4, 0x400042c8, 0x400042cc, \
    0x400042d0, 0x400042d4, 0x400042d8, 0x400042dc, \
    0x400042e0, 0x400042e4, 0xc00042e8, 0x00000041, \
    0x00000002, 0x400042ec, 0x400043f0, 0x400042f0, \
    0x400043f4, 0x400042f4, 0x400043f8, 0x400042f8, \
    0x400043fc, 0x400042fc, 0x40004400, 0x40004300, \
    0x40004404, 0x40004304, 0x40004408, 0x40004308, \
    0x4000440c, 0x4000430c, 0x40004410, 0x40004310, \
    0x40004414, 0x40004314, 0x40004418, 0x40004318, \
    0x4000441c, 0x4000431c, 0x40004420, 0x40004320, \
    0x40004424, 0x40004324, 0x40004428, 0x40004328, \
    0x4000442c, 0x4000432c, 0x40004430, 0x40004330, \
    0x40004434, 0x40004334, 0x40004438, 0x40004338, \
    0x4000443c, 0x4000433c, 0x40004440, 0x40004340, \
    0x40004444, 0x40004344, 0x40004448, 0x40004348, \
    0x4000444c, 0x4000434c, 0x40004450, 0x40004350, \
    0x40004454, 0x40004354, 0x40004458, 0x40004358, \
    0x4000445c, 0x4000435c, 0x40004460, 0x40004360, \
    0x40004464, 0x40004364, 0x40004468, 0x40004368, \
    0x4000446c, 0x4000436c, 0x40004470, 0x40004370, \
    0x40004474, 0x40004374, 0x40004478, 0x40004378, \
    0x4000447c, 0x4000437c, 0x40004480, 0x40004380, \
    0x40004484, 0x40004384, 0x40004488, 0x40004388, \
    0x4000448c, 0x4000438c, 0x40004490, 0x40004390, \
    0x40004494, 0x40004394, 0x40004498, 0x40004398, \
    0x4000449c, 0x4000439c, 0x400044a0, 0x400043a0, \
    0x400044a4, 0x400043a4, 0x400044a8, 0x400043a8, \
    0x400044ac, 0x400043ac, 0x400044b0, 0x400043b0, \
    0x400044b4, 0x400043b4, 0x400044b8, 0x400043b8, \
    0x400044bc, 0x400043bc, 0x400044c0, 0x400043c0, \
    0x400044c4, 0x400043c4, 0x400044c8, 0x400043c8, \
    0x400044cc, 0x400043cc, 0x400044d0, 0x400043d0, \
    0x400044d4, 0x400043d4, 0x400044d8, 0x400043d8, \
    0x400044dc, 0x400043dc, 0x400044e0, 0x400043e0, \
    0x400044e4, 0x400043e4, 0x400044e8, 0x400043e8, \
    0x400044ec, 0x400043ec, 0x400044f0, 0xc00044f4, \
    0x0000028a, 0x00000001, 0x400044f8, 0x400044fc, \
    0x40004500, 0x40004504, 0x40004508, 0x4000450c, \
    0x40004510, 0x40004514, 0x40004518, 0x4000451c, \
    0x40004520, 0x40004524, 0x40004528, 0x4000452c, \
    0x40004530, 0x40004534, 0x40004538, 0x4000453c, \
    0x40004540, 0x40004544, 0x40004548, 0x4000454c, \
    0x40004550, 0x40004554, 0x40004558, 0x4000455c, \
    0x40004560, 0x40004564, 0x40004568, 0x4000456c, \
    0x40004570, 0x40004574, 0x40004578, 0x4000457c, \
    0x40004580, 0x40004584, 0x40004588, 0x4000458c, \
    0x40004590, 0x40004594, 0x40004598, 0x4000459c, \
    0x400045a0, 0x400045a4, 0x400045a8, 0x400045ac, \
    0x400045b0, 0x400045b4, 0x400045b8, 0x400045bc, \
    0x400045c0, 0x400045c4, 0x400045c8, 0x400045cc, \
    0x400045d0, 0x400045d4, 0x400045d8, 0x400045dc, \
    0x400045e0, 0x400045e4, 0x400045e8, 0x400045ec, \
    0x400045f0, 0x400045f4, 0x400045f8, 0x400045fc, \
    0x40004600, 0x40004604, 0x40004608, 0x4000460c, \
    0x40004610, 0x40004614, 0x40004618, 0x4000461c, \
    0x40004620, 0x40004624, 0x40004628, 0x4000462c, \
    0x40004630, 0x40004634, 0x40004638, 0x4000463c, \
    0x40004640, 0x40004644, 0x40004648, 0x4000464c, \
    0x40004650, 0x40004654, 0x40004658, 0x4000465c, \
    0x40004660, 0x40004664, 0x40004668, 0x4000466c, \
    0x40004670, 0x40004674, 0x40004678, 0x4000467c, \
    0x40004680, 0x40004684, 0x40004688, 0x4000468c, \
    0x40004690, 0x40004694, 0x40004698, 0x4000469c, \
    0x400046a0, 0x400046a4, 0x400046a8, 0x400046ac, \
    0x400046b0, 0x400046b4, 0x400046b8, 0x400046bc, \
    0x400046c0, 0x400046c4, 0x400046c8, 0x400046cc, \
    0x400046d0, 0x400046d4, 0x400046d8, 0x400046dc, \
    0x400046e0, 0x400046e4, 0x400046e8, 0x400046ec, \
    0x400046f0, 0x400046f4, 0x400046f8, 0x400046fc, \
    0x40004700, 0x40004704, 0x40004708, 0x4000470c, \
    0x40004710, 0x40004714, 0x40004718, 0x4000471c, \
    0x40004720, 0x40004724, 0x40004728, 0x4000472c, \
    0x40004730, 0x40004734, 0x40004738, 0x4000473c, \
    0x40004740, 0x40004744, 0x40004748, 0x4000474c, \
    0x40004750, 0x40004754, 0x40004758, 0x4000475c, \
    0x40004760, 0x40004764, 0x40004768, 0x4000476c, \
    0x40004770, 0x40004774, 0x40004778, 0x4000477c, \
    0x40004780, 0x40004784, 0x40004788, 0x4000478c, \
    0x40004790, 0x40004794, 0x40004798, 0x4000479c, \
    0x400047a0, 0x400047a4, 0x400047a8, 0x400047ac, \
    0x400047b0, 0x400047b4, 0x400047b8, 0x400047bc, \
    0x400047c0, 0x400047c4, 0x400047c8, 0x400047cc, \
    0x400047d0, 0x400047d4, 0x400047d8, 0x400047dc, \
    0x400047e0, 0x400047e4, 0x400047e8, 0x400047ec, \
    0x400047f0, 0x400047f4, 0x400047f8, 0x400047fc, \
    0x40004800, 0x40004804, 0x40004808, 0x4000480c, \
    0x40004810, 0x40004814, 0x40004818, 0x4000481c, \
    0x40004820, 0x40004824, 0x40004828, 0x4000482c, \
    0x40004830, 0x40004834, 0x40004838, 0x4000483c, \
    0x40004840, 0x40004844, 0x40004848, 0x4000484c, \
    0x40004850, 0x40004854, 0x40004858, 0x4000485c, \
    0x40004860, 0x40004864, 0x40004868, 0x4000486c, \
    0x40004870, 0x40004874, 0x40004878, 0x4000487c, \
    0x40004880, 0x40004884, 0x40004888, 0x4000488c, \
    0x40004890, 0x40004894, 0x40004898, 0x4000489c, \
    0x400048a0, 0x400048a4, 0x400048a8, 0x400048ac, \
    0x400048b0, 0x400048b4, 0x400048b8, 0x400048bc, \
    0x400048c0, 0x400048c4, 0x400048c8, 0x400048cc, \
    0x400048d0, 0x400048d4, 0x400048d8, 0x400048dc, \
    0x400048e0, 0x400048e4, 0x400048e8, 0x400048ec, \
    0x400048f0, 0x400048f4, 0x400048f8, 0x400048fc, \
    0x40004900, 0x40004904, 0x40004908, 0x4000490c, \
    0x40004910, 0x40004914, 0x40004918, 0x4000491c, \
    0x40004920, 0x40004924, 0x40004928, 0x4000492c, \
    0x40004930, 0x40004934, 0x40004938, 0x4000493c, \
    0x40004940, 0x40004944, 0x40004948, 0x4000494c, \
    0x40004950, 0x40004954, 0x40004958, 0x4000495c, \
    0x40004960, 0x40004964, 0x40004968, 0x4000496c, \
    0x40004970, 0x40004974, 0x40004978, 0x4000497c, \
    0x40004980, 0x40004984, 0x40004988, 0x4000498c, \
    0x40004990, 0x40004994, 0x40004998, 0x4000499c, \
    0x400049a0, 0x400049a4, 0x400049a8, 0x400049ac, \
    0x400049b0, 0x400049b4, 0x400049b8, 0x400049bc, \
    0x400049c0, 0x400049c4, 0x400049c8, 0x400049cc, \
    0x400049d0, 0x400049d4, 0x400049d8, 0x400049dc, \
    0x400049e0, 0x400049e4, 0x400049e8, 0x400049ec, \
    0x400049f0, 0x400049f4, 0x400049f8, 0x400049fc, \
    0x40004a00, 0x40004a04, 0x40004a08, 0x40004a0c, \
    0x40004a10, 0x40004a14, 0x40004a18, 0x40004a1c, \
    0x40004a20, 0x40004a24, 0x40004a28, 0x40004a2c, \
    0x40004a30, 0x40004a34, 0x40004a38, 0x40004a3c, \
    0x40004a40, 0x40004a44, 0x40004a48, 0x40004a4c, \
    0x40004a50, 0x40004a54, 0x40004a58, 0x40004a5c, \
    0x40004a60, 0x40004a64, 0x40004a68, 0x40004a6c, \
    0x40004a70, 0x40004a74, 0x40004a78, 0x40004a7c, \
    0x40004a80, 0x40004a84, 0x40004a88, 0x40004a8c, \
    0x40004a90, 0x40004a94, 0x40004a98, 0x40004a9c, \
    0x40004aa0, 0x40004aa4, 0x40004aa8, 0x40004aac, \
    0x40004ab0, 0x40004ab4, 0x40004ab8, 0x40004abc, \
    0x40004ac0, 0x40004ac4, 0x40004ac8, 0x40004acc, \
    0x40004ad0, 0x40004ad4, 0x40004ad8, 0x40004adc, \
    0x40004ae0, 0x40004ae4, 0x40004ae8, 0x40004aec, \
    0x40004af0, 0x40004af4, 0x40004af8, 0x40004afc, \
    0x40004b00, 0x40004b04, 0x40004b08, 0x40004b0c, \
    0x40004b10, 0x40004b14, 0x40004b18, 0x40004b1c, \
    0x40004b20, 0x40004b24, 0x40004b28, 0x40004b2c, \
    0x40004b30, 0x40004b34, 0x40004b38, 0x40004b3c, \
    0x40004b40, 0x40004b44, 0x40004b48, 0x40004b4c, \
    0x40004b50, 0x40004b54, 0x40004b58, 0x40004b5c, \
    0x40004b60, 0x40004b64, 0x40004b68, 0x40004b6c, \
    0x40004b70, 0x40004b74, 0x40004b78, 0x40004b7c, \
    0x40004b80, 0x40004b84, 0x40004b88, 0x40004b8c, \
    0x40004b90, 0x40004b94, 0x40004b98, 0x40004b9c, \
    0x40004ba0, 0x40004ba4, 0x40004ba8, 0x40004bac, \
    0x40004bb0, 0x40004bb4, 0x40004bb8, 0x40004bbc, \
    0x40004bc0, 0x40004bc4, 0x40004bc8, 0x40004bcc, \
    0x40004bd0, 0x40004bd4, 0x40004bd8, 0x40004bdc, \
    0x40004be0, 0x40004be4, 0x40004be8, 0x40004bec, \
    0x40004bf0, 0x40004bf4, 0x40004bf8, 0x40004bfc, \
    0x40004c00, 0x40004c04, 0x40004c08, 0x40004c0c, \
    0x40004c10, 0x40004c14, 0x40004c18, 0x40004c1c, \
    0x40004c20, 0x40004c24, 0x40004c28, 0x40004c2c, \
    0x40004c30, 0x40004c34, 0x40004c38, 0x40004c3c, \
    0x40004c40, 0x40004c44, 0x40004c48, 0x40004c4c, \
    0x40004c50, 0x40004c54, 0x40004c58, 0x40004c5c, \
    0x40004c60, 0x40004c64, 0x40004c68, 0x40004c6c, \
    0x40004c70, 0x40004c74, 0x40004c78, 0x40004c7c, \
    0x40004c80, 0x40004c84, 0x40004c88, 0x40004c8c, \
    0x40004c90, 0x40004c94, 0x40004c98, 0x40004c9c, \
    0x40004ca0, 0x40004ca4, 0x40004ca8, 0x40004cac, \
    0x40004cb0, 0x40004cb4, 0x40004cb8, 0x40004cbc, \
    0x40004cc0, 0x40004cc4, 0x40004cc8, 0x40004ccc, \
    0x40004cd0, 0x40004cd4, 0x40004cd8, 0x40004cdc, \
    0x40004ce0, 0x40004ce4, 0x40004ce8, 0x40004cec, \
    0x40004cf0, 0x40004cf4, 0x40004cf8, 0x40004cfc, \
    0x40004d00, 0x40004d04, 0x40004d08, 0x40004d0c, \
    0x40004d10, 0x40004d14, 0x40004d18, 0x40004d1c, \
    0x40004d20, 0x40004d24, 0x40004d28, 0x40004d2c, \
    0x40004d30, 0x40004d34, 0x40004d38, 0x40004d3c, \
    0x40004d40, 0x40004d44, 0x40004d48, 0x40004d4c, \
    0x40004d50, 0x40004d54, 0x40004d58, 0x40004d5c, \
    0x40004d60, 0x40004d64, 0x40004d68, 0x40004d6c, \
    0x40004d70, 0x40004d74, 0x40004d78, 0x40004d7c, \
    0x40004d80, 0x40004d84, 0x40004d88, 0x40004d8c, \
    0x40004d90, 0x40004d94, 0x40004d98, 0x40004d9c, \
    0x40004da0, 0x40004da4, 0x40004da8, 0x40004dac, \
    0x40004db0, 0x40004db4, 0x40004db8, 0x40004dbc, \
    0x40004dc0, 0x40004dc4, 0x40004dc8, 0x40004dcc, \
    0x40004dd0, 0x40004dd4, 0x40004dd8, 0x40004ddc, \
    0x40004de0, 0x40004de4, 0x40004de8, 0x40004dec, \
    0x40004df0, 0x40004df4, 0x40004df8, 0x40004dfc, \
    0x40004e00, 0x40004e04, 0x40004e08, 0x40004e0c, \
    0x40004e10, 0x40004e14, 0x40004e18, 0x40004e1c, \
    0x40004e20, 0x40004e24, 0x40004e28, 0x40004e2c, \
    0x40004e30, 0x40004e34, 0x40004e38, 0x40004e3c, \
    0x40004e40, 0x40004e44, 0x40004e48, 0x40004e4c, \
    0x40004e50, 0x40004e54, 0x40004e58, 0x40004e5c, \
    0x40004e60, 0x40004e64, 0x40004e68, 0x40004e6c, \
    0x40004e70, 0x40004e74, 0x40004e78, 0x40004e7c, \
    0x40004e80, 0x40004e84, 0x40004e88, 0x40004e8c, \
    0x40004e90, 0x40004e94, 0x40004e98, 0x40004e9c, \
    0x40004ea0, 0x40004ea4, 0x40004ea8, 0x40004eac, \
    0x40004eb0, 0x40004eb4, 0x40004eb8, 0x40004ebc, \
    0x40004ec0, 0x40004ec4, 0x40004ec8, 0x40004ecc, \
    0x40004ed0, 0x40004ed4, 0x40004ed8, 0x40004edc, \
    0x40004ee0, 0x40004ee4, 0x40004ee8, 0x40004eec, \
    0x40004ef0, 0x40004ef4, 0x40004ef8, 0x40004efc, \
    0x40004f00, 0x40004f04, 0x40004f08, 0x40004f0c, \
    0x40004f10, 0x40004f14, 0x40004f18, 0x40004f1c, \
    0xc0004f20, 0x00000041, 0x00000002, 0x40004f24, \
    0x40005028, 0x40004f28, 0x4000502c, 0x40004f2c, \
    0x40005030, 0x40004f30, 0x40005034, 0x40004f34, \
    0x40005038, 0x40004f38, 0x4000503c, 0x40004f3c, \
    0x40005040, 0x40004f40, 0x40005044, 0x40004f44, \
    0x40005048, 0x40004f48, 0x4000504c, 0x40004f4c, \
    0x40005050, 0x40004f50, 0x40005054, 0x40004f54, \
    0x40005058, 0x40004f58, 0x4000505c, 0x40004f5c, \
    0x40005060, 0x40004f60, 0x40005064, 0x40004f64, \
    0x40005068, 0x40004f68, 0x4000506c, 0x40004f6c, \
    0x40005070, 0x40004f70, 0x40005074, 0x40004f74, \
    0x40005078, 0x40004f78, 0x4000507c, 0x40004f7c, \
    0x40005080, 0x40004f80, 0x40005084, 0x40004f84, \
    0x40005088, 0x40004f88, 0x4000508c, 0x40004f8c, \
    0x40005090, 0x40004f90, 0x40005094, 0x40004f94, \
    0x40005098, 0x40004f98, 0x4000509c, 0x40004f9c, \
    0x400050a0, 0x40004fa0, 0x400050a4, 0x40004fa4, \
    0x400050a8, 0x40004fa8, 0x400050ac, 0x40004fac, \
    0x400050b0, 0x40004fb0, 0x400050b4, 0x40004fb4, \
    0x400050b8, 0x40004fb8, 0x400050bc, 0x40004fbc, \
    0x400050c0, 0x40004fc0, 0x400050c4, 0x40004fc4, \
    0x400050c8, 0x40004fc8, 0x400050cc, 0x40004fcc, \
    0x400050d0, 0x40004fd0, 0x400050d4, 0x40004fd4, \
    0x400050d8, 0x40004fd8, 0x400050dc, 0x40004fdc, \
    0x400050e0, 0x40004fe0, 0x400050e4, 0x40004fe4, \
    0x400050e8, 0x40004fe8, 0x400050ec, 0x40004fec, \
    0x400050f0, 0x40004ff0, 0x400050f4, 0x40004ff4, \
    0x400050f8, 0x40004ff8, 0x400050fc, 0x40004ffc, \
    0x40005100, 0x40005000, 0x40005104, 0x40005004, \
    0x40005108, 0x40005008, 0x4000510c, 0x4000500c, \
    0x40005110, 0x40005010, 0x40005114, 0x40005014, \
    0x40005118, 0x40005018, 0x4000511c, 0x4000501c, \
    0x40005120, 0x40005020, 0x40005124, 0x40005024, \
    0x40005128, 0xc000512c, 0x0000028a, 0x00000001, \
    0x40005130, 0x40005134, 0x40005138, 0x4000513c, \
    0x40005140, 0x40005144, 0x40005148, 0x4000514c, \
    0x40005150, 0x40005154, 0x40005158, 0x4000515c, \
    0x40005160, 0x40005164, 0x40005168, 0x4000516c, \
    0x40005170, 0x40005174, 0x40005178, 0x4000517c, \
    0x40005180, 0x40005184, 0x40005188, 0x4000518c, \
    0x40005190, 0x40005194, 0x40005198, 0x4000519c, \
    0x400051a0, 0x400051a4, 0x400051a8, 0x400051ac, \
    0x400051b0, 0x400051b4, 0x400051b8, 0x400051bc, \
    0x400051c0, 0x400051c4, 0x400051c8, 0x400051cc, \
    0x400051d0, 0x400051d4, 0x400051d8, 0x400051dc, \
    0x400051e0, 0x400051e4, 0x400051e8, 0x400051ec, \
    0x400051f0, 0x400051f4, 0x400051f8, 0x400051fc, \
    0x40005200, 0x40005204, 0x40005208, 0x4000520c, \
    0x40005210, 0x40005214, 0x40005218, 0x4000521c, \
    0x40005220, 0x40005224, 0x40005228, 0x4000522c, \
    0x40005230, 0x40005234, 0x40005238, 0x4000523c, \
    0x40005240, 0x40005244, 0x40005248, 0x4000524c, \
    0x40005250, 0x40005254, 0x40005258, 0x4000525c, \
    0x40005260, 0x40005264, 0x40005268, 0x4000526c, \
    0x40005270, 0x40005274, 0x40005278, 0x4000527c, \
    0x40005280, 0x40005284, 0x40005288, 0x4000528c, \
    0x40005290, 0x40005294, 0x40005298, 0x4000529c, \
    0x400052a0, 0x400052a4, 0x400052a8, 0x400052ac, \
    0x400052b0, 0x400052b4, 0x400052b8, 0x400052bc, \
    0x400052c0, 0x400052c4, 0x400052c8, 0x400052cc, \
    0x400052d0, 0x400052d4, 0x400052d8, 0x400052dc, \
    0x400052e0, 0x400052e4, 0x400052e8, 0x400052ec, \
    0x400052f0, 0x400052f4, 0x400052f8, 0x400052fc, \
    0x40005300, 0x40005304, 0x40005308, 0x4000530c, \
    0x40005310, 0x40005314, 0x40005318, 0x4000531c, \
    0x40005320, 0x40005324, 0x40005328, 0x4000532c, \
    0x40005330, 0x40005334, 0x40005338, 0x4000533c, \
    0x40005340, 0x40005344, 0x40005348, 0x4000534c, \
    0x40005350, 0x40005354, 0x40005358, 0x4000535c, \
    0x40005360, 0x40005364, 0x40005368, 0x4000536c, \
    0x40005370, 0x40005374, 0x40005378, 0x4000537c, \
    0x40005380, 0x40005384, 0x40005388, 0x4000538c, \
    0x40005390, 0x40005394, 0x40005398, 0x4000539c, \
    0x400053a0, 0x400053a4, 0x400053a8, 0x400053ac, \
    0x400053b0, 0x400053b4, 0x400053b8, 0x400053bc, \
    0x400053c0, 0x400053c4, 0x400053c8, 0x400053cc, \
    0x400053d0, 0x400053d4, 0x400053d8, 0x400053dc, \
    0x400053e0, 0x400053e4, 0x400053e8, 0x400053ec, \
    0x400053f0, 0x400053f4, 0x400053f8, 0x400053fc, \
    0x40005400, 0x40005404, 0x40005408, 0x4000540c, \
    0x40005410, 0x40005414, 0x40005418, 0x4000541c, \
    0x40005420, 0x40005424, 0x40005428, 0x4000542c, \
    0x40005430, 0x40005434, 0x40005438, 0x4000543c, \
    0x40005440, 0x40005444, 0x40005448, 0x4000544c, \
    0x40005450, 0x40005454, 0x40005458, 0x4000545c, \
    0x40005460, 0x40005464, 0x40005468, 0x4000546c, \
    0x40005470, 0x40005474, 0x40005478, 0x4000547c, \
    0x40005480, 0x40005484, 0x40005488, 0x4000548c, \
    0x40005490, 0x40005494, 0x40005498, 0x4000549c, \
    0x400054a0, 0x400054a4, 0x400054a8, 0x400054ac, \
    0x400054b0, 0x400054b4, 0x400054b8, 0x400054bc, \
    0x400054c0, 0x400054c4, 0x400054c8, 0x400054cc, \
    0x400054d0, 0x400054d4, 0x400054d8, 0x400054dc, \
    0x400054e0, 0x400054e4, 0x400054e8, 0x400054ec, \
    0x400054f0, 0x400054f4, 0x400054f8, 0x400054fc, \
    0x40005500, 0x40005504, 0x40005508, 0x4000550c, \
    0x40005510, 0x40005514, 0x40005518, 0x4000551c, \
    0x40005520, 0x40005524, 0x40005528, 0x4000552c, \
    0x40005530, 0x40005534, 0x40005538, 0x4000553c, \
    0x40005540, 0x40005544, 0x40005548, 0x4000554c, \
    0x40005550, 0x40005554, 0x40005558, 0x4000555c, \
    0x40005560, 0x40005564, 0x40005568, 0x4000556c, \
    0x40005570, 0x40005574, 0x40005578, 0x4000557c, \
    0x40005580, 0x40005584, 0x40005588, 0x4000558c, \
    0x40005590, 0x40005594, 0x40005598, 0x4000559c, \
    0x400055a0, 0x400055a4, 0x400055a8, 0x400055ac, \
    0x400055b0, 0x400055b4, 0x400055b8, 0x400055bc, \
    0x400055c0, 0x400055c4, 0x400055c8, 0x400055cc, \
    0x400055d0, 0x400055d4, 0x400055d8, 0x400055dc, \
    0x400055e0, 0x400055e4, 0x400055e8, 0x400055ec, \
    0x400055f0, 0x400055f4, 0x400055f8, 0x400055fc, \
    0x40005600, 0x40005604, 0x40005608, 0x4000560c, \
    0x40005610, 0x40005614, 0x40005618, 0x4000561c, \
    0x40005620, 0x40005624, 0x40005628, 0x4000562c, \
    0x40005630, 0x40005634, 0x40005638, 0x4000563c, \
    0x40005640, 0x40005644, 0x40005648, 0x4000564c, \
    0x40005650, 0x40005654, 0x40005658, 0x4000565c, \
    0x40005660, 0x40005664, 0x40005668, 0x4000566c, \
    0x40005670, 0x40005674, 0x40005678, 0x4000567c, \
    0x40005680, 0x40005684, 0x40005688, 0x4000568c, \
    0x40005690, 0x40005694, 0x40005698, 0x4000569c, \
    0x400056a0, 0x400056a4, 0x400056a8, 0x400056ac, \
    0x400056b0, 0x400056b4, 0x400056b8, 0x400056bc, \
    0x400056c0, 0x400056c4, 0x400056c8, 0x400056cc, \
    0x400056d0, 0x400056d4, 0x400056d8, 0x400056dc, \
    0x400056e0, 0x400056e4, 0x400056e8, 0x400056ec, \
    0x400056f0, 0x400056f4, 0x400056f8, 0x400056fc, \
    0x40005700, 0x40005704, 0x40005708, 0x4000570c, \
    0x40005710, 0x40005714, 0x40005718, 0x4000571c, \
    0x40005720, 0x40005724, 0x40005728, 0x4000572c, \
    0x40005730, 0x40005734, 0x40005738, 0x4000573c, \
    0x40005740, 0x40005744, 0x40005748, 0x4000574c, \
    0x40005750, 0x40005754, 0x40005758, 0x4000575c, \
    0x40005760, 0x40005764, 0x40005768, 0x4000576c, \
    0x40005770, 0x40005774, 0x40005778, 0x4000577c, \
    0x40005780, 0x40005784, 0x40005788, 0x4000578c, \
    0x40005790, 0x40005794, 0x40005798, 0x4000579c, \
    0x400057a0, 0x400057a4, 0x400057a8, 0x400057ac, \
    0x400057b0, 0x400057b4, 0x400057b8, 0x400057bc, \
    0x400057c0, 0x400057c4, 0x400057c8, 0x400057cc, \
    0x400057d0, 0x400057d4, 0x400057d8, 0x400057dc, \
    0x400057e0, 0x400057e4, 0x400057e8, 0x400057ec, \
    0x400057f0, 0x400057f4, 0x400057f8, 0x400057fc, \
    0x40005800, 0x40005804, 0x40005808, 0x4000580c, \
    0x40005810, 0x40005814, 0x40005818, 0x4000581c, \
    0x40005820, 0x40005824, 0x40005828, 0x4000582c, \
    0x40005830, 0x40005834, 0x40005838, 0x4000583c, \
    0x40005840, 0x40005844, 0x40005848, 0x4000584c, \
    0x40005850, 0x40005854, 0x40005858, 0x4000585c, \
    0x40005860, 0x40005864, 0x40005868, 0x4000586c, \
    0x40005870, 0x40005874, 0x40005878, 0x4000587c, \
    0x40005880, 0x40005884, 0x40005888, 0x4000588c, \
    0x40005890, 0x40005894, 0x40005898, 0x4000589c, \
    0x400058a0, 0x400058a4, 0x400058a8, 0x400058ac, \
    0x400058b0, 0x400058b4, 0x400058b8, 0x400058bc, \
    0x400058c0, 0x400058c4, 0x400058c8, 0x400058cc, \
    0x400058d0, 0x400058d4, 0x400058d8, 0x400058dc, \
    0x400058e0, 0x400058e4, 0x400058e8, 0x400058ec, \
    0x400058f0, 0x400058f4, 0x400058f8, 0x400058fc, \
    0x40005900, 0x40005904, 0x40005908, 0x4000590c, \
    0x40005910, 0x40005914, 0x40005918, 0x4000591c, \
    0x40005920, 0x40005924, 0x40005928, 0x4000592c, \
    0x40005930, 0x40005934, 0x40005938, 0x4000593c, \
    0x40005940, 0x40005944, 0x40005948, 0x4000594c, \
    0x40005950, 0x40005954, 0x40005958, 0x4000595c, \
    0x40005960, 0x40005964, 0x40005968, 0x4000596c, \
    0x40005970, 0x40005974, 0x40005978, 0x4000597c, \
    0x40005980, 0x40005984, 0x40005988, 0x4000598c, \
    0x40005990, 0x40005994, 0x40005998, 0x4000599c, \
    0x400059a0, 0x400059a4, 0x400059a8, 0x400059ac, \
    0x400059b0, 0x400059b4, 0x400059b8, 0x400059bc, \
    0x400059c0, 0x400059c4, 0x400059c8, 0x400059cc, \
    0x400059d0, 0x400059d4, 0x400059d8, 0x400059dc, \
    0x400059e0, 0x400059e4, 0x400059e8, 0x400059ec, \
    0x400059f0, 0x400059f4, 0x400059f8, 0x400059fc, \
    0x40005a00, 0x40005a04, 0x40005a08, 0x40005a0c, \
    0x40005a10, 0x40005a14, 0x40005a18, 0x40005a1c, \
    0x40005a20, 0x40005a24, 0x40005a28, 0x40005a2c, \
    0x40005a30, 0x40005a34, 0x40005a38, 0x40005a3c, \
    0x40005a40, 0x40005a44, 0x40005a48, 0x40005a4c, \
    0x40005a50, 0x40005a54, 0x40005a58, 0x40005a5c, \
    0x40005a60, 0x40005a64, 0x40005a68, 0x40005a6c, \
    0x40005a70, 0x40005a74, 0x40005a78, 0x40005a7c, \
    0x40005a80, 0x40005a84, 0x40005a88, 0x40005a8c, \
    0x40005a90, 0x40005a94, 0x40005a98, 0x40005a9c, \
    0x40005aa0, 0x40005aa4, 0x40005aa8, 0x40005aac, \
    0x40005ab0, 0x40005ab4, 0x40005ab8, 0x40005abc, \
    0x40005ac0, 0x40005ac4, 0x40005ac8, 0x40005acc, \
    0x40005ad0, 0x40005ad4, 0x40005ad8, 0x40005adc, \
    0x40005ae0, 0x40005ae4, 0x40005ae8, 0x40005aec, \
    0x40005af0, 0x40005af4, 0x40005af8, 0x40005afc, \
    0x40005b00, 0x40005b04, 0x40005b08, 0x40005b0c, \
    0x40005b10, 0x40005b14, 0x40005b18, 0x40005b1c, \
    0x40005b20, 0x40005b24, 0x40005b28, 0x40005b2c, \
    0x40005b30, 0x40005b34, 0x40005b38, 0x40005b3c, \
    0x40005b40, 0x40005b44, 0x40005b48, 0x40005b4c, \
    0x40005b50, 0x40005b54, 0xc0005b58, 0x00000041, \
    0x00000002, 0x40005b5c, 0x40005c60, 0x40005b60, \
    0x40005c64, 0x40005b64, 0x40005c68, 0x40005b68, \
    0x40005c6c, 0x40005b6c, 0x40005c70, 0x40005b70, \
    0x40005c74, 0x40005b74, 0x40005c78, 0x40005b78, \
    0x40005c7c, 0x40005b7c, 0x40005c80, 0x40005b80, \
    0x40005c84, 0x40005b84, 0x40005c88, 0x40005b88, \
    0x40005c8c, 0x40005b8c, 0x40005c90, 0x40005b90, \
    0x40005c94, 0x40005b94, 0x40005c98, 0x40005b98, \
    0x40005c9c, 0x40005b9c, 0x40005ca0, 0x40005ba0, \
    0x40005ca4, 0x40005ba4, 0x40005ca8, 0x40005ba8, \
    0x40005cac, 0x40005bac, 0x40005cb0, 0x40005bb0, \
    0x40005cb4, 0x40005bb4, 0x40005cb8, 0x40005bb8, \
    0x40005cbc, 0x40005bbc, 0x40005cc0, 0x40005bc0, \
    0x40005cc4, 0x40005bc4, 0x40005cc8, 0x40005bc8, \
    0x40005ccc, 0x40005bcc, 0x40005cd0, 0x40005bd0, \
    0x40005cd4, 0x40005bd4, 0x40005cd8, 0x40005bd8, \
    0x40005cdc, 0x40005bdc, 0x40005ce0, 0x40005be0, \
    0x40005ce4, 0x40005be4, 0x40005ce8, 0x40005be8, \
    0x40005cec, 0x40005bec, 0x40005cf0, 0x40005bf0, \
    0x40005cf4, 0x40005bf4, 0x40005cf8, 0x40005bf8, \
    0x40005cfc, 0x40005bfc, 0x40005d00, 0x40005c00, \
    0x40005d04, 0x40005c04, 0x40005d08, 0x40005c08, \
    0x40005d0c, 0x40005c0c, 0x40005d10, 0x40005c10, \
    0x40005d14, 0x40005c14, 0x40005d18, 0x40005c18, \
    0x40005d1c, 0x40005c1c, 0x40005d20, 0x40005c20, \
    0x40005d24, 0x40005c24, 0x40005d28, 0x40005c28, \
    0x40005d2c, 0x40005c2c, 0x40005d30, 0x40005c30, \
    0x40005d34, 0x40005c34, 0x40005d38, 0x40005c38, \
    0x40005d3c, 0x40005c3c, 0x40005d40, 0x40005c40, \
    0x40005d44, 0x40005c44, 0x40005d48, 0x40005c48, \
    0x40005d4c, 0x40005c4c, 0x40005d50, 0x40005c50, \
    0x40005d54, 0x40005c54, 0x40005d58, 0x40005c58, \
    0x40005d5c, 0x40005c5c, 0x40005d60, 0xc0005d64, \
    0x0000028a, 0x00000001, 0x40005d68, 0x40005d6c, \
    0x40005d70, 0x40005d74, 0x40005d78, 0x40005d7c, \
    0x40005d80, 0x40005d84, 0x40005d88, 0x40005d8c, \
    0x40005d90, 0x40005d94, 0x40005d98, 0x40005d9c, \
    0x40005da0, 0x40005da4, 0x40005da8, 0x40005dac, \
    0x40005db0, 0x40005db4, 0x40005db8, 0x40005dbc, \
    0x40005dc0, 0x40005dc4, 0x40005dc8, 0x40005dcc, \
    0x40005dd0, 0x40005dd4, 0x40005dd8, 0x40005ddc, \
    0x40005de0, 0x40005de4, 0x40005de8, 0x40005dec, \
    0x40005df0, 0x40005df4, 0x40005df8, 0x40005dfc, \
    0x40005e00, 0x40005e04, 0x40005e08, 0x40005e0c, \
    0x40005e10, 0x40005e14, 0x40005e18, 0x40005e1c, \
    0x40005e20, 0x40005e24, 0x40005e28, 0x40005e2c, \
    0x40005e30, 0x40005e34, 0x40005e38, 0x40005e3c, \
    0x40005e40, 0x40005e44, 0x40005e48, 0x40005e4c, \
    0x40005e50, 0x40005e54, 0x40005e58, 0x40005e5c, \
    0x40005e60, 0x40005e64, 0x40005e68, 0x40005e6c, \
    0x40005e70, 0x40005e74, 0x40005e78, 0x40005e7c, \
    0x40005e80, 0x40005e84, 0x40005e88, 0x40005e8c, \
    0x40005e90, 0x40005e94, 0x40005e98, 0x40005e9c, \
    0x40005ea0, 0x40005ea4, 0x40005ea8, 0x40005eac, \
    0x40005eb0, 0x40005eb4, 0x40005eb8, 0x40005ebc, \
    0x40005ec0, 0x40005ec4, 0x40005ec8, 0x40005ecc, \
    0x40005ed0, 0x40005ed4, 0x40005ed8, 0x40005edc, \
    0x40005ee0, 0x40005ee4, 0x40005ee8, 0x40005eec, \
    0x40005ef0, 0x40005ef4, 0x40005ef8, 0x40005efc, \
    0x40005f00, 0x40005f04, 0x40005f08, 0x40005f0c, \
    0x40005f10, 0x40005f14, 0x40005f18, 0x40005f1c, \
    0x40005f20, 0x40005f24, 0x40005f28, 0x40005f2c, \
    0x40005f30, 0x40005f34, 0x40005f38, 0x40005f3c, \
    0x40005f40, 0x40005f44, 0x40005f48, 0x40005f4c, \
    0x40005f50, 0x40005f54, 0x40005f58, 0x40005f5c, \
    0x40005f60, 0x40005f64, 0x40005f68, 0x40005f6c, \
    0x40005f70, 0x40005f74, 0x40005f78, 0x40005f7c, \
    0x40005f80, 0x40005f84, 0x40005f88, 0x40005f8c, \
    0x40005f90, 0x40005f94, 0x40005f98, 0x40005f9c, \
    0x40005fa0, 0x40005fa4, 0x40005fa8, 0x40005fac, \
    0x40005fb0, 0x40005fb4, 0x40005fb8, 0x40005fbc, \
    0x40005fc0, 0x40005fc4, 0x40005fc8, 0x40005fcc, \
    0x40005fd0, 0x40005fd4, 0x40005fd8, 0x40005fdc, \
    0x40005fe0, 0x40005fe4, 0x40005fe8, 0x40005fec, \
    0x40005ff0, 0x40005ff4, 0x40005ff8, 0x40005ffc, \
    0x40006000, 0x40006004, 0x40006008, 0x4000600c, \
    0x40006010, 0x40006014, 0x40006018, 0x4000601c, \
    0x40006020, 0x40006024, 0x40006028, 0x4000602c, \
    0x40006030, 0x40006034, 0x40006038, 0x4000603c, \
    0x40006040, 0x40006044, 0x40006048, 0x4000604c, \
    0x40006050, 0x40006054, 0x40006058, 0x4000605c, \
    0x40006060, 0x40006064, 0x40006068, 0x4000606c, \
    0x40006070, 0x40006074, 0x40006078, 0x4000607c, \
    0x40006080, 0x40006084, 0x40006088, 0x4000608c, \
    0x40006090, 0x40006094, 0x40006098, 0x4000609c, \
    0x400060a0, 0x400060a4, 0x400060a8, 0x400060ac, \
    0x400060b0, 0x400060b4, 0x400060b8, 0x400060bc, \
    0x400060c0, 0x400060c4, 0x400060c8, 0x400060cc, \
    0x400060d0, 0x400060d4, 0x400060d8, 0x400060dc, \
    0x400060e0, 0x400060e4, 0x400060e8, 0x400060ec, \
    0x400060f0, 0x400060f4, 0x400060f8, 0x400060fc, \
    0x40006100, 0x40006104, 0x40006108, 0x4000610c, \
    0x40006110, 0x40006114, 0x40006118, 0x4000611c, \
    0x40006120, 0x40006124, 0x40006128, 0x4000612c, \
    0x40006130, 0x40006134, 0x40006138, 0x4000613c, \
    0x40006140, 0x40006144, 0x40006148, 0x4000614c, \
    0x40006150, 0x40006154, 0x40006158, 0x4000615c, \
    0x40006160, 0x40006164, 0x40006168, 0x4000616c, \
    0x40006170, 0x40006174, 0x40006178, 0x4000617c, \
    0x40006180, 0x40006184, 0x40006188, 0x4000618c, \
    0x40006190, 0x40006194, 0x40006198, 0x4000619c, \
    0x400061a0, 0x400061a4, 0x400061a8, 0x400061ac, \
    0x400061b0, 0x400061b4, 0x400061b8, 0x400061bc, \
    0x400061c0, 0x400061c4, 0x400061c8, 0x400061cc, \
    0x400061d0, 0x400061d4, 0x400061d8, 0x400061dc, \
    0x400061e0, 0x400061e4, 0x400061e8, 0x400061ec, \
    0x400061f0, 0x400061f4, 0x400061f8, 0x400061fc, \
    0x40006200, 0x40006204, 0x40006208, 0x4000620c, \
    0x40006210, 0x40006214, 0x40006218, 0x4000621c, \
    0x40006220, 0x40006224, 0x40006228, 0x4000622c, \
    0x40006230, 0x40006234, 0x40006238, 0x4000623c, \
    0x40006240, 0x40006244, 0x40006248, 0x4000624c, \
    0x40006250, 0x40006254, 0x40006258, 0x4000625c, \
    0x40006260, 0x40006264, 0x40006268, 0x4000626c, \
    0x40006270, 0x40006274, 0x40006278, 0x4000627c, \
    0x40006280, 0x40006284, 0x40006288, 0x4000628c, \
    0x40006290, 0x40006294, 0x40006298, 0x4000629c, \
    0x400062a0, 0x400062a4, 0x400062a8, 0x400062ac, \
    0x400062b0, 0x400062b4, 0x400062b8, 0x400062bc, \
    0x400062c0, 0x400062c4, 0x400062c8, 0x400062cc, \
    0x400062d0, 0x400062d4, 0x400062d8, 0x400062dc, \
    0x400062e0, 0x400062e4, 0x400062e8, 0x400062ec, \
    0x400062f0, 0x400062f4, 0x400062f8, 0x400062fc, \
    0x40006300, 0x40006304, 0x40006308, 0x4000630c, \
    0x40006310, 0x40006314, 0x40006318, 0x4000631c, \
    0x40006320, 0x40006324, 0x40006328, 0x4000632c, \
    0x40006330, 0x40006334, 0x40006338, 0x4000633c, \
    0x40006340, 0x40006344, 0x40006348, 0x4000634c, \
    0x40006350, 0x40006354, 0x40006358, 0x4000635c, \
    0x40006360, 0x40006364, 0x40006368, 0x4000636c, \
    0x40006370, 0x40006374, 0x40006378, 0x4000637c, \
    0x40006380, 0x40006384, 0x40006388, 0x4000638c, \
    0x40006390, 0x40006394, 0x40006398, 0x4000639c, \
    0x400063a0, 0x400063a4, 0x400063a8, 0x400063ac, \
    0x400063b0, 0x400063b4, 0x400063b8, 0x400063bc, \
    0x400063c0, 0x400063c4, 0x400063c8, 0x400063cc, \
    0x400063d0, 0x400063d4, 0x400063d8, 0x400063dc, \
    0x400063e0, 0x400063e4, 0x400063e8, 0x400063ec, \
    0x400063f0, 0x400063f4, 0x400063f8, 0x400063fc, \
    0x40006400, 0x40006404, 0x40006408, 0x4000640c, \
    0x40006410, 0x40006414, 0x40006418, 0x4000641c, \
    0x40006420, 0x40006424, 0x40006428, 0x4000642c, \
    0x40006430, 0x40006434, 0x40006438, 0x4000643c, \
    0x40006440, 0x40006444, 0x40006448, 0x4000644c, \
    0x40006450, 0x40006454, 0x40006458, 0x4000645c, \
    0x40006460, 0x40006464, 0x40006468, 0x4000646c, \
    0x40006470, 0x40006474, 0x40006478, 0x4000647c, \
    0x40006480, 0x40006484, 0x40006488, 0x4000648c, \
    0x40006490, 0x40006494, 0x40006498, 0x4000649c, \
    0x400064a0, 0x400064a4, 0x400064a8, 0x400064ac, \
    0x400064b0, 0x400064b4, 0x400064b8, 0x400064bc, \
    0x400064c0, 0x400064c4, 0x400064c8, 0x400064cc, \
    0x400064d0, 0x400064d4, 0x400064d8, 0x400064dc, \
    0x400064e0, 0x400064e4, 0x400064e8, 0x400064ec, \
    0x400064f0, 0x400064f4, 0x400064f8, 0x400064fc, \
    0x40006500, 0x40006504, 0x40006508, 0x4000650c, \
    0x40006510, 0x40006514, 0x40006518, 0x4000651c, \
    0x40006520, 0x40006524, 0x40006528, 0x4000652c, \
    0x40006530, 0x40006534, 0x40006538, 0x4000653c, \
    0x40006540, 0x40006544, 0x40006548, 0x4000654c, \
    0x40006550, 0x40006554, 0x40006558, 0x4000655c, \
    0x40006560, 0x40006564, 0x40006568, 0x4000656c, \
    0x40006570, 0x40006574, 0x40006578, 0x4000657c, \
    0x40006580, 0x40006584, 0x40006588, 0x4000658c, \
    0x40006590, 0x40006594, 0x40006598, 0x4000659c, \
    0x400065a0, 0x400065a4, 0x400065a8, 0x400065ac, \
    0x400065b0, 0x400065b4, 0x400065b8, 0x400065bc, \
    0x400065c0, 0x400065c4, 0x400065c8, 0x400065cc, \
    0x400065d0, 0x400065d4, 0x400065d8, 0x400065dc, \
    0x400065e0, 0x400065e4, 0x400065e8, 0x400065ec, \
    0x400065f0, 0x400065f4, 0x400065f8, 0x400065fc, \
    0x40006600, 0x40006604, 0x40006608, 0x4000660c, \
    0x40006610, 0x40006614, 0x40006618, 0x4000661c, \
    0x40006620, 0x40006624, 0x40006628, 0x4000662c, \
    0x40006630, 0x40006634, 0x40006638, 0x4000663c, \
    0x40006640, 0x40006644, 0x40006648, 0x4000664c, \
    0x40006650, 0x40006654, 0x40006658, 0x4000665c, \
    0x40006660, 0x40006664, 0x40006668, 0x4000666c, \
    0x40006670, 0x40006674, 0x40006678, 0x4000667c, \
    0x40006680, 0x40006684, 0x40006688, 0x4000668c, \
    0x40006690, 0x40006694, 0x40006698, 0x4000669c, \
    0x400066a0, 0x400066a4, 0x400066a8, 0x400066ac, \
    0x400066b0, 0x400066b4, 0x400066b8, 0x400066bc, \
    0x400066c0, 0x400066c4, 0x400066c8, 0x400066cc, \
    0x400066d0, 0x400066d4, 0x400066d8, 0x400066dc, \
    0x400066e0, 0x400066e4, 0x400066e8, 0x400066ec, \
    0x400066f0, 0x400066f4, 0x400066f8, 0x400066fc, \
    0x40006700, 0x40006704, 0x40006708, 0x4000670c, \
    0x40006710, 0x40006714, 0x40006718, 0x4000671c, \
    0x40006720, 0x40006724, 0x40006728, 0x4000672c, \
    0x40006730, 0x40006734, 0x40006738, 0x4000673c, \
    0x40006740, 0x40006744, 0x40006748, 0x4000674c, \
    0x40006750, 0x40006754, 0x40006758, 0x4000675c, \
    0x40006760, 0x40006764, 0x40006768, 0x4000676c, \
    0x40006770, 0x40006774, 0x40006778, 0x4000677c, \
    0x40006780, 0x40006784, 0x40006788, 0x4000678c, \
  } \
};

#endif/*__GUARD_H101_EXT_H101_H__*/

/*******************************************************/
