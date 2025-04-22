#ifndef GPIO_H_
#define GPIO_H_

#include "base.h"

//This register determines type of the GPIO pin
#define GPIOA_MODER_OFFSET (0x00)
#define GPIOA_MODER (*(volatile unsigned int *)(GPIOA_PERIPHERAL + GPIOA_MODER_OFFSET))

//Input data value of the GPIO pin
#define GPIOA_IDR_OFFSET (0x10)
#define GPIOA_IDR (*(volatile unsigned int *)(GPIOA_PERIPHERAL + GPIOA_IDR_OFFSET))

//Output data value of the GPIO pin
#define GPIOA_ODR_OFFSET (0x14)
#define GPIOA_ODR (*(volatile unsigned int *)(GPIOA_PERIPHERAL + GPIOA_ODR_OFFSET))

//Alternate function choosing register of the GPIO pin
#define GPIOA_AFRH_OFFSET (0x24)
#define GPIOA_AFRH (*(volatile unsigned int *)(GPIOA_PERIPHERAL + GPIOA_AFRH_OFFSET))

//This register enables clock to the AHB1 bus which gives clock to GPIOA
#define RCC_AHB1ENR_OFFSET (0x30)
#define RCC_AHB1ENR (*(volatile unsigned int *)(RCC_PERIPHERAL + RCC_AHB1ENR_OFFSET))

#endif /* GPIO_H_ */
