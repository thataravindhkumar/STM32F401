#ifndef GPIO_H_
#define GPIO_H_

#include "base.h" //Needed to access memory addresses of peripherals

#define GPIOC_MODER_OFFSET (0x00) //Define address of GPIOC_MODER register
#define GPIOC_MODER (*(volatile unsigned int *)(GPIOC + GPIOC_MODER_OFFSET))

#define GPIOC_ODR_OFFSET (0x14) //Define address of GPIOC_ODR register
#define GPIOC_ODR (*(volatile unsigned int *)(GPIOC + GPIOC_ODR_OFFSET))

#define GPIOA_PUPDR_OFFSET (0x0C) //Define address of GPIOA_PUPDR register
#define GPIOA_PUPDR (*(volatile unsigned int *)(GPIOA + GPIOA_PUPDR_OFFSET))

#define GPIOA_MODER_OFFSET (0x00) //Define address of GPIOA_MODER register
#define GPIOA_MODER (*(volatile unsigned int *)(GPIOA + GPIOA_MODER_OFFSET))

#define GPIOA_IDR_OFFSET (0x10) //Define address of GPIOA_IDE register
#define GPIOA_IDR (*(volatile unsigned int *)(GPIOA + GPIOA_IDR_OFFSET))

#define RCC_AHB1ENR_OFFSET (0x30) //Define address of RCC AHB1 clock enable register
#define RCC_AHB1ENR (*(volatile unsigned int *)(RCC + RCC_AHB1ENR_OFFSET))

//Function prototypes
void gpio_init(void);
void gpio_userled_toggle(void);

#endif /* GPIO_H_ */
