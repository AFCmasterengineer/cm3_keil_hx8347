/**
  ******************************************************************************
  * @file    LIB_Config.h
  * @author  Waveshare Team
  * @version 
  * @date    13-October-2014
  * @brief     This file provides configurations for low layer hardware libraries.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, WAVESHARE SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _USE_LIB_CONFIG_H_
#define _USE_LIB_CONFIG_H_
//Macro Definition

/* Includes ------------------------------------------------------------------*/
#include "MacroAndConst.h"
//#include "stm32f10x.h"


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------------*/
//delay
//#include "delay.h"

/*------------------------------------------------------------------------------------------------------*/
//SPI
#include "SPI.h"
/*------------------------------------------------------------------------------------------------------*/
//LCD
#include "LCD.h"
#include "Fonts.h"

//GPIO
#include "gpio_m3.h"

#include "GLCD_SPI_MPS2.h"
#include "SMM_MPS2.h"

//#define LCD_RST_GPIO   GPIOB
#define LCD_BKL_GPIO   CMSDK_GPIO0
#define LCD_DC_GPIO    CMSDK_GPIO0
#define LCD_CS_GPIO    CMSDK_GPIO0
#define LCD_CLK_GPIO   CMSDK_GPIO0
#define LCD_SDI_GPIO   CMSDK_GPIO0
#define LCD_SDO_GPIO   CMSDK_GPIO0


//#define LCD_RST_PIN    GPIO_Pin_0
#define LCD_BKL_PIN    			4
#define LCD_DC_PIN     			1
#define LCD_CS_PIN     			12
#define LCD_CLK_PIN    			10
#define LCD_SDO_PIN    			8
#define LCD_SDI_PIN    			7

//#define __LCD_RST_SET()     GPIO_WriteBit(LCD_RST_GPIO, LCD_RST_PIN, Bit_SET)
//#define __LCD_RST_CLR()     GPIO_WriteBit(LCD_RST_GPIO, LCD_RST_PIN, Bit_RESET)

#define __LCD_BKL_SET()    gpio_m3_out(LCD_BKL_GPIO,LCD_BKL_PIN,1);
#define __LCD_BKL_CLR()    gpio_m3_out(LCD_BKL_GPIO,LCD_BKL_PIN,0);

#define __LCD_CS_SET()     gpio_m3_out(LCD_CS_GPIO,LCD_CS_PIN,1);
#define __LCD_CS_CLR()     gpio_m3_out(LCD_CS_GPIO,LCD_CS_PIN,0);

#define __LCD_DC_SET()     gpio_m3_out(LCD_DC_GPIO,LCD_DC_PIN,1);
#define __LCD_DC_CLR()     gpio_m3_out(LCD_DC_GPIO,LCD_DC_PIN,0);

#define __LCD_CLK_SET()     gpio_m3_out(LCD_CLK_GPIO,LCD_CLK_PIN,1);
#define __LCD_CLK_CLR()     gpio_m3_out(LCD_CLK_GPIO,LCD_CLK_PIN,0);

#define __LCD_SDI_SET()     gpio_m3_out(LCD_SDI_GPIO,LCD_SDI_PIN,1);
#define __LCD_SDI_CLR()     gpio_m3_out(LCD_SDI_GPIO,LCD_SDI_PIN,0);

//#define __LCD_SDO()					return gpio_m3_in(LCD_SDO_GPIO,LCD_SDO_PIN);

//#define __LCD_WRITE_WORD(__DATA)       spi_read_write_word(SPI2, __DATA)
#define __LCD_WRITE_BYTE(__DATA)       spi_read_write_byte( __DATA)

/*------------------------------------------------------------------------------------------------------*/
//#include "PF_Config.h"

/*------------------------------------------------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */


#endif

/*-------------------------------END OF FILE-------------------------------*/

