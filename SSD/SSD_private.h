/*
 * SSD_private.h
 *
 *  Created on: Feb 4, 2016
 *      Author: Ahmed
 */

#ifndef _SSD_PRIVATE_H_
#define _SSD_PRIVATE_H_
/***********************************************************************/
/**************************Common Macros********************************/
/***********************************************************************/

//#if  SSD_u8DISP1TYPE==SSD_u8COMMCATH
//
//#define SSD_u8SEGON DIO_u8HIGH
//#define SSD_u8SEGOFF DIO_u8LOW
//
//#define SSD_u8DISP1COM   DIO_u8LOW
//
//#elif SSD_u8DISP1TYPE==SSD_u8COMMAND
//
//#define SSD_u8SEGON DIO_u8LOW
//#define SSD_u8SEGOFF DIO_u8HIGH
//
//#define SSD_u8DISP1COM   DIO_u8HIGH
//
//#else
//
//# error  "Configuration Error"
//
//#endif

#define SSD_u8SEGON_COMMAND DIO_u8LOW
#define SSD_u8SEGOFF_COMMAND DIO_u8HIGH
#define SSD_u8SEGON_COMMCATH DIO_u8HIGH
#define SSD_u8SEGOFF_COMMCATH DIO_u8LOW
/***********************************************************************/
/*****************************Arrays************************************/
/***********************************************************************/

const static u8 SSD_u8Numbers_Array[2][10][7] = { { { SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGOFF_COMMAND }, { SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND }, {
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND }, { SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND }, { SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND }, { SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND }, {
		SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND }, { SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND,
		SSD_u8SEGOFF_COMMAND, SSD_u8SEGOFF_COMMAND }, { SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND }, { SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND, SSD_u8SEGON_COMMAND, SSD_u8SEGOFF_COMMAND, SSD_u8SEGON_COMMAND,
		SSD_u8SEGON_COMMAND } },{ { SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGOFF_COMMCATH }, { SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH }, {
				SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH }, { SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH,
				SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH }, { SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH }, { SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH }, {
				SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH }, { SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH,
				SSD_u8SEGOFF_COMMCATH, SSD_u8SEGOFF_COMMCATH }, { SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH }, { SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH, SSD_u8SEGON_COMMCATH, SSD_u8SEGOFF_COMMCATH, SSD_u8SEGON_COMMCATH,
				SSD_u8SEGON_COMMCATH } } };

#if SSD_u8DISPCOUNT==1

const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=
{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE};

#elif SSD_u8DISPCOUNT==2

const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=

{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE};

#elif SSD_u8DISPCOUNT==3

const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=
{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}
	, {	SSD_u8DISP3_SEGA,SSD_u8DISP3_SEGB,SSD_u8DISP3_SEGC,SSD_u8DISP3_SEGD,SSD_u8DISP3_SEGE,SSD_u8DISP3_SEGF,SSD_u8DISP3_SEGG,SSD_u8DISP3_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE};

#elif SSD_u8DISPCOUNT==4

const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=

{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}
	, {	SSD_u8DISP3_SEGA,SSD_u8DISP3_SEGB,SSD_u8DISP3_SEGC,SSD_u8DISP3_SEGD,SSD_u8DISP3_SEGE,SSD_u8DISP3_SEGF,SSD_u8DISP3_SEGG,SSD_u8DISP3_INITCOM}
	, {	SSD_u8DISP4_SEGA,SSD_u8DISP4_SEGB,SSD_u8DISP4_SEGC,SSD_u8DISP4_SEGD,SSD_u8DISP4_SEGE,SSD_u8DISP4_SEGF,SSD_u8DISP4_SEGG,SSD_u8DISP4_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE};

#elif SSD_u8DISPCOUNT==5

const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=

{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}
	, {	SSD_u8DISP3_SEGA,SSD_u8DISP3_SEGB,SSD_u8DISP3_SEGC,SSD_u8DISP3_SEGD,SSD_u8DISP3_SEGE,SSD_u8DISP3_SEGF,SSD_u8DISP3_SEGG,SSD_u8DISP3_INITCOM}
	, {	SSD_u8DISP4_SEGA,SSD_u8DISP4_SEGB,SSD_u8DISP4_SEGC,SSD_u8DISP4_SEGD,SSD_u8DISP4_SEGE,SSD_u8DISP4_SEGF,SSD_u8DISP4_SEGG,SSD_u8DISP4_INITCOM}
	, {	SSD_u8DISP5_SEGA,SSD_u8DISP5_SEGB,SSD_u8DISP5_SEGC,SSD_u8DISP5_SEGD,SSD_u8DISP5_SEGE,SSD_u8DISP5_SEGF,SSD_u8DISP5_SEGG,SSD_u8DISP5_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE,SSD_u8DISP5TYPE};

#elif SSD_u8DISPCOUNT==6

const static u8 SSD_u8DIO_MAP[SSD_u8DISPCOUNT][8]=

{	{	SSD_u8DISP1_SEGA,SSD_u8DISP1_SEGB,SSD_u8DISP1_SEGC,SSD_u8DISP1_SEGD,SSD_u8DISP1_SEGE,SSD_u8DISP1_SEGF,SSD_u8DISP1_SEGG,SSD_u8DISP1_INITCOM}
	, {	SSD_u8DISP2_SEGA,SSD_u8DISP2_SEGB,SSD_u8DISP2_SEGC,SSD_u8DISP2_SEGD,SSD_u8DISP2_SEGE,SSD_u8DISP2_SEGF,SSD_u8DISP2_SEGG,SSD_u8DISP2_INITCOM}
	, {	SSD_u8DISP3_SEGA,SSD_u8DISP3_SEGB,SSD_u8DISP3_SEGC,SSD_u8DISP3_SEGD,SSD_u8DISP3_SEGE,SSD_u8DISP3_SEGF,SSD_u8DISP3_SEGG,SSD_u8DISP3_INITCOM}
	, {	SSD_u8DISP4_SEGA,SSD_u8DISP4_SEGB,SSD_u8DISP4_SEGC,SSD_u8DISP4_SEGD,SSD_u8DISP4_SEGE,SSD_u8DISP4_SEGF,SSD_u8DISP4_SEGG,SSD_u8DISP4_INITCOM}
	, {	SSD_u8DISP5_SEGA,SSD_u8DISP5_SEGB,SSD_u8DISP5_SEGC,SSD_u8DISP5_SEGD,SSD_u8DISP5_SEGE,SSD_u8DISP5_SEGF,SSD_u8DISP5_SEGG,SSD_u8DISP5_INITCOM}
	, {	SSD_u8DISP6_SEGA,SSD_u8DISP6_SEGB,SSD_u8DISP6_SEGC,SSD_u8DISP6_SEGD,SSD_u8DISP6_SEGE,SSD_u8DISP6_SEGF,SSD_u8DISP6_SEGG,SSD_u8DISP6_INITCOM}};

const static u8 SSD_u8Display_Type_Array[SSD_u8DISPCOUNT]= {SSD_u8DISP1TYPE,SSD_u8DISP2TYPE,SSD_u8DISP3TYPE,SSD_u8DISP4TYPE,SSD_u8DISP5TYPE,SSD_u8DISP6TYPE};

#else

#error "Number of displays is out of range"

#endif

// active then common
const static u8 SSD_u8Control_Signals_Map[2][2] = { { DIO_u8LOW, DIO_u8HIGH }, {
		DIO_u8HIGH, DIO_u8LOW } };

static u8 SSD_u8Control_Signals_Array[6] = { SSD_u8DISP1_INITSTATE
		^ SSD_u8DISP1TYPE, SSD_u8DISP2_INITSTATE ^ SSD_u8DISP2TYPE,
		SSD_u8DISP3_INITSTATE ^ SSD_u8DISP3TYPE, SSD_u8DISP4_INITSTATE
				^ SSD_u8DISP4TYPE, SSD_u8DISP5_INITSTATE ^ SSD_u8DISP5TYPE,
		SSD_u8DISP6_INITSTATE ^ SSD_u8DISP6TYPE };

#endif /* SSD_PRIVATE_H_ */