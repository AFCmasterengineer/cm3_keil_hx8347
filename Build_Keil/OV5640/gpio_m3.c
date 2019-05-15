#include "gpio_m3.h"


void gpio_m3_out(CMSDK_GPIO_TypeDef *CMSDK_GPIO_port, uint8_t GPIO_pin ,uint8_t data  )
{
		uint16_t buff = 0x0000;
		uint16_t out_buff = 0x0000;

//	
		buff = CMSDK_GPIO_port->DATAOUT;
		if(data){
					CMSDK_GPIO_port->DATAOUT = buff | ((data << GPIO_pin)&  (1<<GPIO_pin));    //0x 000d 0000 |  1110 1111
		}else{
					CMSDK_GPIO_port->DATAOUT = buff & ((data << GPIO_pin)|  ~(1<<GPIO_pin));
		}
			
			buff = CMSDK_GPIO_port->DATAOUT;
//	
//	
//		out_buff = CMSDK_GPIO_port->OUTENABLESET;
//		CMSDK_GPIO_port->OUTENABLESET = out_buff | (1<<GPIO_pin); 
//		out_buff = CMSDK_GPIO_port->OUTENABLESET;
//		out_buff = CMSDK_GPIO_port->OUTENABLESET;
	///  
//			CMSDK_GPIO_port->DATAOUT  = data << GPIO_pin;
//	
//			buff = CMSDK_GPIO_port->DATAOUT;
	
			CMSDK_GPIO_port->OUTENABLESET = 1<<GPIO_pin;
}

U8 gpio_m3_in(CMSDK_GPIO_TypeDef *CMSDK_GPIO_port, uint8_t GPIO_pin)
{
		U8 input_result;
		CMSDK_GPIO_port->OUTENABLECLR = (1 << GPIO_pin);
		input_result = (CMSDK_GPIO_port->DATA & (1 << GPIO_pin)) >> GPIO_pin;
		return input_result;
}


