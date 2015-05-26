/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : SPI1.c
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
** @file SPI1.c
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

/* MODULE SPI1. */

#include "SPI1.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"


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
void SPI1_Init(void)
{
  /* SIM_SCGC6: SPI1=1 */
  SIM_SCGC6 |= SIM_SCGC6_SPI1_MASK;
  /* SPI1_MCR: MSTR=0,CONT_SCKE=0,DCONF=0,FRZ=0,MTFE=0,PCSSE=0,ROOE=0,??=0,??=0,PCSIS=0,DOZE=0,MDIS=0,DIS_TXF=0,DIS_RXF=0,CLR_TXF=0,CLR_RXF=0,SMPL_PT=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,HALT=1 */
  SPI1_MCR = SPI_MCR_DCONF(0x00) |
             SPI_MCR_PCSIS(0x00) |
             SPI_MCR_SMPL_PT(0x00) |
             SPI_MCR_HALT_MASK;
  /* SPI1_MCR: MSTR=1,CONT_SCKE=0,DCONF=0,FRZ=0,MTFE=0,PCSSE=0,ROOE=0,??=0,??=0,PCSIS=0x0F,DOZE=0,MDIS=0,DIS_TXF=0,DIS_RXF=0,CLR_TXF=1,CLR_RXF=1,SMPL_PT=1,??=0,??=0,??=0,??=0,??=0,??=0,??=0,HALT=1 */
  SPI1_MCR = SPI_MCR_MSTR_MASK |
             SPI_MCR_DCONF(0x00) |
             SPI_MCR_PCSIS(0x0F) |
             SPI_MCR_CLR_TXF_MASK |
             SPI_MCR_CLR_RXF_MASK |
             SPI_MCR_SMPL_PT(0x01) |
             SPI_MCR_HALT_MASK;
  /* SPI1_TCR: SPI_TCNT=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0 */
  SPI1_TCR = SPI_TCR_SPI_TCNT(0x00);
  /* SPI1_CTAR0: DBR=1,FMSZ=7,CPOL=0,CPHA=0,LSBFE=0,PCSSCK=0,PASC=0,PDT=0,PBR=0,CSSCK=0,ASC=0,DT=0,BR=0 */
  SPI1_CTAR0 = SPI_CTAR_DBR_MASK |
               SPI_CTAR_FMSZ(0x07) |
               SPI_CTAR_PCSSCK(0x00) |
               SPI_CTAR_PASC(0x00) |
               SPI_CTAR_PDT(0x00) |
               SPI_CTAR_PBR(0x00) |
               SPI_CTAR_CSSCK(0x00) |
               SPI_CTAR_ASC(0x00) |
               SPI_CTAR_DT(0x00) |
               SPI_CTAR_BR(0x00);
  /* SPI1_CTAR1: DBR=0,FMSZ=0x0F,CPOL=0,CPHA=0,LSBFE=0,PCSSCK=0,PASC=0,PDT=0,PBR=0,CSSCK=0,ASC=0,DT=0,BR=0 */
  SPI1_CTAR1 = SPI_CTAR_FMSZ(0x0F) |
               SPI_CTAR_PCSSCK(0x00) |
               SPI_CTAR_PASC(0x00) |
               SPI_CTAR_PDT(0x00) |
               SPI_CTAR_PBR(0x00) |
               SPI_CTAR_CSSCK(0x00) |
               SPI_CTAR_ASC(0x00) |
               SPI_CTAR_DT(0x00) |
               SPI_CTAR_BR(0x00);
  /* SPI1_SR: TCF=1,TXRXS=1,??=0,EOQF=1,TFUF=1,??=0,TFFF=1,??=0,??=0,??=0,??=0,??=0,RFOF=1,??=0,RFDF=1,??=0,TXCTR=0,TXNXTPTR=0,RXCTR=0,POPNXTPTR=0 */
  SPI1_SR = SPI_SR_TCF_MASK |
            SPI_SR_TXRXS_MASK |
            SPI_SR_EOQF_MASK |
            SPI_SR_TFUF_MASK |
            SPI_SR_TFFF_MASK |
            SPI_SR_RFOF_MASK |
            SPI_SR_RFDF_MASK |
            SPI_SR_TXCTR(0x00) |
            SPI_SR_TXNXTPTR(0x00) |
            SPI_SR_RXCTR(0x00) |
            SPI_SR_POPNXTPTR(0x00);
  /* SPI1_RSER: TCF_RE=0,??=0,??=0,EOQF_RE=0,TFUF_RE=0,??=0,TFFF_RE=1,TFFF_DIRS=1,??=0,??=0,??=0,??=0,RFOF_RE=0,??=0,RFDF_RE=1,RFDF_DIRS=1,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0 */
  SPI1_RSER = SPI_RSER_TFFF_RE_MASK |
              SPI_RSER_TFFF_DIRS_MASK |
              SPI_RSER_RFDF_RE_MASK |
              SPI_RSER_RFDF_DIRS_MASK;
  /* SPI1_MCR: HALT=0 */
  SPI1_MCR &= (uint32_t)~(uint32_t)(SPI_MCR_HALT_MASK);
}


/* END SPI1. */
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
