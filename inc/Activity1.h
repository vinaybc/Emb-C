/**
 * @file Activity1.h
 * @author Vinay B C
 * @brief Project to check whether the person has seated and turned on the Temperature sensor by indicating it on LED
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */
#define F_CPU 16000000UL 	/**< to Define the Clock Frequency as 16 MHz */
#define HIGH 	(1)			/**< GPIO state HIGH */
#define LOW 	(0)			/**< GPIO state LOW */

/**
 * Include files
 */ 
#include <avr/io.h>
#include <util/delay.h>


/**
 * Function Definitions
 */

/**
 * @brief Function to configure the IO Pins for input and output
 */
void setup_io_pins(void);
