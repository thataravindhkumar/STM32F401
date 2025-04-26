#include "uart.h"

//This flag will be set if data is ready to be read
#define RXNE ((USART_SR >> 5)&(1U))

//This flag will set if data can be written to be transmitted
#define TXE ((USART_SR >> 7)&(1U))

void uart_init()
{
	//Providing clock access to USART peripheral bus
	RCC_APB2ENR |= (1U<<4);

	//Set oversampling by 8
	USART_CR1 |= (1U<<15);

	//1 stop bit, 8 data bits, n stop bits (n=0 by default according to to USART_CR2 register)
	USART_CR1 &= ~(1U<<12);

	//Enable interrupt to occur when data is ready to be read
	USART_CR1 = (1U<<5);

	//Enable interrupt to occur when data is ready to be written
	USART_CR1 = (1U<<7);

	//Setting 208 (11010000) in mantissa and 3 (011) in fraction to set USART_DIV register to 208.3 for 9600 baud rate
	USART_BRR = (208U<<4 | 3U<<0);

	//Enable the receiver
	USART_CR1 |= (1U<<2);

	//Enable the transmitter
	USART_CR1 |= (1U<<3);

	//Enable USART
	USART_CR1 |= (1U<<13);
}

char uart_read()
{
	//Wait till RXNE is set i.e data is ready to be read
	while(!(RXNE));

	//Return the received data
	return (USART_DR & 255U);
}

void uart_write(const char *str)
{
	while(*str)
	{
		//Wait till TXE bit is set i.e previous data has been transmitted and new data can be written
		while(!(TXE));

		//Write current character from the string
		USART_DR = (*str & 255U);

		//Move on to the next string
		str++;
	}
}
