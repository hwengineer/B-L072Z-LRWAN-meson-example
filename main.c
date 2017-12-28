#include "main.h"

void LED_Init(void);
void SysTick_Handler(void);
int  main(void);

int main(void) {
  HAL_Init();
  LED_Init();

  while (1)
  {
    HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
    HAL_Delay(100);
  }
}

void LED_Init() {
  LED_GPIO_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = LED_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;
  HAL_GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct);
}

void SysTick_Handler(void) {
  HAL_IncTick();
}


// /* Configure the system clock @ CPU max */
//   SystemClock_Config();
//
//    /* Set the SysTick to the highest priority in order to avoid
//    * being blocked inside functions waiting on timeouts.
//    */
//    HAL_InitTick(0);


// SystemCoreClockUpdate


/* Configure the SysTick to have interrupt in 10 ms time basis*/
  // HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/100);
