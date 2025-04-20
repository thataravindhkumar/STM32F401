#ifndef EXTI_H_
#define EXTI_H_

#include "base.h"

#define EXTI_IMR_OFFSET (0x00) //Define the address of EXTI_IMR register
#define EXTI_IMR (*(volatile unsigned int *)(EXTI + EXTI_IMR_OFFSET))

#define EXTI_RTSR_OFFSET (0x08) //Define the address of EXTI_RTSR register
#define EXTI_RTSR (*(volatile unsigned int *)(EXTI + EXTI_RTSR_OFFSET))

#define EXTI_FTSR_OFFSET (0x0C) //Define the address of EXTI_FTSR register
#define EXTI_FTSR (*(volatile unsigned int *)(EXTI + EXTI_FTSR_OFFSET))

#define EXTI_PR_OFFSET (0x14) //Define the address of EXTI pending register
#define EXTI_PR (*(volatile unsigned int *)(EXTI + EXTI_PR_OFFSET))

#define SYSCFG_EXTICR1_OFFSET (0x08) //Define the address of SYSCFG_EXTICR1 register
#define SYSCFG_EXTICR1 (*(volatile unsigned int *)(SYSCFG + SYSCFG_EXTICR1_OFFSET))

#define NVIC_ISER0_OFFSET (0x100) //Define the address of NVIC_ISER0 register
#define NVIC_ISER0 (*(volatile unsigned int *)(NVIC + NVIC_ISER0_OFFSET))

#define RCC_APB2ENR_OFFSET (0x44) //Define address of RCC APB2 clock enable register
#define RCC_APB2ENR (*(volatile unsigned int *)(RCC + RCC_APB2ENR_OFFSET))

//Function prototypes
void exti_init(void);
void exti0_handler(void);

#endif /* EXTI_H_ */
