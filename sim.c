/*
 * File: sim.c
 *
 * Description
 * Starts the clock for the program
 * Author
 * Derek Janzen (djanzen@asu.edu)
 * Computer Systems Engineering
 * CSE 325 Embedded Microprocessor Systems Fall 2015
 *
 */
#include "sim.h"

void uc_sim_clk()
{
	SIM_BASE_PTR->SCGC5 = 1 << 10;
}
