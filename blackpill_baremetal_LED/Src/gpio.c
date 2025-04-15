#include "gpio.h" //Import gpio header for register definitions

void gpio_init(void) //Initializing GPIO pin(s)
{
	RCC_AHB1ENR |= (1U<<2); //Bitwise OR operation to make bit 2 to become 1, enabling RCC for GPIOC

	//Setting "01" to MODE13[1:0] to set PC13 (user LED) as GPIO output
	GPIOC_MODER |= (1U<<26); //Setting 26th bit of GPIOC_MODER register to 1
	GPIOC_MODER &= ~(1U<<27); //Setting 27th bit of GPIOC_MODER register to 0
}

void gpio_userled_toggle(void) //Make LED ON if OFF before or OFF if ON before
{
	GPIOC_ODR ^= (1U<<13); //Bitwise XOR operation which results in flipping the state of the 13th bit while not affecting rest of the bits of GPIOC_ODR register
}
