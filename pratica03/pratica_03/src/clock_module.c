/*
 * =====================================================================================
 *
 *       Filename:  control_module.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/02/2017 19:43:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Francisco Helder (FHC), helderhdw@gmail.com
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#include "clock_module.h"
#include "hw_types.h"
#include "soc_AM335x.h"


static bool ckmCheckValidModule(CKM_MODULE_REG module){
	if((module > CKM_PER_CLK_24MHZ_CLKSTCTRL)){
      		return(false);
   	}
   	return(true);
}

void ckmSetCLKModuleRegister(CKM_MODULE_REG module, unsigned int value){ //0x0AC, 0b00000000000001000000000000000010 
   	if(ckmCheckValidModule(module)){
      		unsigned int addr_temp = SOC_CM_PER_REGS + module;    // clock module base + module offset, TRM 2.1 & 8.1.12.1 ;0x44E00000 + 0x0AC = 0x44E000AC
		HWREG(addr_temp) |= value; // = 0x44E400AE
   	}
}

unsigned int ckmGetCLKModuleRegister(CKM_MODULE_REG module){
   	if(ckmCheckValidModule(module)){
      		unsigned int addr_temp = SOC_CM_PER_REGS + module;    // clock module base + module offset, TRM 2.1 & 8.1.12.1
      		return(HWREG(addr_temp));
   	}
   	return(0);
}

