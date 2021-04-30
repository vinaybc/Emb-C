/**
 * @file activity3.h
 * @author Vinay B C
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __activity3_h__
#define __activity3_h__
#include<avr/io.h>
/**
 * @brief Function definition
 * 
 * @param temp_value 
 */
void OutPWM(uint16_t temp_value);
void InitPWM(void);
#endif
