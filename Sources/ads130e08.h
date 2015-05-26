
/*!
** @file ADS130E08.h
** @version 0.01
** @author Sharif Anani
** date 5/22/2015
** @brief
**          This file contains definitions and prototypes to initialize
**          the ADS130E08 ADC by Texas Instruments
*/


#ifndef __ADS130E08_H
#define __ADS130E08_H

/*!
 * SPI command definitions for the ADS130E08 ADC
 */
#define ADS_CMD_SIZE			2
#define ADS_READ_REG_CMD_SIZE	4
/*------System Commands-------------*/
#define ADS_CMD_WAKEUP			0x02
#define ADS_CMD_STANDBY			0x04
#define ADS_CMD_RESET			0x06
#define ADS_CMD_START			0x08
#define ADS_CMD_STOP			0x0A

/*------Data Read Commands---------*/
#define ADS_CMD_RDATAC			0x10
#define ADS_CMD_SDATAC			0x11
#define ADS_CMD_RDATA			0x12

/*-----Register Read Commands------*/

/*!
 * Macro to create SPI command to read NUM registers starting at START
 */
#define ADS_CMD_RREG(START,NUM) ((0X20|START)<<8 | (NUM))

/*!
 * Macro to create SPI command to write NUM registers starting at START
 */
#define ADS_CMD_WREG(START,NUM) ((0X40|START)<<8 | (NUM))

/*---------Register Address Definitions---------*/
#define ADS_ID_REG			0x00
#define ADS_CONFIG1_REG		0x01
#define ADS_CONFIG2_REG		0x02
#define ADS_CONFIG3_REG		0x03
#define ADS_FAULT_REG		0x04

#define ADS_CH1SET_REG		0x05
#define ADS_CH2SET_REG		0x06
#define ADS_CH3SET_REG		0x07
#define ADS_CH4SET_REG		0x08
#define ADS_CH5SET_REG		0x09
#define ADS_CH6SET_REG		0x0A
#define ADS_CH7SET_REG		0x0B
#define ADS_CH8SET_REG		0x0C
//Always write zeroes to registers 0x0D,0x0E,0x0F
#define ADS_FAULT_STATP_REG	0x12
#define ADS_FAULT_STATN_REG	0x13

#define ADS_GPIO_REG		0x14
#endif
