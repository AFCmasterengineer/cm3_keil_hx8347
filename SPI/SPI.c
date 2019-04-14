/**
  ******************************************************************************
  * @file    SPI.c 
  * @author  Waveshare Team
  * @version 
  * @date    13-October-2014
  * @brief   This file provides a set of functions to manage the communication between SPI peripherals.
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



/* Includes ------------------------------------------------------------------*/
#include "LIB_Config.h"
#include "SPI.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
uint8_t spi_read_write_byte( uint8_t chByte);
//uint16_t spi_read_write_word( uint16_t hwWord);


/* Private functions ---------------------------------------------------------*/

/**
  * @brief Read or write an byte from or to SPI bus.
  * @param  tSPIx: where x can be 1 , 2 or 3 to select the SPI pripheral.
  * @retval chByte: Receive an byte from SPI bus
  */
uint8_t spi_read_write_byte( uint8_t chByte)
{		

	uint8_t i=0;
	uint8_t SDO_buffer = 0x00;
	
	__LCD_CLK_CLR()
	/* Wait until the transmit buffer is empty */
	for (i=0;i<=7;i++)
	{
		if(chByte&0x01)
		{
			__LCD_SDI_SET()
		}else
		{
			__LCD_SDI_CLR()
		}
		SPI_CLK_DELAY()
		
		if (gpio_m3_in(LCD_SDO_GPIO,LCD_SDO_PIN)&0x01)
			{
					SDO_buffer = SDO_buffer|(1<<(7-i));  //high bit first   read from MISO
			}
	
		__LCD_CLK_SET()//posedge to shift
		
		SPI_CLK_DELAY()
		
		
	}
	
	/* Send the byte */


	
	
	
	/* Return the byte read from the SPI bus */ 


//	/* Wait until the transmit buffer is empty */ 
//	while(SPI_I2S_GetFlagStatus(tSPIx, SPI_I2S_FLAG_TXE) != SET)
//	{
//	} 
//	/* wait until the completion of the transfer */
//	while(SPI_I2S_GetFlagStatus(tSPIx, SPI_I2S_FLAG_BSY) != RESET)
//	{
//	} 
	
	return SDO_buffer;
}

/**
  * @brief Read or write an word from or to SPI bus.
  * @param  tSPIx: where x can be 1 , 2 or 3 to select the SPI pripheral.
  * @retval chByte: Receive an byte from SPI bus
  */
//uint16_t spi_read_write_word( uint16_t hwWord)
//{		
////	uint8_t chRetry = 0;

////	while (SPI_I2S_GetFlagStatus(tSPIx, SPI_I2S_FLAG_TXE) == RESET) {
////		if (++ chRetry > 200) {
////			return 0;
////		}
////	}
////	
////	SPI_I2S_SendData(tSPIx, hwWord); 
////	chRetry=0;
////	
////	while (SPI_I2S_GetFlagStatus(tSPIx, SPI_I2S_FLAG_RXNE) == RESET) {
////		if (++ chRetry > 200) {
////			return 0;
////		}
////	}
//	
//	return 0;//SPI_I2S_ReceiveData(tSPIx);
//}



/*-------------------------------END OF FILE-------------------------------*/

