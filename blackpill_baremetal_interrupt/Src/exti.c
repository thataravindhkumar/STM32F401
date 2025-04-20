#include "exti.h"
#include "gpio.h"

void exti_init()
{
	RCC_APB2ENR |= (1U<<14); //System configuration controller clock enabled

	EXTI_IMR |= (1U<<0); //Interrupt request from line 0 is unmasked
	EXTI_RTSR &= ~(1U<<0); //Rising trigger disabled (for Event and Interrupt) for input line 0
	EXTI_FTSR |= (1U<<0); //Falling trigger enabled (for Event and Interrupt) for input line 0

	//Configuring PA0 as source input for the EXTI0 external interrupt
	SYSCFG_EXTICR1 &= ~(1U<<0);
	SYSCFG_EXTICR1 &= ~(1U<<1);
	SYSCFG_EXTICR1 &= ~(1U<<2);
	SYSCFG_EXTICR1 &= ~(1U<<3);

	NVIC_ISER0 |= (1U<<6); //Enable interrupt for EXTI0
}

void exti0_handler() //Function for handling the interrupt
{
	if(EXTI_PR & (1U<<0)) //Checking whether the interrupt flag at EXTI line 0 has been set
	{
		gpio_userled_toggle(); //If the flag is set, call the userled toggle function
		EXTI_PR |= (1U<<0); //After toggling, clear the interrupt flag by writing 1 (yes its 1 and not 0)
	}
}
