/*
 * SSD_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Belal
 */
#include "types.h"
#include "DIO_interface.h"
#include "SSD_interface.h"
#include "SSD_config.h"
#include "SSD_private.h"

extern void SSD_voidInit(void) {

	/*Comment!:if there is at least one display initialize it*/
#if (SSD_u8DISPCOUNT>=1) && (SSD_u8DISPCOUNT<=6)
	/*Comment!:set segment bins as output*/
	DIO_u8WritePinDir(SSD_u8DISP1_SEGA, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP1_SEGB, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP1_SEGC, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP1_SEGD, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP1_SEGE, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP1_SEGF, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP1_SEGG, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP1_INITCOM, DIO_u8OUTPUT);

	/*Comment!:set 7 segments initial value */
	DIO_u8WritePinVal(SSD_u8DISP1_SEGA,
			SSD_u8Numbers_Array[SSD_u8DISP1TYPE][SSD_u8DISP1_INITVAL][0]);
	DIO_u8WritePinVal(SSD_u8DISP1_SEGB,
			SSD_u8Numbers_Array[SSD_u8DISP1TYPE][SSD_u8DISP1_INITVAL][1]);
	DIO_u8WritePinVal(SSD_u8DISP1_SEGC,
			SSD_u8Numbers_Array[SSD_u8DISP1TYPE][SSD_u8DISP1_INITVAL][2]);
	DIO_u8WritePinVal(SSD_u8DISP1_SEGD,
			SSD_u8Numbers_Array[SSD_u8DISP1TYPE][SSD_u8DISP1_INITVAL][3]);
	DIO_u8WritePinVal(SSD_u8DISP1_SEGE,
			SSD_u8Numbers_Array[SSD_u8DISP1TYPE][SSD_u8DISP1_INITVAL][4]);
	DIO_u8WritePinVal(SSD_u8DISP1_SEGF,
			SSD_u8Numbers_Array[SSD_u8DISP1TYPE][SSD_u8DISP1_INITVAL][5]);
	DIO_u8WritePinVal(SSD_u8DISP1_SEGG,
			SSD_u8Numbers_Array[SSD_u8DISP1TYPE][SSD_u8DISP1_INITVAL][6]);
	DIO_u8WritePinVal(SSD_u8DISP1_INITCOM,
			SSD_u8Control_Signals_Array[SSD_u8DISP1]);
#endif

	/*Comment!:if there is at least two displays initialize them*/
#if (SSD_u8DISPCOUNT>=2) && (SSD_u8DISPCOUNT<=6)
	/*Comment!:set segment bins as output*/
	DIO_u8WritePinDir(SSD_u8DISP2_SEGA, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP2_SEGB, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP2_SEGC, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP2_SEGD, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP2_SEGE, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP2_SEGF, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP2_SEGG, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP2_INITCOM, DIO_u8OUTPUT);
	/*Comment!:set 7 segments initial value */
	DIO_u8WritePinVal(SSD_u8DISP2_SEGA,
			SSD_u8Numbers_Array[SSD_u8DISP2TYPE][SSD_u8DISP2_INITVAL][0]);
	DIO_u8WritePinVal(SSD_u8DISP2_SEGB,
			SSD_u8Numbers_Array[SSD_u8DISP2TYPE][SSD_u8DISP2_INITVAL][1]);
	DIO_u8WritePinVal(SSD_u8DISP2_SEGC,
			SSD_u8Numbers_Array[SSD_u8DISP2TYPE][SSD_u8DISP2_INITVAL][2]);
	DIO_u8WritePinVal(SSD_u8DISP2_SEGD,
			SSD_u8Numbers_Array[SSD_u8DISP2TYPE][SSD_u8DISP2_INITVAL][3]);
	DIO_u8WritePinVal(SSD_u8DISP2_SEGE,
			SSD_u8Numbers_Array[SSD_u8DISP2TYPE][SSD_u8DISP2_INITVAL][4]);
	DIO_u8WritePinVal(SSD_u8DISP2_SEGF,
			SSD_u8Numbers_Array[SSD_u8DISP2TYPE][SSD_u8DISP2_INITVAL][5]);
	DIO_u8WritePinVal(SSD_u8DISP2_SEGG,
			SSD_u8Numbers_Array[SSD_u8DISP2TYPE][SSD_u8DISP2_INITVAL][6]);
	DIO_u8WritePinVal(SSD_u8DISP2_INITCOM,
			SSD_u8Control_Signals_Array[SSD_u8DISP2]);
#endif

	/*Comment!:if there is at least three displays initialize them*/
#if (SSD_u8DISPCOUNT>=3) && (SSD_u8DISPCOUNT<=6)
	/*Comment!:set segment bins as output*/
	DIO_u8WritePinDir(SSD_u8DISP3_SEGA, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP3_SEGB, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP3_SEGC, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP3_SEGD, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP3_SEGE, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP3_SEGF, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP3_SEGG, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP3_INITCOM, DIO_u8OUTPUT);
	/*Comment!:set 7 segments initial value */
	DIO_u8WritePinVal(SSD_u8DISP3_SEGA,
			SSD_u8Numbers_Array[SSD_u8DISP3TYPE][SSD_u8DISP3_INITVAL][0]);
	DIO_u8WritePinVal(SSD_u8DISP3_SEGB,
			SSD_u8Numbers_Array[SSD_u8DISP3TYPE][SSD_u8DISP3_INITVAL][1]);
	DIO_u8WritePinVal(SSD_u8DISP3_SEGC,
			SSD_u8Numbers_Array[SSD_u8DISP3TYPE][SSD_u8DISP3_INITVAL][2]);
	DIO_u8WritePinVal(SSD_u8DISP3_SEGD,
			SSD_u8Numbers_Array[SSD_u8DISP3TYPE][SSD_u8DISP3_INITVAL][3]);
	DIO_u8WritePinVal(SSD_u8DISP3_SEGE,
			SSD_u8Numbers_Array[SSD_u8DISP3TYPE][SSD_u8DISP3_INITVAL][4]);
	DIO_u8WritePinVal(SSD_u8DISP3_SEGF,
			SSD_u8Numbers_Array[SSD_u8DISP3TYPE][SSD_u8DISP3_INITVAL][5]);
	DIO_u8WritePinVal(SSD_u8DISP3_SEGG,
			SSD_u8Numbers_Array[SSD_u8DISP3TYPE][SSD_u8DISP3_INITVAL][6]);
	DIO_u8WritePinVal(SSD_u8DISP3_INITCOM,
			SSD_u8Control_Signals_Array[SSD_u8DISP3]);
#endif

	/*Comment!:if there is at least one display initialize it*/
#if (SSD_u8DISPCOUNT>=4) && (SSD_u8DISPCOUNT<=6)
	/*Comment!:set segment bins as output*/
	DIO_u8WritePinDir(SSD_u8DISP4_SEGA, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP4_SEGB, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP4_SEGC, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP4_SEGD, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP4_SEGE, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP4_SEGF, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP4_SEGG, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP4_INITCOM, DIO_u8OUTPUT);
	/*Comment!:set 7 segments initial value */
	DIO_u8WritePinVal(SSD_u8DISP4_SEGA,
			SSD_u8Numbers_Array[SSD_u8DISP4TYPE][SSD_u8DISP4_INITVAL][0]);
	DIO_u8WritePinVal(SSD_u8DISP4_SEGB,
			SSD_u8Numbers_Array[SSD_u8DISP4TYPE][SSD_u8DISP4_INITVAL][1]);
	DIO_u8WritePinVal(SSD_u8DISP4_SEGC,
			SSD_u8Numbers_Array[SSD_u8DISP4TYPE][SSD_u8DISP4_INITVAL][2]);
	DIO_u8WritePinVal(SSD_u8DISP4_SEGD,
			SSD_u8Numbers_Array[SSD_u8DISP4TYPE][SSD_u8DISP4_INITVAL][3]);
	DIO_u8WritePinVal(SSD_u8DISP4_SEGE,
			SSD_u8Numbers_Array[SSD_u8DISP4TYPE][SSD_u8DISP4_INITVAL][4]);
	DIO_u8WritePinVal(SSD_u8DISP4_SEGF,
			SSD_u8Numbers_Array[SSD_u8DISP4TYPE][SSD_u8DISP4_INITVAL][5]);
	DIO_u8WritePinVal(SSD_u8DISP4_SEGG,
			SSD_u8Numbers_Array[SSD_u8DISP4TYPE][SSD_u8DISP4_INITVAL][6]);
	DIO_u8WritePinVal(SSD_u8DISP4_INITCOM,
			SSD_u8Control_Signals_Array[SSD_u8DISP4]);
#endif

	/*Comment!:if there is at least one display initialize it*/
#if (SSD_u8DISPCOUNT>=5) && (SSD_u8DISPCOUNT<=6)
	/*Comment!:set segment bins as output*/
	DIO_u8WritePinDir(SSD_u8DISP5_SEGA, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP5_SEGB, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP5_SEGC, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP5_SEGD, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP5_SEGE, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP5_SEGF, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP5_SEGG, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP5_INITCOM, DIO_u8OUTPUT);
	/*Comment!:set 7 segments initial value */
	DIO_u8WritePinVal(SSD_u8DISP5_SEGA,
			SSD_u8Numbers_Array[SSD_u8DISP5TYPE][SSD_u8DISP5_INITVAL][0]);
	DIO_u8WritePinVal(SSD_u8DISP5_SEGB,
			SSD_u8Numbers_Array[SSD_u8DISP5TYPE][SSD_u8DISP5_INITVAL][1]);
	DIO_u8WritePinVal(SSD_u8DISP5_SEGC,
			SSD_u8Numbers_Array[SSD_u8DISP5TYPE][SSD_u8DISP5_INITVAL][2]);
	DIO_u8WritePinVal(SSD_u8DISP5_SEGD,
			SSD_u8Numbers_Array[SSD_u8DISP5TYPE][SSD_u8DISP5_INITVAL][3]);
	DIO_u8WritePinVal(SSD_u8DISP5_SEGE,
			SSD_u8Numbers_Array[SSD_u8DISP5TYPE][SSD_u8DISP5_INITVAL][4]);
	DIO_u8WritePinVal(SSD_u8DISP5_SEGF,
			SSD_u8Numbers_Array[SSD_u8DISP5TYPE][SSD_u8DISP5_INITVAL][5]);
	DIO_u8WritePinVal(SSD_u8DISP5_SEGG,
			SSD_u8Numbers_Array[SSD_u8DISP5TYPE][SSD_u8DISP5_INITVAL][6]);
	DIO_u8WritePinVal(SSD_u8DISP5_INITCOM,
			SSD_u8Control_Signals_Array[SSD_u8DISP5]);
#endif

	/*Comment!:if there is at least one display initialize it*/
#if SSD_u8DISPCOUNT==6
	/*Comment!:set segment bins as output*/
	DIO_u8WritePinDir(SSD_u8DISP6_SEGA, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP6_SEGB, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP6_SEGC, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP6_SEGD, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP6_SEGE, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP6_SEGF, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP6_SEGG, DIO_u8OUTPUT);
	DIO_u8WritePinDir(SSD_u8DISP6_INITCOM, DIO_u8OUTPUT);
	/*Comment!:set 7 segments initial value */
	DIO_u8WritePinVal(SSD_u8DISP6_SEGA,
			SSD_u8Numbers_Array[SSD_u8DISP6TYPE][SSD_u8DISP6_INITVAL][0]);
	DIO_u8WritePinVal(SSD_u8DISP6_SEGB,
			SSD_u8Numbers_Array[SSD_u8DISP6TYPE][SSD_u8DISP6_INITVAL][1]);
	DIO_u8WritePinVal(SSD_u8DISP6_SEGC,
			SSD_u8Numbers_Array[SSD_u8DISP6TYPE][SSD_u8DISP6_INITVAL][2]);
	DIO_u8WritePinVal(SSD_u8DISP6_SEGD,
			SSD_u8Numbers_Array[SSD_u8DISP6TYPE][SSD_u8DISP6_INITVAL][3]);
	DIO_u8WritePinVal(SSD_u8DISP6_SEGE,
			SSD_u8Numbers_Array[SSD_u8DISP6TYPE][SSD_u8DISP6_INITVAL][4]);
	DIO_u8WritePinVal(SSD_u8DISP6_SEGF,
			SSD_u8Numbers_Array[SSD_u8DISP6TYPE][SSD_u8DISP6_INITVAL][5]);
	DIO_u8WritePinVal(SSD_u8DISP6_SEGG,
			SSD_u8Numbers_Array[SSD_u8DISP6TYPE][SSD_u8DISP6_INITVAL][6]);
	DIO_u8WritePinVal(SSD_u8DISP6_INITCOM,
			SSD_u8Control_Signals_Array[SSD_u8DISP6]);
#endif

}

extern u8 SSD_u8Display(u8 Copy_u8DispIdx, u8 Copy_u8DispVal) {

	u8 Local_u8ErrorFlag;

	/*Comment!:Check range*/
	if (Copy_u8DispIdx >= SSD_u8DISP1 && Copy_u8DispIdx <= SSD_u8DISP6) {

		/*Comment!: Write number to 7 segments*/
		DIO_u8WritePinVal(SSD_u8DIO_MAP[Copy_u8DispIdx][0],
				SSD_u8Numbers_Array[SSD_u8Display_Type_Array[Copy_u8DispIdx]][Copy_u8DispVal][0]);
		DIO_u8WritePinVal(SSD_u8DIO_MAP[Copy_u8DispIdx][1],
				SSD_u8Numbers_Array[SSD_u8Display_Type_Array[Copy_u8DispIdx]][Copy_u8DispVal][1]);
		DIO_u8WritePinVal(SSD_u8DIO_MAP[Copy_u8DispIdx][2],
				SSD_u8Numbers_Array[SSD_u8Display_Type_Array[Copy_u8DispIdx]][Copy_u8DispVal][2]);
		DIO_u8WritePinVal(SSD_u8DIO_MAP[Copy_u8DispIdx][3],
				SSD_u8Numbers_Array[SSD_u8Display_Type_Array[Copy_u8DispIdx]][Copy_u8DispVal][3]);
		DIO_u8WritePinVal(SSD_u8DIO_MAP[Copy_u8DispIdx][4],
				SSD_u8Numbers_Array[SSD_u8Display_Type_Array[Copy_u8DispIdx]][Copy_u8DispVal][4]);
		DIO_u8WritePinVal(SSD_u8DIO_MAP[Copy_u8DispIdx][5],
				SSD_u8Numbers_Array[SSD_u8Display_Type_Array[Copy_u8DispIdx]][Copy_u8DispVal][5]);
		DIO_u8WritePinVal(SSD_u8DIO_MAP[Copy_u8DispIdx][6],
				SSD_u8Numbers_Array[SSD_u8Display_Type_Array[Copy_u8DispIdx]][Copy_u8DispVal][6]);

		/*Comment!: Write to common pin at 7 segment*/
		DIO_u8WritePinVal(SSD_u8DIO_MAP[Copy_u8DispIdx][7],
				SSD_u8Control_Signals_Array[Copy_u8DispIdx]);

		Local_u8ErrorFlag = ok;
	} else {
		Local_u8ErrorFlag = error;
	}

	return Local_u8ErrorFlag;
}

extern u8 SSD_u8TurnOn(u8 Copy_u8DispIdx) {
	u8 Local_u8Display_Type;
	u8 Local_u8Pin_Idx;
	u8 Local_u8Control_Signal;
	u8 Local_u8ErrorFlag;

	/*Comment!:Check range*/
	if (Copy_u8DispIdx >= SSD_u8DISP1 && Copy_u8DispIdx <= SSD_u8DISP6) {

		/*Comment!: Get display type from display array*/
		Local_u8Display_Type = SSD_u8Display_Type_Array[Copy_u8DispIdx];

		/*Comment!: Set control signal of display at Control_Signals_Array */
		SSD_u8Control_Signals_Array[Copy_u8DispIdx] =
				SSD_u8Control_Signals_Map[Local_u8Display_Type][SSD_u8ONSTATE];

		/*Comment!: Active display */
		Local_u8Pin_Idx = SSD_u8DIO_MAP[Copy_u8DispIdx][7];
		Local_u8Control_Signal = SSD_u8Control_Signals_Array[Copy_u8DispIdx];
		DIO_u8WritePinVal(Local_u8Pin_Idx, Local_u8Control_Signal);

		Local_u8ErrorFlag = ok;
	} else {
		Local_u8ErrorFlag = error;
	}
	return Local_u8ErrorFlag;
}

extern u8 SSD_u8TurnOff(u8 Copy_u8DispIdx) {
	u8 Local_u8Display_Type;
	u8 Local_u8Pin_Idx;
	u8 Local_u8Control_Signal;
	u8 Local_u8ErrorFlag;

	/*Comment!:Check range*/
	if (Copy_u8DispIdx >= SSD_u8DISP1 && Copy_u8DispIdx <= SSD_u8DISP6) {

		/*Comment!: Get display type from display array*/
		Local_u8Display_Type = SSD_u8Display_Type_Array[Copy_u8DispIdx];

		/*Comment!: Clear control signal of display at Control_Signals_Array */
		SSD_u8Control_Signals_Array[Copy_u8DispIdx] =
				SSD_u8Control_Signals_Map[Local_u8Display_Type][SSD_u8OFFSTATE];

		/*Comment!: Deactivate display */
		Local_u8Pin_Idx = SSD_u8DIO_MAP[Copy_u8DispIdx][7];
		Local_u8Control_Signal = SSD_u8Control_Signals_Array[Copy_u8DispIdx];
		DIO_u8WritePinVal(Local_u8Pin_Idx, Local_u8Control_Signal);

		Local_u8ErrorFlag = ok;
	} else {
		Local_u8ErrorFlag = error;
	}
	return Local_u8ErrorFlag;
}
