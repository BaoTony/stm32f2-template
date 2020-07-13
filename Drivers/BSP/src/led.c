/*
 * @Author: TonyJia
 * @Date: 2020-07-10 13:18:31
 * @LastEditTime: 2020-07-10 15:54:29
 * @LastEditors: TonyJia
 * @Description: 
 */
#include "led.h"

/**
 * @Name: led_init
 * @Fuction: init led 
 * @Param: void
 * @Return: none
 */
void led_init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct;

    RCC_AHB1PeriphResetCmd(RCC_AHB1Periph_GPIOA, ENABLE);

    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_100MHz;

    GPIO_Init(GPIOA, &GPIO_InitStruct);
}
