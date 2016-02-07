/*
 * Main.c
 *
 *  Created on: Feb 3, 2016
 *      Author: Ahmed
 */
#include"types.h"
#include "SSD_interface.h"
#include"DIO_interface.h"
#include"DIO_Delay.h"
void main() {
	SSD_voidInit();

	while (1) {
		//SSD_u8Display(SSD_u8DISP1, SSD_u8NUM0);
		SSD_u8Display(SSD_u8DISP2, SSD_u8NUM0);
		SSD_u8TurnOn(SSD_u8DISP1);
		SSD_u8TurnOff(SSD_u8DISP2);
		//		SSD_u8TurnOn(SSD_u8DISP2);
//		SSD_u8TurnOn(SSD_u8DISP3);
//		SSD_u8TurnOn(SSD_u8DISP4);
		Delay_ms(20);
		//SSD_u8Display(SSD_u8DISP1, SSD_u8NUM0);
		SSD_u8Display(SSD_u8DISP2, SSD_u8NUM1);
		SSD_u8TurnOn(SSD_u8DISP2);
		SSD_u8TurnOff(SSD_u8DISP1);
		Delay_ms(20);

//		SSD_u8TurnOff(SSD_u8DISP2);
//		SSD_u8TurnOff(SSD_u8DISP3);
//		SSD_u8TurnOff(SSD_u8DISP4);

	}

	return;
}

