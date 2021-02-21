/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

uint32_t *pNVIC_IserBase = (unit32_t*) 0xE000E100; // Initial address for Interrupt Set-enable Registers
uint32_t *pNVIC_IsprBase = (unit32_t*) 0xE000E200; // Initial address for Interrupt Set-pending Registers
uint32_t *pNVIC_IprBase  = (unit32_t*) 0xE000E400; // Initial address for Interrupt Priority Registers

int main(void)
{
    printf("Interrupt Priority Exercise\n");

	/* Loop forever */
	for(;;);
}
