#ifndef ADC_DRIVER_H
#define ADC_DRIVER_H
#define ADDR_BaseAddr 0x40034010 //This will be used to read values from multiple channels
#define ADCR_BaseAddr 0x40034000 //This will be used to select the operating mode and the channel for conversion
#define PINSEL0_Addr 0x4002C000 //PINSEL0, PINSEL1 ,PINSEL3 will be  used to configure the channel
#define PINSEL1_Addr 0x4002C004
#define PINSEL3_Addr 0x4002C00C
#define PowerControl_Addr 0x400FC0C4 //This will be used to power the ADC
#define PeripheralClock_Addr 0x400FC1A8

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

void ADC_Init(uint8 ,uint8);
uint16 ADC_ReadValue(uint8 ); 
void ADC_Delay(void);

#endif
