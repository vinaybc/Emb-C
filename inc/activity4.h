#ifndef _ACTIVITY4_H_
#define _ACTIVITY4_H_

/**
 * @file activity4.h
 * @author Vinay B C
 * @brief Activity4 in the embedded case study
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * @brief Function to initialize UART 
 * 
 */
void USARTInit(void);

/**
 * @brief Function to Read character   
 * 
 */
//char USARTReadChar();

/**
 * @brief Function to write character   
 * @param[in] a single character
 */
//void USARTWriteChar(char);

/**
 * @brief Function to write string  
 * @param[in] a single character
 */
void USARTWriteString(char);

#endif  /* _ACTIVITY4_H_ */
