/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : DMACH1.h
**     Project     : k60_spi_dma
**     Processor   : MK60DN512VLQ10
**     Component   : DMAChannel_LDD
**     Version     : Component 01.053, Driver 01.01, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-05-27, 12:45, # CodeGen: 57
**     Abstract    :
**          This embedded component implements
**          a DMA transfer channel descriptor definition.
**     Settings    :
**          Component name                                 : DMACH1
**          Hardware request                               : Enabled
**            Request source                               : SPI2_Transmit_DMA_Request
**            Request periodic trigger                     : Disabled
**          Channel select                                 : Fixed
**            DMA controller device                        : DMA1
**            Channel                                      : DMA_Channel0
**            Allocate channel                             : yes
**            Arbitration type                             : Fixed
**              Priority                                   : 0
**            Interrupt service                            : Enabled
**              Transfer complete interrupt                : 
**                Interrupt vector                         : INT_DMA0
**                Interrupt priority                       : 8
**              Error interrupt                            : 
**                Interrupt vector                         : INT_DMA_Error
**                Interrupt priority                       : medium priority
**          External object declaration                    : (string list)
**          Source transaction settings                    : 
**            Start address                                : 0
**            Transaction size                             : 32-bits
**            Address adjustment                           : 4
**            Address modulo                               : Buffer disabled
**          Destination transaction settings               : 
**            Start address                                : 0
**            Transaction size                             : 32-bits
**            Address adjustment                           : 0
**            Address modulo                               : Buffer disabled
**          Transfer settings                              : 
**            Bandwidth control                            : No stalls
**            Transaction size                             : 32-bits
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
**         Init                      - LDD_TDeviceData* DMACH1_Init(LDD_TUserData *UserDataPtr);
**         Enable                    - LDD_TError DMACH1_Enable(LDD_TDeviceData *DeviceDataPtr);
**         Disable                   - LDD_TError DMACH1_Disable(LDD_TDeviceData *DeviceDataPtr);
**         EnableRequest             - LDD_TError DMACH1_EnableRequest(LDD_TDeviceData *DeviceDataPtr);
**         DisableRequest            - LDD_TError DMACH1_DisableRequest(LDD_TDeviceData *DeviceDataPtr);
**         StartTransfer             - LDD_TError DMACH1_StartTransfer(LDD_TDeviceData *DeviceDataPtr);
**         GetTransferCompleteStatus - bool DMACH1_GetTransferCompleteStatus(LDD_TDeviceData *DeviceDataPtr);
**         GetError                  - LDD_DMA_TErrorFlags DMACH1_GetError(LDD_TDeviceData *DeviceDataPtr);
**         SetSourceAddress          - LDD_TError DMACH1_SetSourceAddress(LDD_TDeviceData *DeviceDataPtr,...
**         SetDestinationAddress     - LDD_TError DMACH1_SetDestinationAddress(LDD_TDeviceData *DeviceDataPtr,...
**         SetTransactionCount       - LDD_TError DMACH1_SetTransactionCount(LDD_TDeviceData *DeviceDataPtr,...
**         SetRequestCount           - LDD_TError DMACH1_SetRequestCount(LDD_TDeviceData *DeviceDataPtr,...
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
** @file DMACH1.h
** @version 01.01
** @brief
**          This embedded component implements
**          a DMA transfer channel descriptor definition.
*/         
/*!
**  @addtogroup DMACH1_module DMACH1 module documentation
**  @{
*/         

#ifndef __DMACH1_H
#define __DMACH1_H

/* MODULE DMACH1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "DMA1.h"
#include "PE_LDD.h"
#include "DMA_PDD.h"

#include "Cpu.h"

/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define DMACH1_PRPH_BASE_ADDRESS  0x40008000U
  
/* Methods configuration constants - generated for all enabled component's methods */
#define DMACH1_Init_METHOD_ENABLED     /*!< Init method of the component DMACH1 is enabled (generated) */
#define DMACH1_Enable_METHOD_ENABLED   /*!< Enable method of the component DMACH1 is enabled (generated) */
#define DMACH1_Disable_METHOD_ENABLED  /*!< Disable method of the component DMACH1 is enabled (generated) */
#define DMACH1_EnableRequest_METHOD_ENABLED /*!< EnableRequest method of the component DMACH1 is enabled (generated) */
#define DMACH1_DisableRequest_METHOD_ENABLED /*!< DisableRequest method of the component DMACH1 is enabled (generated) */
#define DMACH1_StartTransfer_METHOD_ENABLED /*!< StartTransfer method of the component DMACH1 is enabled (generated) */
#define DMACH1_GetTransferCompleteStatus_METHOD_ENABLED /*!< GetTransferCompleteStatus method of the component DMACH1 is enabled (generated) */
#define DMACH1_GetError_METHOD_ENABLED /*!< GetError method of the component DMACH1 is enabled (generated) */
#define DMACH1_SetSourceAddress_METHOD_ENABLED /*!< SetSourceAddress method of the component DMACH1 is enabled (generated) */
#define DMACH1_SetDestinationAddress_METHOD_ENABLED /*!< SetDestinationAddress method of the component DMACH1 is enabled (generated) */
#define DMACH1_SetTransactionCount_METHOD_ENABLED /*!< SetTransactionCount method of the component DMACH1 is enabled (generated) */
#define DMACH1_SetRequestCount_METHOD_ENABLED /*!< SetRequestCount method of the component DMACH1 is enabled (generated) */

/* Events configuration constants - generated for all enabled component's events */
#define DMACH1_OnComplete_EVENT_ENABLED /*!< OnComplete event of the component DMACH1 is enabled (generated) */
#define DMACH1_OnError_EVENT_ENABLED   /*!< OnError event of the component DMACH1 is enabled (generated) */

/* Source circular buffer base address mask. Represents required 0-modulo-size mask of base source address when using circular buffer. */
#define DMACH1_SOURCE_CIRCULAR_BUFFER_ADDRESS_MASK 0U
/* Destination circular buffer base address mask. Represents required 0-modulo-size mask of base destination address when using circular buffer. */
#define DMACH1_DESTINATION_CIRCULAR_BUFFER_ADDRESS_MASK 0U

/*
** ===================================================================
**     Method      :  DMACH1_Init (component DMAChannel_LDD)
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
LDD_TDeviceData* DMACH1_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  DMACH1_Enable (component DMAChannel_LDD)
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
LDD_TError DMACH1_Enable(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMACH1_Disable (component DMAChannel_LDD)
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
LDD_TError DMACH1_Disable(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMACH1_EnableRequest (component DMAChannel_LDD)
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
LDD_TError DMACH1_EnableRequest(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMACH1_DisableRequest (component DMAChannel_LDD)
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
LDD_TError DMACH1_DisableRequest(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMACH1_StartTransfer (component DMAChannel_LDD)
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
LDD_TError DMACH1_StartTransfer(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMACH1_GetTransferCompleteStatus (component DMAChannel_LDD)
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
bool DMACH1_GetTransferCompleteStatus(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMACH1_GetError (component DMAChannel_LDD)
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
LDD_DMA_TErrorFlags DMACH1_GetError(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMACH1_SetSourceAddress (component DMAChannel_LDD)
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
LDD_TError DMACH1_SetSourceAddress(LDD_TDeviceData *DeviceDataPtr, LDD_DMA_TData *Address);

/*
** ===================================================================
**     Method      :  DMACH1_SetDestinationAddress (component DMAChannel_LDD)
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
LDD_TError DMACH1_SetDestinationAddress(LDD_TDeviceData *DeviceDataPtr, LDD_DMA_TData *Address);

/*
** ===================================================================
**     Method      :  DMACH1_SetTransactionCount (component DMAChannel_LDD)
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
LDD_TError DMACH1_SetTransactionCount(LDD_TDeviceData *DeviceDataPtr, LDD_DMA_TTransactionCount TransactionCount);

/*
** ===================================================================
**     Method      :  DMACH1_SetRequestCount (component DMAChannel_LDD)
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
LDD_TError DMACH1_SetRequestCount(LDD_TDeviceData *DeviceDataPtr, LDD_DMA_TRequestCount RequestCount);

/* END DMACH1. */
#endif
/* ifndef __DMACH1_H */
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
