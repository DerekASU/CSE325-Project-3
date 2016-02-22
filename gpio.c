/*
 * File: gpio.c
 *
 * Description
 * Allows user to configure specific ports for output.
 *
 * Author
 * Derek Janzen (djanzen@asu.edu)
 * Computer Systems Engineering
 * CSE 325 Embedded Microprocessor Systems Fall 2015
 *
 */
#include "gpio.h"

void uc_gpio_config(int n) //function to configure the specific gpio ports for output.
{
	PTB_BASE_PTR->PDDR |= 1 << n;
}
