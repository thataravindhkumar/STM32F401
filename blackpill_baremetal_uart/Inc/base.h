#ifndef BASE_H_
#define BASE_H_

#define PERIPHERAL_BASE (0x40000000) //Starting address of the "first" peripheral

#define APB2_BUS_OFFSET (0x00007400)
#define APB2_BUS (PERIPHERAL_BASE + APB2_BUS_OFFSET) //Starting address of the "first" peripheral connected to APB2 bus

#define USART1_PERIPHERAL_OFFSET (0x00009C00)
#define USART1_PERIPHERAL (APB2_BUS + USART1_PERIPHERAL_OFFSET) //Starting address of USART1 peripheral

#define AHB1_BUS_OFFSET (0x00020000)
#define AHB1_BUS (PERIPHERAL_BASE + AHB1_BUS_OFFSET) //Starting address of the "first" peripheral connected to AHB1 bus

#define GPIOA_PERIPHERAL_OFFSET (0x00000000)
#define GPIOA_PERIPHERAL (AHB1_BUS + GPIOA_PERIPHERAL_OFFSET) //Starting address of GPIOA peripheral

#define RCC_PERIPHERAL_OFFSET (0x00003800)
#define RCC_PERIPHERAL (AHB1_BUS + RCC_PERIPHERAL_OFFSET) //Starting address of RCC peripheral

#endif /* BASE_H_ */
