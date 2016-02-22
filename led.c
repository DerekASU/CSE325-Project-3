/*
 * File: led.c
 *
 * Description
 * Functions for turning on and off LEDs
 * Author
 * Derek Janzen (djanzen@asu.edu)
 * Computer Systems Engineering
 * CSE 325 Embedded Microprocessor Systems Fall 2015
 *
 */
#include "led.h"

void uc_led_on(int n)//turning on individual LEDs
{
	GPIOB_PDOR |= 1 << n;
}

void uc_led_off(int n)//turning off individual LEDs
{
	GPIOB_PDOR &= ~(1 << n);
}

void uc_led_all_off()//turning off all LEDs 
{
	uc_led_off(0);
	uc_led_off(1);
	uc_led_off(2);
	uc_led_off(3);
}

void uc_led_all_on()//turning on all LEDs
{
	uc_led_on(0);
	uc_led_on(1);
	uc_led_on(2);
	uc_led_on(3);
}
