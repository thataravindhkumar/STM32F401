#include "gpio.h"

void gpio_init()
{
	//Providing clock to GPIOA
	RCC_AHB1ENR |= (1U<<0);

	//Configuring PA9 as alternate function (USART1_TX) by writing 01 in MODER9[1:0]
	GPIOA_MODER |= (1U<<19);
	GPIOA_MODER &= ~(1U<<18);

	//Configuring PA10 as alternate function (USART1_RX) by writing 01 in MODER10[1:0]
	GPIOA_MODER |= (1U<<21);
	GPIOA_MODER &= ~(1U<<20);

	//Choosing USART1_TX as the alternate function for PA9
	GPIOA_AFRH = (GPIOA_AFRH & ~(0x1111<<4))|(7U<<4);

	//Choosing USART1_RX as the alternate function for PA10
	GPIOA_AFRH = (GPIOA_AFRH & ~(0X1111<<8))|(7U<<8);
}
