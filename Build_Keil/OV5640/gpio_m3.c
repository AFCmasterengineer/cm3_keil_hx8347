#include "gpio_m3.h"


void gpio_m3_out(CMSDK_GPIO_TypeDef *CMSDK_GPIO_port, uint8_t GPIO_pin ,uint8_t data  )
{
		CMSDK_GPIO_port->DATAOUT = data << GPIO_pin;
		CMSDK_GPIO_port->OUTENABLESET = 1 << GPIO_pin;
}

U8 gpio_m3_in(CMSDK_GPIO_TypeDef *CMSDK_GPIO_port, uint8_t GPIO_pin)
{
		U8 input_result;
		CMSDK_GPIO_port->OUTENABLECLR = (1 << GPIO_pin);
		input_result = (CMSDK_GPIO_port->DATA & (1 << GPIO_pin)) >> GPIO_pin;
		return input_result;
}


