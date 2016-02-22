/*
 * File: port.c
 *
 * Description
 * This file allows the user to configure the registers in portb to gpio.
 *
 * Author
 * Derek Janzen (djanzen@asu.edu)
 * Computer Systems Engineering
 * CSE 325 Embedded Microprocessor Systems Fall 2015
 *
 */
#include "port.h"

void uc_port_gpio()//Configuring registers 0-3 for gpio output
{
	PORTB_PCR0 |= PORT_PCR_MUX(0b001);
	PORTB_PCR1 |= PORT_PCR_MUX(0b001);
	PORTB_PCR2 |= PORT_PCR_MUX(0b001);
	PORTB_PCR3 |= PORT_PCR_MUX(0b001);
}

