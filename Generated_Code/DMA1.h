/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : DMA1.h
**     Project     : k60_spi_dma
**     Processor   : MK60DN512VLQ10
**     Component   : DMAController
**     Version     : Component 01.039, Driver 01.02, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-05-29, 12:07, # CodeGen: 70
**     Abstract    :
**          This embedded component implements initialization
**          and runtime handling of an on-chip DMA controller.
**     Settings    :
**          Component name                                 : DMA1
**          OnError                                        : yes
**          OnComplete                                     : yes
**          RWTransactionSizeGtThenOne                     : yes
**          RWTransactionSize                              : 4
**          RWTransactionUnitSameInAllComponent            : no
**          HasCycleStealMode                              : yes
**          HasHalfCompleteInterrupt                       : no
**          Device                                         : DMA
**          Settings                                       : 
**            Minor loop mapping                           : Disabled
**            Continuous mode                              : Disabled
**            Halt on error                                : Disabled
**            Debug                                        : Disabled
**          Channel arbitration type                       : Fixed
**            Autoset channel priority                     : 
**          Statically allocated channels                  : 2
**            Channel settings                             : Chan: 1
**              Channel                                    : DMA_Channel1
**              Allocate channel                           : no
**              Channel shared                             : no
**              Used by component(s)                       : DmaTxCh
**              Arbitration type                           : Fixed
**                Priority                                 : 3
**                Can be preempted                         : no
**                Can preempt                              : no
**              Interrupt service                          : Enabled
**                Transfer complete interrupt              : 
**                  Interrupt vector                       : INT_DMA1
**                  Interrupt priority                     : 8
**                Error interrupt                          : 
**                  Interrupt vector                       : INT_DMA_Error
**                  Interrupt priority                     : medium priority
**              Component name0                            : DmaTxCh
**            Channel settings                             : Chan: 2
**              Channel                                    : DMA_Channel2
**              Allocate channel                           : no
**              Channel shared                             : no
**              Used by component(s)                       : DmaRxCh
**              Arbitration type                           : Fixed
**                Priority                                 : 4
**                Can be preempted                         : no
**                Can preempt                              : no
**              Interrupt service                          : Enabled
**                Transfer complete interrupt              : 
**                  Interrupt vector                       : INT_DMA2
**                  Interrupt priority                     : 8
**                Error interrupt                          : 
**                  Interrupt vector                       : INT_DMA_Error
**                  Interrupt priority                     : medium priority
**              Component name0                            : DmaRxCh
**          Dynamically allocatable channels               : 0
**     Contents    :
**         Init                  - LDD_TDeviceData* DMA1_Init(void);
**         InitChannel           - LDD_TDeviceData* DMA1_InitChannel(LDD_TDeviceData *DeviceDataPtr,...
**         Enable                - LDD_TError DMA1_Enable(DMA1_TChanDeviceData *ChanDeviceDataPtr);
**         Disable               - LDD_TError DMA1_Disable(DMA1_TChanDeviceData *ChanDeviceDataPtr);
**         EnableRequest         - LDD_TError DMA1_EnableRequest(DMA1_TChanDeviceData *ChanDeviceDataPtr);
**         DisableRequest        - LDD_TError DMA1_DisableRequest(DMA1_TChanDeviceData *ChanDeviceDataPtr);
**         StartTransfer         - LDD_TError DMA1_StartTransfer(DMA1_TChanDeviceData *ChanDeviceDataPtr);
**         GetError              - LDD_DMA_TErrorFlags DMA1_GetError(DMA1_TChanDeviceData *ChanDeviceDataPtr);
**         SetSourceAddress      - LDD_TError DMA1_SetSourceAddress(DMA1_TChanDeviceData *ChanDeviceDataPtr,...
**         SetDestinationAddress - LDD_TError DMA1_SetDestinationAddress(DMA1_TChanDeviceData...
**         SetTransactionCount   - LDD_TError DMA1_SetTransactionCount(DMA1_TChanDeviceData *ChanDeviceDataPtr,...
**         SetRequestCount       - LDD_TError DMA1_SetRequestCount(DMA1_TChanDeviceData *ChanDeviceDataPtr,...
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
** @file DMA1.h
** @version 01.02
** @brief
**          This embedded component implements initialization
**          and runtime handling of an on-chip DMA controller.
*/         
/*!
**  @addtogroup DMA1_module DMA1 module documentation
**  @{
*/         

#ifndef __DMA1_H
#define __DMA1_H

/* MODULE DMA1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "Cpu.h"
#include "PE_LDD.h"

/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define DMA1_PRPH_BASE_ADDRESS  0x40008000U
  
/* Methods configuration constants - generated for all enabled component's methods */
#define DMA1_Init_METHOD_ENABLED       /*!< Init method of the component DMA1 is enabled (generated) */
#define DMA1_InitChannel_METHOD_ENABLED /*!< InitChannel method of the component DMA1 is enabled (generated) */
#define DMA1_Enable_METHOD_ENABLED     /*!< Enable method of the component DMA1 is enabled (generated) */
#define DMA1_Disable_METHOD_ENABLED    /*!< Disable method of the component DMA1 is enabled (generated) */
#define DMA1_EnableRequest_METHOD_ENABLED /*!< EnableRequest method of the component DMA1 is enabled (generated) */
#define DMA1_DisableRequest_METHOD_ENABLED /*!< DisableRequest method of the component DMA1 is enabled (generated) */
#define DMA1_StartTransfer_METHOD_ENABLED /*!< StartTransfer method of the component DMA1 is enabled (generated) */
#define DMA1_GetError_METHOD_ENABLED   /*!< GetError method of the component DMA1 is enabled (generated) */
#define DMA1_SetSourceAddress_METHOD_ENABLED /*!< SetSourceAddress method of the component DMA1 is enabled (generated) */
#define DMA1_SetDestinationAddress_METHOD_ENABLED /*!< SetDestinationAddress method of the component DMA1 is enabled (generated) */
#define DMA1_SetTransactionCount_METHOD_ENABLED /*!< SetTransactionCount method of the component DMA1 is enabled (generated) */
#define DMA1_SetRequestCount_METHOD_ENABLED /*!< SetRequestCount method of the component DMA1 is enabled (generated) */

/* Static channel constants. This constants are used to initialize DMA1_TChnInit.ChnNum variable */
#define DMA1_STATIC_CHANNEL_0                               0U
#define DMA1_STATIC_CHANNEL_1                               1U

/* Dynamic channel constants. This constants are used to initialize DMA1_TChnInit.ChnNum variable */
/* Transfer control descriptor prototype */
typedef struct DMA1_TTCD_stuct {
  uint32_t                         DMA_TCD_SADDR_Reg;      /* DMA_SAR register */
  uint16_t                         DMA_TCD_SOFF_Reg;       /* DMA_TCD_SOFF register */
  uint16_t                         DMA_TCD_ATTR_Reg;       /* DMA_TCD_ATTR register */
  uint32_t                         DMA_TCD_NBYTES_Reg;     /* DMA_TCD_NBYTES register */
  uint32_t                         DMA_TCD_SLAST_Reg;      /* DMA_TCD_SLAST register */
  uint32_t                         DMA_TCD_DADDR_Reg;      /* DMA_TCD_DADDR register */
  uint16_t                         DMA_TCD_DOFF_Reg;       /* DMA_TCD_DOFF register */
  uint16_t                         DMA_TCD_CITER_Reg;      /* DMA_TCD_CITER register */
  uint32_t                         DMA_TCD_DLASTSGA_Reg;   /* DMA_TCD_DLASTSGA register */
  uint16_t                         DMA_TCD_CSR_Reg;        /* DMA_TCD_CSR register */
  uint16_t                         DMA_TCD_BITER_Reg;      /* DMA_TCD_BITER_ELINKNO register */
} volatile DMA1_TTCD, * DMA1_TTCDPtr;

/*! Event prototype */
typedef void (DMA1_TEventFn)(LDD_TDeviceData *DevDataPtr);

/* Events setting structure prototype */
typedef struct DMA1_Events_stuct {
  DMA1_TEventFn                   *OnCompleteFnPtr;        /* OnComplete function pointer */
  DMA1_TEventFn                   *OnErrorFnPtr;           /* OnError function pointer */
} DMA1_TEvents, *DMA1_TEventsPtr;

/* Channel initialization structure prototype */
typedef struct DMA1_TChnInit_stuct {
  uint32_t                         ChnNum;                 /* Logical channel number (set to '-1' for autoselect) */
  DMA1_TTCD                        TCD;                    /* Channel registers initialization values */
  uint8_t                          MUX_CHCFG_Reg;          /* DMAMUX_CHCFG reg. init. value */
  DMA1_TEvents                     Events;                 /* Events initialization values */
  bool                             EnUser;                 /* Component state initialization values */
} DMA1_TChnInit, *DMA1_TChnInitPtr;

/* Channel device data structure prototype */
typedef void DMA1_TChanDeviceData;

/*
** ===================================================================
**     Method      :  DMA1_Init (component DMAController)
*/
/*!
**     @brief
**         Initializes the associated peripheral(s) and the component
**         internal variables. The method is called automatically as a
**         part of the application initialization code.
**     @return
**                         - Pointer to the device data structure. 
*/
/* ===================================================================*/
LDD_TDeviceData* DMA1_Init(void);

/*
** ===================================================================
**     Method      :  DMA1_InitChannel (component DMAController)
*/
/*!
**     @brief
**         The method allocates DMA channel for the DMA transfer
**         defined by the transfer descriptor input parameter
**         DescriptorPtr. This method must be called before DMA channel
**         is initialized. Otherwise ERR_NOTAVAIL error code is
**         returned after call of DMA_LDD channel methods.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         ChIntPtr        - Pointer to a DMA transfer
**                           descriptor structure.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     @return
**                         - Error code, possible codes:
**                           - ERR_OK - OK.
**                           - ERR_SPEED - This device does not work in
**                           the active clock configuration.
**                           - ERR_DISABLED - Component or device is
**                           disabled.
**                           - ERR_NOTAVAIL - There is not any possible
**                           channel with desired features to be
**                           allocated.
*/
/* ===================================================================*/
LDD_TDeviceData* DMA1_InitChannel(LDD_TDeviceData *DeviceDataPtr, DMA1_TChnInit *ChIntPtr, LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  DMA1_Enable (component DMAController)
*/
/*!
**     @brief
**         Enables the DMATransfer component.
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK.
*/
/* ===================================================================*/
LDD_TError DMA1_Enable(DMA1_TChanDeviceData *ChanDeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMA1_Disable (component DMAController)
*/
/*!
**     @brief
**         Disables the DMATransfer component.
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK.
*/
/* ===================================================================*/
LDD_TError DMA1_Disable(DMA1_TChanDeviceData *ChanDeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMA1_EnableRequest (component DMAController)
*/
/*!
**     @brief
**         The method enables DMA request from peripheral. Please note
**         that this method doesn't start the transfer. The transfer is
**         started as soon as DMA request from peripheral is asserted.
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled.
*/
/* ===================================================================*/
LDD_TError DMA1_EnableRequest(DMA1_TChanDeviceData *ChanDeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMA1_DisableRequest (component DMAController)
*/
/*!
**     @brief
**         The method disables DMA request from peripheral. Please note
**         that request can also by disabled automatically by the DMA
**         hardware.
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled.
*/
/* ===================================================================*/
LDD_TError DMA1_DisableRequest(DMA1_TChanDeviceData *ChanDeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMA1_StartTransfer (component DMAController)
*/
/*!
**     @brief
**         The method starts DMA transfer on the selected DMA channel.
**         This methods initiates explicit SW transfer request. Please
**         note that call of this method if peripheral request is
**         enabled can cause unpredictable behaviour.
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled.
*/
/* ===================================================================*/
LDD_TError DMA1_StartTransfer(DMA1_TChanDeviceData *ChanDeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMA1_GetError (component DMAController)
*/
/*!
**     @brief
**         Returns last recorded channel error flags.
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
**     @return
**                         - DMA Error flags.
*/
/* ===================================================================*/
LDD_DMA_TErrorFlags DMA1_GetError(DMA1_TChanDeviceData *ChanDeviceDataPtr);

/*
** ===================================================================
**     Method      :  DMA1_SetSourceAddress (component DMAController)
*/
/*!
**     @brief
**         Sets source(read) data address.
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
**     @param
**         Address         - Pointer to source data address.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled. 
**                           - ERR_PARAM_ADDRESS - Source address is not
**                           multiple of DMA transaction size (byte,
**                           word, dword, ...)
*/
/* ===================================================================*/
LDD_TError DMA1_SetSourceAddress(DMA1_TChanDeviceData *ChanDeviceDataPtr, LDD_DMA_TData *Address);

/*
** ===================================================================
**     Method      :  DMA1_SetDestinationAddress (component DMAController)
*/
/*!
**     @brief
**         Sets destination(write) data address
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
**     @param
**         Address         - Pointer to destination data
**                           address.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled. 
**                           - ERR_PARAM_ADDRESS - Destination address
**                           is not multiple of DMA transaction size
**                           (byte, word, dword, ...)
*/
/* ===================================================================*/
LDD_TError DMA1_SetDestinationAddress(DMA1_TChanDeviceData *ChanDeviceDataPtr, LDD_DMA_TData *Address);

/*
** ===================================================================
**     Method      :  DMA1_SetTransactionCount (component DMAController)
*/
/*!
**     @brief
**         Sets number of DMA (read/write) transactions performed after
**         next request is asserted. Please note the this value doesn't
**         represent number of transferred bytes but number on DMA
**         (read/write) transaction units.
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
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
LDD_TError DMA1_SetTransactionCount(DMA1_TChanDeviceData *ChanDeviceDataPtr, LDD_DMA_TTransactionCount TransactionCount);

/*
** ===================================================================
**     Method      :  DMA1_SetRequestCount (component DMAController)
*/
/*!
**     @brief
**         Sets number of request required to complete the transfer.
**     @param
**         ChanDeviceDataPtr - DMA channel
**                           data structure pointer returned by
**                           [InitChannel()] method.
**     @param
**         RequestCount    - Number of request
**                           required to complete transfer.
**     @return
**                         - Error code, possible codes: 
**                           - ERR_OK - OK. 
**                           - ERR_DISABLED - Component is disabled.
*/
/* ===================================================================*/
LDD_TError DMA1_SetRequestCount(DMA1_TChanDeviceData *ChanDeviceDataPtr, LDD_DMA_TRequestCount RequestCount);

/*
** ===================================================================
**     Method      :  DMA1_TransferComplete_ISR (component DMAController)
**
**     Description :
**         Transfer complete ISR
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
/* {Default RTOS Adapter} ISR function prototype */
PE_ISR(DMA1_INT_DMA1_TransferComplete_ISR);
/*
** ===================================================================
**     Method      :  DMA1_TransferComplete_ISR (component DMAController)
**
**     Description :
**         Transfer complete ISR
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
/* {Default RTOS Adapter} ISR function prototype */
PE_ISR(DMA1_INT_DMA2_TransferComplete_ISR);
/*
** ===================================================================
**     Method      :  DMA1_TransferError_ISR (component DMAController)
**
**     Description :
**         Transfer complete ISR
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
/* {Default RTOS Adapter} ISR function prototype */
PE_ISR(DMA1_INT_DMA_Error_TransferError_ISR);
/* END DMA1. */

#endif
/* ifndef __DMA1_H */
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
