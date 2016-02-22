/*
 * File: tpm.c
 *
 * Description
 *
 * Author
 * Derek Janzen (djanzen@asu.edu)
 * Computer Systems Engineering
 *
 */
#include "tpm.h"

void tpm_busy_delay_us(uint32_t p_delay_us)
{
		SIM_SCGC6 |= 1 << 24;
		//SIM_SOPT2 = 0;
		SIM_SOPT2 |= 0b11 << 24;
		TPM0_SC &= ~(0b11 << 3);
		TPM0_SC |= 0b01000010;
		TPM0_CNT = 0b000000000000000;
		TPM0_MOD = p_delay_us - 1;
		TPM0_CONF &= ~(0b11 << 16);

		while(~TPM0_SC & TPM_SC_TOF_MASK) {}
		TPM0_SC |= 1 << 7;
		
}

void tpm_busy_delay_ms(uint32_t p_delay_ms)
{
	SIM_SCGC6 |= 1 << 24;
	//SIM_SOPT2 = 0;
	SIM_SOPT2 |= 0b11 << 24;
	TPM0_SC &= ~(0b11 << 3);
	TPM0_SC |= 0b010000010;
	TPM0_CNT = 0b000000000000000;
	TPM0_MOD = 999;
	TPM0_CONF &= ~(0b11 << 16);
	TPM0_SC |= (0b01 << 3);
	for(uint32_t i = 0; i < p_delay_ms; i++)
	{
		while(~TPM0_SC & TPM_SC_TOF_MASK) {}
		TPM0_SC |= 1 << 7;
	}
}
