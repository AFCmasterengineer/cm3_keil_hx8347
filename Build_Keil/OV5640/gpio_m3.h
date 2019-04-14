#include "CMSDK_driver.h"
#include "CMSDK_CM3.h"
#include <stdint.h>

typedef unsigned char  U8;       /* defined for unsigned 8-bits integer variable      */
typedef signed   char  S8;       /* defined for signed 8-bits integer variable        */
typedef unsigned short   U16;      /* defined for unsigned 16-bits integer variable     */
typedef signed   short   S16;      /* defined for signed 16-bits integer variable       */
typedef unsigned long  U32;      /* defined for unsigned 32-bits integer variable     */
typedef signed   long  S32;      /* defined for signed 32-bits integer variable       */
typedef float          F32;      /* single precision floating point variable (32bits) */
typedef double         F64;      /* double precision floating point variable (64bits) */

void gpio_m3_out(CMSDK_GPIO_TypeDef *CMSDK_GPIO_port, U8 GPIO_pin ,U8 data  );
U8 gpio_m3_in(CMSDK_GPIO_TypeDef *CMSDK_GPIO_port, uint8_t GPIO_pin);

