#ifndef GPIO_H_
#define GPIO_H_

#include "base.h"

//This register determines type of the GPIO pin
#define GPIOA_MODER_OFFSET (0x00)
#define GPIOA_MODER (*(volatile unsigned int *)(GPIOA_PERIPHERAL + GPIOA_MODER_OFFSET))

//Alternate function choosing register of the GPIO pin
#define GPIOA_AFRH_OFFSET (0x24)
#define GPIOA_AFRH (*(volatile unsigned int *)(GPIOA_PERIPHERAL + GPIOA_AFRH_OFFSET))

//This register enables clock to the AHB1 bus which gives clock to GPIOA
#define RCC_AHB1ENR_OFFSET (0x30)
#define RCC_AHB1ENR (*(volatile unsigned int *)(RCC_PERIPHERAL + RCC_AHB1ENR_OFFSET))

//Function prototypes
void gpio_init(void);

#endif /* GPIO_H_ */
