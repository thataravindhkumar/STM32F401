#ifndef GPIO_H_
#define GPIO_H_

#include "base.h" //Including base.h which contains defines for memory addresses of various peripherals including GPIO

#define GPIOC_MODER_OFFSET (0x00) //Starting Address of GPIOC_MODER register - Starting address of GPIOC_PERIPHERAL
#define GPIOC_MODER (*(volatile unsigned int *)(GPIOC_PERIPHERAL + GPIOC_MODER_OFFSET)) //Starting address of GPIOC_MODER register

#define GPIOC_ODR_OFFSET (0x14) //Starting Address of GPIOC_ODR register - Starting address of GPIOC_PERIPHERAL
#define GPIOC_ODR (*(volatile unsigned int *)(GPIOC_PERIPHERAL + GPIOC_ODR_OFFSET)) //Starting address of GPIOC_ODR register

#define RCC_AHB1ENR_OFFSET (0x30) //Starting Address of RCC_AHB1ENR register - Starting address of RCC_PERIPHERAL
#define RCC_AHB1ENR (*(volatile unsigned int *)(RCC_PERIPHERAL + RCC_AHB1ENR_OFFSET)) //Starting address of RCC_AHB1ENR register

//Function prototypes
void gpio_init(void);
void gpio_userled_toggle(void);

#endif /* GPIO_H_ */
