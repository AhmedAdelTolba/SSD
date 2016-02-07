/*
 * delay.h
 *
 *  Created on: ???/???/????
 *      Author: Ismailia Laptop
 */


#include "types.h"
#include "delay_config.h"

#ifndef DELAY_H_
#define DELAY_H_

#define Delay_ms(count)  do{\
	              for(u32 k=count/7;k>0;k--)\
				  {\
                  for(u32 i=Delay_u32SystemClock/8000;i>0;i--)\
                  {\
	              __asm__("NOP");\
                  }\
                  }\
                  }while(0)


#endif /* DELAY_H_ */
