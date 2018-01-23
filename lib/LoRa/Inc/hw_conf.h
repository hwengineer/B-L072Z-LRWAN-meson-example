
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HW_CONF_H__
#define __HW_CONF_H__

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

#include "stm32l0xx_hal.h"
// #include "b-l072z-lrwan1.h"
// #include "stm32l0xx_hal_conf.h"
#include "mlm32l0xx_hw_conf.h"


/* --------Preprocessor compile swicth------------ */
/* debug swicthes in debug.h */
//#define DEBUG
//#define TRACE

/* uncomment below line to never enter lowpower modes in main.c*/
//#define LOW_POWER_DISABLE

/* debug swicthes in bsp.c */
//#define SENSOR_ENABLED


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* __HW_CONF_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
