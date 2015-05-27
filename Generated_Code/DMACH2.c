/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : DMACH2.c
**     Project     : k60_spi_dma
**     Processor   : MK60DN512VLQ10
**     Component   : DMAChannel_LDD
**     Version     : Component 01.053, Driver 01.01, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-05-27, 11:58, # CodeGen: 53
**     Abstract    :
**          This embedded component implements
**          a DMA transfer channel descriptor definition.
**     Settings    :
**          Component name                                 : DMACH2
**          Hardware request                               : Enabled
**            Request source                               : SPI2_Receive_DMA_Request
**            Request periodic trigger                     : Disabled
**          Channel select                                 : Fixed
**            DMA controller device                        : DMA1
**            Channel                                      : DMA_Channel1
**            Allocate channel                             : yes
**            Arbitration type                             : Fixed
**              Priority                                   : 1
**            Interrupt service                            : Enabled
**              Transfer complete interrupt                : 
**                Interrupt vector                         : INT_DMA1
**                Interrupt priority                       : 8
**              Error interrupt                            : 
**                Interrupt vector                         : INT_DMA_Error
**                Interrupt priority                       : medium priority
**          External object declaration                    : (string list)
**          Source transaction settings                    : 
**            Start address                                : 0
**            Transaction size                             : 8-bits
**            Address adjustment                           : 0
**            Address modulo                               : Buffer disabled
**          Destination transaction settings               : 
**            Start address                                : 0
**            Transaction size                             : 8-bits
**            Address adjustment                           : 1
**            Address modulo                               : Buffer disabled
**          Transfer settings                              : 
**            Bandwidth control                            : No stalls
**            Transaction size                             : 8-bits
**            Transactions count                           : 1
**            Request count                                : 1
**            After request complete actions               : 
**              Channel linking                            : Disabled
**              Address adjustment                         : Disabled
**            After transfer complete actions              : 
**              Disable peripheral request                 : no
**              Channel linking                            : Disabled
**              Address adjustment                         : Disabled
**              Scatter/gather                             : Disabled
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Auto initialization                          : no
**            Half complete                                : Disabled
**            Event mask                                   : 
**              OnComplete                                 : Enabled
**              OnError                                    : Enabled
**     Contents    :
**         Init                      - LDD_TDeviceData* DMACH2_Init(LDD_TUserData *UserDataPtr);
**         Enable                    - LDD_TError DMACH2_Enable(LDD_TDeviceData *DeviceDataPtr);
**         Disable                   - LDD_TError DMACH2_Disable(LDD_TDeviceData *DeviceDataPtr);
**         EnableRequest             - LDD_TError DMACH2_EnableRequest(LDD_TDeviceData *DeviceDataPtr);
**         DisableRequest            - LDD_TError DMACH2_DisableRequest(LDD_TDeviceData *DeviceDataPtr);
**         StartTransfer             - LDD_TError DMACH2_StartTransfer(LDD_TDeviceData *DeviceDataPtr);
**         GetTransferCompleteStatus - bool DMACH2_GetTransferCompleteStatus(LDD_TDeviceData *DeviceDataPtr);
**         GetError                  - LDD_DMA_TErrorFlags DMACH2_GetError(LDD_TDeviceData *DeviceDataPtr);
**         SetSourceAddress          - LDD_TError DMACH2_SetSourceAddress(LDD_TDeviceData *DeviceDataPtr,...
**         SetDestinationAddress     - LDD_TError DMACH2_SetDestinationAddress(LDD_TDeviceData *DeviceDataPtr,...
**         SetTransactionCount       - LDD_TError DMACH2_SetTransactionCount(LDD_TDeviceData *DeviceDataPtr,...
**         SetRequestCount           - LDD_TError DMACH2_SetRequestCount(LDD_TDeviceData *DeviceDataPtr,...
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
** @file DMACH2.c
** @version 01.01
** @brief
**          This embedded component implements
**          a DMA transfer channel descriptor definition.
*/         
/*!
**  @addtogroup DMACH2_module DMACH2 module documentation
**  @{
*/         

/* MODULE DMACH2. */

#include "Events.h"
#include "DMACH2.h"
/* {Default RTOS Adapter} No RTOS includes */

#define DMACH2_INIT_EVENTS_MASK ((LDD_TEventMask)( \
          LDD_DMA_ON_COMPLETE | \
          LDD_DMA_ON_ERROR))

/* Channel configuration structure */
DMA1_TChnInit const DMACH2_ChInit = {
  /* Logical channel number */
  DMA1_STATIC_CHANNEL_1,               /* Phy channel: DMA_Channel1 */
  { /* TCD initial settings */
    DMA_SADDR_SADDR(0x00),             /* TCD_SADDR register initial value */
    DMA_SOFF_SOFF(0x00),               /* TCD_SOFF register initial value */
    ( DMA_ATTR_SMOD(0x00) |
      DMA_ATTR_SSIZE(0x00) |
      DMA_ATTR_DMOD(0x00) |
      DMA_ATTR_DSIZE(0x00)
    ),                                 /* TCD_ATTR register initial value */
    DMA_NBYTES_MLNO_NBYTES(0x01),      /* TCD_NBYTES_MLNO register initial value */
    DMA_SLAST_SLAST(0x00),             /* TCD_SLAST register initial value */
    DMA_DADDR_DADDR(0x00),             /* TCD_DADDR register initial value */
    DMA_DOFF_DOFF(0x01),               /* TCD_DOFF register initial value */
    (DMA_CITER_ELINKYES_LINKCH(0x00) | DMA_CITER_ELINKYES_CITER(0x01)), /* TCD_CITER_ELINKYES register initial value */
    DMA_DLAST_SGA_DLASTSGA(0x00),      /* TCD_DLASTSGA register initial value */
    (DMA_CSR_BWC(0x00) | DMA_CSR_MAJORLINKCH(0x00) | DMA_CSR_INTMAJOR_MASK), /* TCD_CSR register initial value */
    (DMA_BITER_ELINKYES_LINKCH(0x00) | DMA_BITER_ELINKYES_BITER(0x01)) /* TCD_BITER_ELINKYES register initial value */
  },
  /* DMAMUX initial settings */
  (DMAMUX_CHCFG_ENBL_MASK | DMAMUX_CHCFG_SOURCE(0x14)), /* DMA multiplexor configuration register initial value 'SPI2_Receive_DMA_Request' */
  { /* Events initial setting */
    &DMACH2_OnComplete,                /* OnComplete callback address */
    &DMACH2_OnError                    /* OnComplete callback address */
  },
  TRUE                                 /* Channel state variable initial value */
};

/*
** ===================================================================
**     Method      :  DMACH2_Init (component DMAChannel_LDD)
*/
/*!
**     @brief
**         Initializes the DMAChannel_LDD component. This method
**         allocates no memory. Memory for all DMA used channles is
**         allocated by DMAController componet .
**         This method can be called only once. Before the second call
**         of Init() the Deinit() must be called first.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     @return
**                         - Device data structure pointer.
*/
/* ===================================================================*/
LDD_TDeviceData* DMACH2_Init(LDD_TUserData *UserDataPtr)
{
  LDD_TDeviceData                 *DevDataPtr; /* DMA device data structure pointer */
  LDD_TDeviceData                 *ChnDevDataPtr; /* DMA channel device data structure pointer */

  DevDataPtr = PE_LDD_DeviceDataList[PE_LDD_COMPONENT_DMA1_ID]; /* Get DMA peripheral handle */
  if (DevDataPtr == NULL) {            /* Is DMA peripheral initialized? */
    DevDataPtr = DMA1_Init();          /* No, try to initialize it */
    if (DevDataPtr == NULL) {          /* initialization failed? */
      return NULL;                     /* Yes, return NULL */
    }
  }
  /* Initialize DMA channel device and get DMA channel handle */
  ChnDevDataPtr = DMA1_InitChannel(DevDataPtr, (DMA1_TChnInit *)(void *)&DMACH2_ChInit, UserDataPtr);
  /* Registration of the device structure */
  PE_LDD_RegisterDeviceStructure(PE_LDD_COMPONENT_DMACH2_ID,ChnDevDataPtr);
  /* Return pointer to the channel data structure */
  return (ChnDevDataPtr);
}

/*
** ===================================================================
**     Method      :  DMACH2_Enable (component DMAChannel_LDD)
*/
/*!
**     @brief
**         Enables the DMAChannel_LDD component.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK.
*/
/* ===================================================================*/
LDD_TError DMACH2_Enable(LDD_TDeviceData *DeviceDataPtr)
{
  return DMA1_Enable((DMA1_TChanDeviceData *)DeviceDataPtr);
}

/*
** ===================================================================
**     Method      :  DMACH2_Disable (component DMAChannel_LDD)
*/
/*!
**     @brief
**         Disables the DMAChannel_LDD component.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK.
*/
/* ===================================================================*/
LDD_TError DMACH2_Disable(LDD_TDeviceData *DeviceDataPtr)
{
  return DMA1_Disable((DMA1_TChanDeviceData *)DeviceDataPtr);
}

/*
** ===================================================================
**     Method      :  DMACH2_EnableRequest (component DMAChannel_LDD)
*/
/*!
**     @brief
**         The method enables request from peripheral. Please note that
**         this method doesn't start the transfer. The transfer is
**         started as soon as DMA request from peripheral is asserted.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled.
*/
/* ===================================================================*/
LDD_TError DMACH2_EnableRequest(LDD_TDeviceData *DeviceDataPtr)
{
  return DMA1_EnableRequest((DMA1_TChanDeviceData *)DeviceDataPtr);
}

/*
** ===================================================================
**     Method      :  DMACH2_DisableRequest (component DMAChannel_LDD)
*/
/*!
**     @brief
**         The method disables DMA request from peripheral. Request can
**         also by disabled automatically by the DMA hardware if
**         "[Disable request after transfer done]" property is set to
**         "yes" value.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled.
*/
/* ===================================================================*/
LDD_TError DMACH2_DisableRequest(LDD_TDeviceData *DeviceDataPtr)
{
  return DMA1_DisableRequest((DMA1_TChanDeviceData *)DeviceDataPtr);
}

/*
** ===================================================================
**     Method      :  DMACH2_StartTransfer (component DMAChannel_LDD)
*/
/*!
**     @brief
**         The method starts DMA transfer on the selected DMA channel.
**         This methods initiates explicit SW transfer request. Please
**         note that call of this method if peripheral request is
**         enabled can cause unpredictable behaviour.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled.
*/
/* ===================================================================*/
LDD_TError DMACH2_StartTransfer(LDD_TDeviceData *DeviceDataPtr)
{
  return DMA1_StartTransfer((DMA1_TChanDeviceData *)DeviceDataPtr);
}

/*
** ===================================================================
**     Method      :  DMACH2_GetTransferCompleteStatus (component DMAChannel_LDD)
*/
/*!
**     @brief
**         This method returns value of "Transfer done" flag and clears
**         this flag if it was set. It is intended to be used in
**         pooling mode ([Interrupt service] = Disabled) to check
**         transfer state. Please note that in pooling mode the [Main()]
**         method must be called before this method is called.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Return values: 
**                           - [true] - Last transfer is done. 
**                           - [false] - Transfer is pending or last
**                           call of this method has returned [true].
*/
/* ===================================================================*/
bool DMACH2_GetTransferCompleteStatus(LDD_TDeviceData *DeviceDataPtr)
{
  return DMA1_GetTransferCompleteStatus((DMA1_TChanDeviceData *)DeviceDataPtr);
}

/*
** ===================================================================
**     Method      :  DMACH2_GetError (component DMAChannel_LDD)
*/
/*!
**     @brief
**         Returns channel error flags and clears these flags. 
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - DMA Error flags.
*/
/* ===================================================================*/
LDD_DMA_TErrorFlags DMACH2_GetError(LDD_TDeviceData *DeviceDataPtr)
{
  return DMA1_GetError((DMA1_TChanDeviceData *)DeviceDataPtr);
}

/*
** ===================================================================
**     Method      :  DMACH2_SetSourceAddress (component DMAChannel_LDD)
*/
/*!
**     @brief
**         Sets source(read) transaction address.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Address         - Data source address.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled. 
**                           - ERR_PARAM_ADDRESS - Source address is not
**                           multiple of DMA transaction size (byte,
**                           word, dword, ...)
*/
/* ===================================================================*/
LDD_TError DMACH2_SetSourceAddress(LDD_TDeviceData *DeviceDataPtr, LDD_DMA_TData *Address)
{
  return DMA1_SetSourceAddress((DMA1_TChanDeviceData *)DeviceDataPtr, Address);
}

/*
** ===================================================================
**     Method      :  DMACH2_SetDestinationAddress (component DMAChannel_LDD)
*/
/*!
**     @brief
**         Sets destination(write) transaction address.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Address         - Data destination address.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled. 
**                           - ERR_PARAM_ADDRESS - Source address is not
**                           multiple of DMA transaction size (byte,
**                           word, dword, ...)
*/
/* ===================================================================*/
LDD_TError DMACH2_SetDestinationAddress(LDD_TDeviceData *DeviceDataPtr, LDD_DMA_TData *Address)
{
  return DMA1_SetDestinationAddress((DMA1_TChanDeviceData *)DeviceDataPtr, Address);
}

/*
** ===================================================================
**     Method      :  DMACH2_SetTransactionCount (component DMAChannel_LDD)
*/
/*!
**     @brief
**         Sets number of R/W transaction performed after next request
**         is asserted. Please note the this value doesn't represent
**         number of transferred bytes but number on R/W transaction
**         units.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         TransactionCount - Number of R/W
**                           transaction performed after next request is
**                           asserted.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled.
*/
/* ===================================================================*/
LDD_TError DMACH2_SetTransactionCount(LDD_TDeviceData *DeviceDataPtr, LDD_DMA_TTransactionCount TransactionCount)
{
  return DMA1_SetTransactionCount((DMA1_TChanDeviceData *)DeviceDataPtr, TransactionCount);
}

/*
** ===================================================================
**     Method      :  DMACH2_SetRequestCount (component DMAChannel_LDD)
*/
/*!
**     @brief
**         Sets number of requests required to complete transfer.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         RequestCount    - Number of requests
**                           required to complete transfer.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled.
*/
/* ===================================================================*/
LDD_TError DMACH2_SetRequestCount(LDD_TDeviceData *DeviceDataPtr, LDD_DMA_TRequestCount RequestCount)
{
  return DMA1_SetRequestCount((DMA1_TChanDeviceData *)DeviceDataPtr, RequestCount);
}

/* END DMACH2. */

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
