#ifndef UART_H_
#define UART_H_

#include "base.h"

//Defining the status register
#define USART_SR_OFFSET (0x00)
#define USART_SR (*(volatile unsigned int *)(USART1_PERIPHERAL + USART_SR_OFFSET))

//Defining the control register 1
#define USART_CR1_OFFSET (0x0C)
#define USART_CR1 (*(volatile unsigned int *)(USART1_PERIPHERAL + USART_CR1_OFFSET))

//Defining the baud rate register
#define USART_BRR_OFFSET (0x08)
#define USART_BRR (*(volatile unsigned int *)(USART1_PERIPHERAL + USART_BRR_OFFSET))

//Defining the data register
#define USART_DR_OFFSET (0x04)
#define USART_DR (*(volatile unsigned int *)(USART1_PERIPHERAL + USART_DR_OFFSET))

//This register provides clock to USART peripheral
#define RCC_APB2ENR_OFFSET (0x44)
#define RCC_APB2ENR (*(volatile unsigned int *)(RCC_PERIPHERAL + RCC_APB2ENR_OFFSET))

//Function prototypes
void uart_init(void);
char uart_read();
void uart_write();

#endif /* UART_H_ */
