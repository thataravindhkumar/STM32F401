#ifndef BASE_H_
#define BASE_H_

#define PERIPHERAL_BASE (0x40000000) //Starting address of all peripherals

#define AHB1_PERIPHERAL_OFFSET (0x00020000) //Starting address of AHB1 - Starting address of all peripherals
#define AHB1_PERIPHERAL (PERIPHERAL_BASE + AHB1_PERIPHERAL_OFFSET) // Starting address of AHB1

#define GPIOC_OFFSET (0x00000800) //Starting address of GPIOC - Starting address of AHB1
#define GPIOC (AHB1_PERIPHERAL + GPIOC_OFFSET) //Starting address of GPIOC

#define GPIOA_OFFSET (0x00000000) //Starting address of GPIOA - Starting address of AHB1
#define GPIOA (AHB1_PERIPHERAL + GPIOA_OFFSET) //Starting address of GPIOA

#define RCC_OFFSET (0x00003800) //Starting address of RCC - Starting address of AHB1
#define RCC (AHB1_PERIPHERAL + RCC_OFFSET) //Starting address of RCC

#define APB2_PERIPHERAL_OFFSET (0x00007400) //Starting address of APB2 - Starting address of all peripherals
#define APB2_PERIPHERAL (PERIPHERAL_BASE + APB2_PERIPHERAL_OFFSET) //Starting address of APB2

#define EXTI_OFFSET (0x00003C00) //Starting address of EXTI - Starting address of APB2
#define EXTI (APB2_PERIPHERAL + EXTI_OFFSET) //Starting address of EXTI

#define SYSCFG_OFFSET (0x0000C400) //Starting address of SYSCFG - Starting address of all peripherals
#define SYSCFG (APB2_PERIPHERAL + SYSCFG_OFFSET) //Starting address of SYSCFG

#define NVIC (0xE000E100) //Starting address of NVIC

#endif /* BASE_H_ */
