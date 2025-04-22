#include "gpio.h"
#include "exti.h"

int main()
{
	gpio_init();
	exti_init();

	while(1)
	{
		exti0_handler();
	}

	return 0;
}
