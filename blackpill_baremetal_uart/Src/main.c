#include "gpio.h"
#include "uart.h"

int main()
{
	char defaultMessage[] = "Hello from STM32F401RCT6!"; //Default message to print on power on
	const char* dataToSend = defaultMessage; //Pointer pointing to index 0 of dafaultMessage
	int receivedLength; //Counter / index for received characters
	char receivedMessage[100]; //Array to hold message from uart_read

	while(1)
	{
		uart_write(dataToSend); //Print default message the first time and received messages later

		if((USART_SR & (1U << 5)) != 0)//Only call uart_read() if data is ready to be read
		{
			receivedLength = 0; //Set index as 0
			char ch; //Temporary buffer to hold a single character

			do
			{
				ch = uart_read(); //Get one character from received message
				receivedMessage[receivedLength++] = ch; //Store that character in the appropriate index and increment the index for next character
			} while(ch!='\n' && receivedLength < 99); //Break loop if received a newline character or if the buffer is full

			receivedMessage[receivedLength] = '\0'; //Write null character at the end for uart_write to function properly

			dataToSend = receivedMessage; //Change pointer to point at received character now
		}
	}
	return 0;
}
