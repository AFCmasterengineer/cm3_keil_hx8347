#ifndef _OV5640_H
#define _OV5640_H

#include "gpio_m3.h"



#define OV5640_ID               0X5640  
#define OV5640_ADDR        	0X78		
#define OV5640_CHIPIDH          0X300A  	
#define OV5640_CHIPIDL          0X300B  

#define OV5640_PWDN_GPIO_Port 	CMSDK_GPIO0
#define OV5640_PWDN_Pin					(U8)3
#define JOYSTICK_KEY_GPIO_Port	CMSDK_GPIO0
#define JOYSTICK_KEY_Pin				(U8)4
#define WAKE_UP_KEY_GPIO_Port		CMSDK_GPIO0
#define WAKE_UP_KEY_Pin					(U8)5

#define OV5640_RAM_ADDL_GPIO			CMSDK_GPIO1			//LOW 16bit addr of ram
#define OV5640_RAM_ADDH_GPIO			CMSDK_GPIO2			//HIGH 3bit addr of ram


#define OV5640_DATA_GPIO				CMSDK_GPIO2
#define OV5640_INIT_DONE_GPIO 	CMSDK_GPIO2
#define OV5640_W_DONE_GPIO 			CMSDK_GPIO2


#define OV5640_INIT_DONE_PIN		5							//GPIO2-5
#define OV5640_DATA_PIN					6							//GPIO2_6
#define OV5640_W_DONE_PIN				7							//GPIO2-7


#define   JOYSTICK_KEY_PRESS     gpio_m3_in(JOYSTICK_KEY_GPIO_Port, JOYSTICK_KEY_Pin) == 0
#define   WAKE_UP_KEY_PRESS      gpio_m3_in(WAKE_UP_KEY_GPIO_Port, WAKE_UP_KEY_Pin) == 1
#define   OV5640_POWER_ON        gpio_m3_out(OV5640_PWDN_GPIO_Port, OV5640_PWDN_Pin, 0x00)

#define		OV5640_INIT_DONE				gpio_m3_out(OV5640_INIT_DONE_GPIO, OV5640_INIT_DONE_PIN, 1);


#define   JPEG_BUF_SIZE_MAX     400*1024    

#define   QQVGA_160_120    0
#define   QCIF_176_144     1
#define   QVGA_320_240     2
#define   WQVGA_400_240    3
#define   CIF_352_288      4
#define   VGA_640_480      5
#define   SVGA_800_600     6

#define   XSIZE      640	       
#define   YSIZE      480
//#define   XSIZE      480       
//#define   YSIZE      272
#define   LCD_GRAM_ADDRESS    SDRAM_DEVICE_ADDR    


extern const uint16_t jpeg_size_tbl[][2];
extern const uint32_t jpeg_buf_max_size[];

uint8_t OV5640_WR_Reg(uint16_t reg,uint8_t data);
uint8_t OV5640_RD_Reg(uint16_t reg);
uint8_t OV5640_Init(void);  
void OV5640_JPEG_Mode(void);
void OV5640_RGB565_Mode(void);
void OV5640_Exposure(uint8_t exposure);
void OV5640_Light_Mode(uint8_t mode);
void OV5640_Color_Saturation(uint8_t sat);
void OV5640_Brightness(uint8_t bright);
void OV5640_Contrast(uint8_t contrast);
void OV5640_Sharpness(uint8_t sharp);
void OV5640_Special_Effects(uint8_t eft);
void OV5640_Test_Pattern(uint8_t mode);
void OV5640_Flash_Lamp(uint8_t sw);
uint8_t OV5640_OutSize_Set(uint16_t offx,uint16_t offy,uint16_t width,uint16_t height);
uint8_t OV5640_Focus_Init(void);
uint8_t OV5640_Auto_Focus(void);
void rgb565_test(void);
void jpeg_test(uint8_t jpg_size);

U8 readbit_RAM(U32 addr);

#endif





















