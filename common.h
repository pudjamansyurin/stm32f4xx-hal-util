/*
 * common.h
 *
 *  Created on: Feb 15, 2022
 *      Author: pudja
 */

#ifndef STM32F4XX_HAL_COMMON_COMMON_H_
#define STM32F4XX_HAL_COMMON_COMMON_H_

#include "stm32f4xx_hal.h"

/* Public macros */
#define GPIO_PIN_CNT            (16)

#define GPIO_PIN(__X__)         (1 << (__X__))
#define DELAY_MS(__X__)         (HAL_Delay(__X__))

/* Public function declarations */
uint8_t CMN_PinGetNumber(uint16_t GPIO_Pin);
IRQn_Type CMN_PinGetIrqNumber(uint8_t pin_num);
void CMN_PortEnableClock(GPIO_TypeDef *port);
void CMN_PortDisableClock(GPIO_TypeDef *port);

#endif /* STM32F4XX_HAL_COMMON_COMMON_H_ */
