#include "led.h"

void LED_Config(void)
{

	RCC->APB2ENR |= 0x00000010;

    GPIOC->CRL |= 0x33333333;

    GPIOC->ODR |= 0xFF00; 
}


void LED_SetState(u8 stateValue)
{    
    GPIOC->BSRR = (u16)stateValue & 0x00FF;
    GPIOC->BRR =  ~((u16)stateValue & 0x00FF);                  
}

