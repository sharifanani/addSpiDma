/* ###################################################################
**     Filename    : main.c
**     Project     : k60_spi_dma
**     Processor   : MK60DN512VLQ10
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-03-26, 15:21, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "SPI1.h"
#include "DMA1.h"
#include "DMACH1.h"
#include "DMACH2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "SPI2.h"
#include "ads130e08.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
uint32_t SpiDmaTxBuffer[300];
uint8_t SpiDmaRxBuffer[300];

volatile int SpiTxDmaComplete;
volatile int SpiRxDmaComplete;


/*
 * Get the address the high 16 bits of a 32 bit word
 */
//#define HIGH16_ADDR(x) (&((uint16_t*)&(x))[1])

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	LDD_TDeviceDataPtr SpiTxDmaLDD;
	LDD_TDeviceDataPtr SpiRxDmaLDD;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  SpiTxDmaLDD = DMACH1_Init(NULL);
  SpiRxDmaLDD = DMACH2_Init(NULL);

  // Enable the module in processor expert internally
  DMA1_Enable(SpiTxDmaLDD);
  DMA1_Enable(SpiRxDmaLDD);

  SpiRxDmaComplete = 0;
  SpiTxDmaComplete = 0;

  //Command will be read n registers starting at address r
  // This is a command to talk to the S25FL032P Flash part
  SpiDmaTxBuffer[0] = SPI_PUSHR_PCS(1) | SPI_PUSHR_CONT_MASK | ADS_CMD_SDATAC;	// Read Device ID (READ_ID) and following 4 registers
  SpiDmaTxBuffer[1] = SPI_PUSHR_PCS(1) | SPI_PUSHR_CONT_MASK | 0X20;		// All zero  low byte of 24 bit address
  SpiDmaTxBuffer[2] = SPI_PUSHR_PCS(1) | SPI_PUSHR_CONT_MASK | 0X03;		// Transmit an empty byte to clock in the RX byte
  SpiDmaTxBuffer[3] = SPI_PUSHR_PCS(1) | SPI_PUSHR_CONT_MASK | 0X00;
  SpiDmaTxBuffer[4] = SPI_PUSHR_PCS(1) | SPI_PUSHR_CONT_MASK | 0X00;
  SpiDmaTxBuffer[5] = SPI_PUSHR_PCS(1) | SPI_PUSHR_CONT_MASK | 0X00;
  SpiDmaTxBuffer[6] = SPI_PUSHR_PCS(1) | SPI_PUSHR_CONT_MASK | 0X00;
  SpiDmaTxBuffer[7] = SPI_PUSHR_PCS(1) | SPI_PUSHR_CONT_MASK | 0X00;
  SpiDmaTxBuffer[8] = SPI_PUSHR_PCS(1) | SPI_PUSHR_EOQ_MASK  | 0x00;		// Transmit an empty byte to clock in the RX byte
  DMACH1_SetSourceAddress(SpiTxDmaLDD, &SpiDmaTxBuffer[0]);
  DMACH1_SetDestinationAddress(SpiTxDmaLDD, &SPI2_PUSHR);

  DMACH2_SetSourceAddress(SpiRxDmaLDD, &SPI2_POPR);
  DMACH2_SetDestinationAddress(SpiRxDmaLDD, &SpiDmaRxBuffer[0]);

  /*Replacing with DMA1_SetRequestCount(Channel,RequestCount)*/
  DMACH1_SetTransactionCount(SpiTxDmaLDD,1);
  DMACH2_SetTransactionCount(SpiRxDmaLDD,1);
  DMACH1_SetRequestCount(SpiTxDmaLDD, 1);
  DMACH2_SetRequestCount(SpiRxDmaLDD, 1);	// We care about 2 bytes, but we are going to get a receive for every
   	  	  	  	  	  	  	// transmit byte
//  DMA1_SetRequestCount(SpiTxDmaLDD,7);
//  DMA1_SetRequestCount(SpiRxDmaLDD,7);
  DMA1_EnableRequest(SpiRxDmaLDD);
  DMA1_EnableRequest(SpiTxDmaLDD);



//  DMACH1_GetTransferCompleteStatus(SpiRxDmaLDD);
//  DMACH1_GetTransferCompleteStatus(SpiTxDmaLDD);

  while(!SpiRxDmaComplete | !SpiTxDmaComplete);
  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.11]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
