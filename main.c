/*
 *
 * Description
 * Contains run function which activates LEDS and hw_init that turns on the hardware components.
 * 
 *
 * Author
 * Derek Janzen (djanzen@asu.edu)
 * Computer Systems Engineering
 * CSE 325 Embedded Microprocessor Systems Fall 2015
 *
 */


#include "global.h"
#include "gpio.h"
#include "led.h"
#include "port.h"
#include "sim.h"
#include "tpm.h"

uint32_t DELAY = 250;
void hw_init();
void run();
int main()
{

		hw_init();
		uc_led_all_on();
		tpm_busy_delay_ms(DELAY);
		uc_led_all_off();
		run();
		return 0;
}

void hw_init() //function to configure hardware components
{
	uc_sim_clk();
	uc_port_gpio();
	uc_gpio_config(0);
	uc_gpio_config(1);
	uc_gpio_config(2);
	uc_gpio_config(3);
}

void run()
{
	while(1)
	{
		for(int i=0; i<=15; i++) //running a for loop for each of the numbers I want to count
		{
			switch(i)// case staments for each number 0-15
			{
			case 0:
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 1:
				uc_led_on(0);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 2:
				uc_led_on(1);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 3:
				uc_led_on(0);
				uc_led_on(1);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 4:
				uc_led_on(2);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 5:
				uc_led_on(0);
				uc_led_on(2);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 6:
				uc_led_on(1);
				uc_led_on(2);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 7:
				uc_led_on(0);
				uc_led_on(1);
				uc_led_on(2);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 8:
				uc_led_on(3);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 9:
				uc_led_on(0);
				uc_led_on(3);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 10:
				uc_led_on(1);
				uc_led_on(3);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 11:
				uc_led_on(0);
				uc_led_on(1);
				uc_led_on(3);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 12:
				uc_led_on(2);
				uc_led_on(3);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 13:
				uc_led_on(0);
				uc_led_on(2);
				uc_led_on(3);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 14:
				uc_led_on(1);
				uc_led_on(2);
				uc_led_on(3);
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			case 15:
				uc_led_all_on();
				tpm_busy_delay_ms(DELAY);
				uc_led_all_off();
				tpm_busy_delay_ms(DELAY);
				break;
			}
			
		}
	}
}
