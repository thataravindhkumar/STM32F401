#include "gpio.h" //Import gpio header for register definitions

void gpio_init()
{
	//Enabling clock for GPIOC and GPIOA
	RCC_AHB1ENR |= (1U<<2);
	RCC_AHB1ENR |= (1U<<0);

	//Setting PC13 (user LED) as GPIO output
	GPIOC_MODER |= (1U<<26);
	GPIOC_MODER &= ~(1U<<27);

	//Setting PA0 (user button) as GPIO input
	GPIOA_MODER |= (0U<<0);
	GPIOA_MODER |= (0U<<1);
}

void gpio_userled_on()
{
	GPIOC_ODR |= (1U<<13);
}

void gpio_userled_off()
{
	GPIOC_ODR &= ~(1U<<13);
}
