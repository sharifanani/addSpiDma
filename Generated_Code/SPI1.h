/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : SPI1.h
**     Project     : k60_spi_dma
**     Processor   : MK60DN512VLQ10
**     Component   : Init_SPI
**     Version     : Component 01.006, Driver 01.06, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-05-26, 16:04, # CodeGen: 50
**     Abstract    :
**          This file implements the SPI (SPI1) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : SPI1
**          Device                                         : SPI1
**          Settings                                       : 
**            Clock gate                                   : Enabled
**            Configuration 0                              : Master
**              Clock setting                              : 
**                Baud rate prescaler                      : divide by 2
**                Double baud rate                         : Enabled
**                Baud rate scaler                         : divide by 2
**                DSPI frequency                           : 10.486 MHz
**                PCS to SCK delay prescaler               : divide by 1
**                PCS to SCK delay scaler                  : divide by 2
**                PCS to SCK delay                         : 0.095 us
**                After SCK delay prescaler                : divide by 1
**                After SCK delay scaler                   : divide by 2
**                After SCK delay                          : 0.095 us
**                Delay after transfer prescaler           : divide by 1
**                Delay after transfer scaler              : divide by 2
**                Delay after transfer                     : 0.095 us
**              Transfer size                              : 8
**              Clock polarity                             : Low
**              Clock phase                                : Capture on leading edge
**              LSB first                                  : Disabled
**            Configuration 1                              : Master
**              Clock setting                              : 
**                Baud rate prescaler                      : divide by 2
**                Double baud rate                         : Disabled
**                Baud rate scaler                         : divide by 2
**                DSPI frequency                           : 5.243 MHz
**                PCS to SCK delay prescaler               : divide by 1
**                PCS to SCK delay scaler                  : divide by 2
**                PCS to SCK delay                         : 0.095 us
**                After SCK delay prescaler                : divide by 1
**                After SCK delay scaler                   : divide by 2
**                After SCK delay                          : 0.095 us
**                Delay after transfer prescaler           : divide by 1
**                Delay after transfer scaler              : divide by 2
**                Delay after transfer                     : 0.095 us
**              Transfer size                              : 16
**              Clock polarity                             : Low
**              Clock phase                                : Capture on leading edge
**              LSB first                                  : Disabled
**            Master mode                                  : Enabled
**            Continuous SCK                               : Disabled
**            Freeze                                       : Do not halt transfers
**            Doze                                         : Disabled
**            Modified timing format                       : Disabled
**            Peripheral chip select strobe                : Disabled
**            Rx FIFO overflow overwrite                   : Disabled
**            PCS0 inactive level                          : High
**            PCS1 inactive level                          : High
**            PCS2 inactive level                          : High
**            PCS3 inactive level                          : High
**            TxFIFO                                       : Enabled
**            RxFIFO                                       : Enabled
**            Sample point                                 : 1 system clock
**          Pins                                           : 
**            Data input pin                               : Enabled
**              Pin                                        : ADC1_SE7a/PTE3/SPI1_SIN/UART1_RTS_b/SDHC0_CMD/FB_AD24/SPI1_SOUT
**              Pin signal                                 : 
**            Data output pin                              : Enabled
**              Pin                                        : ADC1_SE5a/PTE1/LLWU_P0/SPI1_SOUT/UART1_RX/SDHC0_D0/FB_AD26/I2C1_SCL/SPI1_SIN
**              Pin signal                                 : 
**            Clock output pin                             : Enabled
**              Pin                                        : ADC1_SE6a/PTE2/LLWU_P1/SPI1_SCK/UART1_CTS_b/SDHC0_DCLK/FB_AD25
**              Pin signal                                 : 
**            Peripheral select 0 pin                      : Enabled
**              Pin                                        : PTE4/LLWU_P2/SPI1_PCS0/UART3_TX/SDHC0_D3/FB_CS3_b/FB_BE7_0_b/FB_TA_b
**              Pin signal                                 : 
**            Peripheral select 1 pin                      : Disabled
**            Peripheral select 2 pin                      : Disabled
**            Peripheral select 3 pin                      : Disabled
**          Interrupts/DMA                                 : 
**            Interrupt                                    : INT_SPI1
**            Interrupt request                            : Disabled
**            Interrupt priority                           : 3
**            ISR Name                                     : <Automatic>
**            DSPI finished interrupt                      : Disabled
**            Transmission complete interrupt              : Disabled
**            Tx FIFO fill request                         : Enabled
**            Tx FIFO fill request type                    : DMA
**            Tx FIFO underflow interrupt                  : Disabled
**            Rx FIFO drain request                        : Enabled
**            Rx FIFO drain request type                   : DMA
**            Rx FIFO overflow interrupt                   : Disabled
**          Initialization                                 : 
**            Transfer counter                             : 0
**            Module disable                               : no
**            Halt                                         : no
**            Call Init method                             : no
**     Contents    :
**         Init - void SPI1_Init(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file SPI1.h
** @version 01.06
** @brief
**          This file implements the SPI (SPI1) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup SPI1_module SPI1 module documentation
**  @{
*/         

#ifndef SPI1_H_
#define SPI1_H_

/* MODULE SPI1. */

/* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

/* Peripheral base address parameter */
#define SPI1_DEVICE SPI1_BASE_PTR


/*
** ===================================================================
**     Method      :  SPI1_Init (component Init_SPI)
**     Description :
**         This method initializes registers of the SPI module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void SPI1_Init(void);


/* END SPI1. */
#endif /* #ifndef __SPI1_H_ */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
