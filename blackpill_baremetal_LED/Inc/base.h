#ifndef BASE_H_
#define BASE_H_

#define PERIPHERAL_BASE (0x40000000) //Starting address of all peripherals

#define AHB1_PERIPHERAL_OFFSET (0x00020000) //Starting Address of AHB1 peripheral - Starting address of all peripherals
#define AHB1_PERIPHERAL (PERIPHERAL_BASE + AHB1_PERIPHERAL_OFFSET) //Starting address of AHB1 peripheral

#define GPIOC_PERIPHERAL_OFFSET (0x00000800) //Starting Address of GPIOC peripheral - Starting address of AHB1 peripheral
#define GPIOC_PERIPHERAL (AHB1_PERIPHERAL + GPIOC_PERIPHERAL_OFFSET) //Starting address of GPIOC peripheral

#define RCC_PERIPHERAL_OFFSET (0x00003800) //Starting Address of RCC peripheral - Starting address of AHB1 peripheral
#define RCC_PERIPHERAL (AHB1_PERIPHERAL + RCC_PERIPHERAL_OFFSET) //Starting Address of RCC peripheral

#endif /* BASE_H_ */
