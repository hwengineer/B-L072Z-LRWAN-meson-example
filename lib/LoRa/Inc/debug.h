
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __DEBUG_H__
#define __DEBUG_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/



#include <string.h>
#include <stdio.h>
#include "hw_conf.h"
#include "vcom.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* External variables --------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void DBG_Init( void );
void Error_Handler( void );

#ifdef DEBUG
  #define DBG_GPIO_WRITE( gpio, n, x )  HAL_GPIO_WritePin( gpio, n, (GPIO_PinState)(x) )
  #define DBG_GPIO_SET( gpio, n )       gpio->BSRR = n
  #define DBG_GPIO_RST( gpio, n )       gpio->BRR = n
  #define DBG_RTC_OUTPUT RTC_OUTPUT_DISABLE; /* RTC_OUTPUT_ALARMA on PC13 */
  #define DBG( x )  do{ x } while(0)
#ifdef TRACE
  #define DBG_PRINTF(...)    vcom_Send(__VA_ARGS__)
  #define DBG_PRINTF_CRITICAL(...)   vcom_Send_Lp(__VA_ARGS__)
#else /*TRACE*/
  #define DBG_PRINTF(...)
  #define DBG_PRINTF_CRITICAL(...)
#endif /*TRACE*/


#else /* DEBUG */
  #define DBG_GPIO_WRITE( gpio, n, x )
  #define DBG_GPIO_SET( gpio, n )
  #define DBG_GPIO_RST( gpio, n )
  #define DBG( x ) do{  } while(0)
  #define DBG_PRINTF(...)
  #define DBG_PRINTF_CRITICAL(...)
  #define DBG_RTC_OUTPUT RTC_OUTPUT_DISABLE;
#endif /* DEBUG */

#ifdef __cplusplus
}
#endif

#endif /* __DEBUG_H__*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
