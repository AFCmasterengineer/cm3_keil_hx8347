#ifndef __SCCB_H
#define __SCCB_H

#include "CMSDK_CM3.h"
#include "gpio_m3.h"

#define    OV5640_GPIO_port    	CMSDK_GPIO0
#define    OV5640_SIOC_pin    	(U8)1
#define    OV5640_SIOD_pin			(U8)2

#define    OV5640_SIOC_H()       gpio_m3_out(OV5640_GPIO_port,OV5640_SIOC_pin,(U8)1)
#define    OV5640_SIOC_L()       gpio_m3_out(OV5640_GPIO_port,OV5640_SIOC_pin,(U8)0)
#define    OV5640_SIOD_H()       gpio_m3_out(OV5640_GPIO_port,OV5640_SIOD_pin,(U8)1)
#define    OV5640_SIOD_L()       gpio_m3_out(OV5640_GPIO_port,OV5640_SIOD_pin,(U8)0)

#define    OV5640_SIOD_READ()     gpio_m3_in(OV5640_GPIO_port, OV5640_SIOD_pin)


void SCCB_Init(void);
void SCCB_Start(void);
void SCCB_Stop(void);
void SCCB_No_Ack(void);
uint8_t SCCB_WR_Byte(uint8_t dat);
uint8_t SCCB_RD_Byte(void);
#endif

