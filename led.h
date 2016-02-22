/*
 * File: led.h
 *
 * Description
 *
 * Author
 * Derek Janzen (djanzen@asu.edu)
 * Computer Systems Engineering
 * CSE 325 Embedded Microprocessor Systems Fall 2015
 *
 */
#ifndef LED_H_
#define LED_H_
#include "global.h"

void uc_led_on(int);
void uc_led_off(int);
void uc_led_all_on();
void uc_led_all_off();

#endif
