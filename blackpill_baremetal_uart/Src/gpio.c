#include "gpio.h"

void gpio_init()
{
	//Configuring PA9 as alternate function (USART1_TX) by writing 01 in MODER9[1:0]
	GPIOA_MODER |= (1U<<19);
	GPIOA_MODER &= ~(1U<<18);

	//Configuring PA10 as alternate function (USART1_RX) by writing 01 in MODER10[1:0]
	GPIOA_MODER |= (1U<<21);
	GPIOA_MODER &= ~(1U<<20);

	//Choosing USART1_TX as the alternate function for PA9
	GPIOA_AFRH
}
