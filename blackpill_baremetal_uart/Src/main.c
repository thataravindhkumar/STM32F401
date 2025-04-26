#include "gpio.h"
#include "uart.h"

int main()
{
	char dataToSend[] = "Hello from STM32F401RCT6!";
	uart_init();
	//uart_write(dataToSend);

	while(1)
	{
		uart_read();
	}

	return 0;
}
