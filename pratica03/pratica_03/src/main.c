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

#include	"gpio.h"


/*****************************************************************************
**                INTERNAL MACRO DEFINITIONS
*****************************************************************************/
#define TIME						2000000

// state machine
typedef enum _state{
			SEQ1=1,
			SEQ2,
			SEQ3,
			SEQ4,
			SEQ5
}state;

/*****************************************************************************
**                INTERNAL FUNCTION PROTOTYPES
*****************************************************************************/
static void delay();
void ledON(gpioPort  ,ucPinNumber );
void ledOFF(gpioPort ,ucPinNumber );
	
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main(void){
	unsigned int op=SEQ1, count; 
	ucPinNumber pin=21;
	
	/*-----------------------------------------------------------------------------
	 *  initialize GPIO and UART modules
	 *-----------------------------------------------------------------------------*/
	gpioInitModule(GPIO1);

	/*-----------------------------------------------------------------------------
	 *  initialize pin of mudule
	 *-----------------------------------------------------------------------------*/
	for(count=pin; count<25; count++)
					gpioPinMuxSetup(GPIO1, count, OUTPUT);

	gpioPinMuxSetup(GPIO1, 28, INPUT);

	/*-----------------------------------------------------------------------------
	 *  set pin direction 
	 *-----------------------------------------------------------------------------*/
	for(count=pin; count<25; count++)
					gpioSetDirection(GPIO1, count, OUTPUT);
	
	gpioSetDirection(GPIO1, 28, INPUT);
		
	while(true){
					switch (op) {
									case SEQ1:
													ledON(GPIO1, pin);
													delay();
													ledOFF(GPIO1, pin);
													delay();
													if(gpioGetPinValue(GPIO1, 28))
														op=SEQ2;
									break;
									case SEQ2:	
													ledON(GPIO1, pin+1);
													delay();
													ledOFF(GPIO1, pin+1);
													delay();	
													if(gpioGetPinValue(GPIO1, 28))
														op=SEQ3;
									break;
									case SEQ3:	
													ledON(GPIO1, pin+2);
													delay();
													ledOFF(GPIO1, pin+2);
													delay();	
													if(gpioGetPinValue(GPIO1, 28))
														op=SEQ4;
									break;
									case SEQ4:	
													ledON(GPIO1, pin+3);
													delay();
													ledOFF(GPIO1, pin+3);
													delay();
													if(gpioGetPinValue(GPIO1, 28))
														op=SEQ5;
									break;
									case SEQ5:
													for(count=pin; count<25; count++)
																	ledON(GPIO1, count);
													delay();
													delay();
													for(count=pin; count<25; count++)
														ledOFF(GPIO1, count);
													delay();
													delay();
													if(gpioGetPinValue(GPIO1, 28))
														op=SEQ1;
									break;
								default:	
									break;
					}				/* -----  end switch  ----- */
	}

	return(0);
} /* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ledON
 *  Description:  
 * =====================================================================================
 */
void ledON(gpioPort port, ucPinNumber pin){
				gpioSetPinValue(port, pin, HIGH);	
}/* -----  end of function ledON  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ledOFF
 *  Description:  
 * =====================================================================================
 */
void ledOFF(gpioPort port,  ucPinNumber pin ){
				gpioSetPinValue(port, pin, LOW);
}/* -----  end of function ledOFF  ----- */

/*FUNCTION*-------------------------------------------------------
*
* Function Name : Delay
* Comments      :
*END*-----------------------------------------------------------*/
static void delay(){
	volatile unsigned int ra;
	for(ra = 0; ra < TIME; ra ++);
}

