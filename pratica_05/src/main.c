/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/02/2017 20:05:55
 *       Revision:  none
 *       Compiler:  arm-none-eabi-gcc
 *
 *         Author:  Francisco Helder (FHC), helderhdw@gmail.com
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#include	"uart.h"
#include 	"timer.h"
#include "interrupt.h"

/*****************************************************************************
**                INTERNAL MACRO DEFINITIONS
*****************************************************************************/
#define TIMER_DELAY		5000
/*****************************************************************************
**                INTERNAL FUNCTION PROTOTYPES
*****************************************************************************/
	
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main(void){
	/*-----------------------------------------------------------------------------
	 *  initialize UART and GPIO modules
	 *-----------------------------------------------------------------------------*/
	uartInitModule(UART0, 115200, STOP1, PARITY_NONE, FLOW_OFF);
	
	/* This function will enable clocks for the DMTimer7 instance */
  DMTimerModuleClkConfig();

#ifdef DELAY_USE_INTERRUPTS
  /* Enable IRQ in CPSR */
  IntMasterIRQEnable();

  /* Initialize the ARM interrupt control */
  IntAINTCInit();
#endif

    /* Perform the necessary configurations for DMTimer */
  DMTimerSetUp();
	
	uartPutString(UART0,"Timer Pratical\r\n",16);
  
	while(TRUE){
		
			uartPutString(UART0,"start\r\n",7);

		  /* Pause for 5s */
      Delay(TIMER_DELAY);

			uartPutString(UART0,"stop\r\n",6);

  }
	
	return(0);
} /* ----------  end of function main  ---------- */

