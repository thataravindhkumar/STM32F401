#include "gpio.h" //Import gpio header for calling gpio related functions

void delay(void) //An approximate 1 second delay using empty for loops
{
	for(int i = 0; i<13000; i++)
	{
		for(int j = 0; j<100; j++);
	}
}

int main(void)
{
	gpio_init();
    while(1)
    {
    	gpio_userled_toggle();
    	delay();
    }
}

