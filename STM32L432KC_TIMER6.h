//STM32L432KC_TIM6.h
//Header for TIM6 functions

#ifndef STM32L4_TIM6_H
#define STM32L4_TIM6_H

#include <stdint.h>

#define __IO volatile

//Base Address

#define TIM6_BASE (0x40001000)

//Bit Field

typedef struct{
  __IO uint32_t CR1; //0x00
  __IO uint32_t CR2; //0x04
  __IO uint32_t RESERVED1; //0x08
  __IO uint32_t DIER; //0x0C
  __IO uint32_t SR; //0x10
  __IO uint32_t EGR; //0x14
  __IO uint32_t RESERVED2; //0x18
  __IO uint32_t RESERVED3; //0x20
  __IO uint32_t CNT; //0x24
  __IO uint32_t PSC; //0x028
  __IO uint32_t ARR; //0x2C

} TIM6_Typedef;

#define TIM6 ((TIM6_Typedef *) TIM6_BASE)



