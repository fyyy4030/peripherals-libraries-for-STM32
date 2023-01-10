/*
 * @Date: 2022-08-22 09:50:45
 * @LastEditors: Cath pjgao@youealcorp.com.cn
 * @LastEditTime: 2022-08-22 10:27:37
 * @FilePath: \MDK-ARMc:\Users\Administrator\Desktop\product\0733_new\Core\Src\TSL2591.h
 */
#ifndef __TSL2591_H__
#define __TSL2591_H__

#include "main.h"
#define TSL2591_port hi2c1
#define TSL2591_addr 0x52

#define COMMAND_BIT 0xA0

#define reg_ENABLE 0x00
#define reg_CONFIG 0x01
#define reg_C0DATAL 0x14
#define reg_C0DATAH 0x15
#define reg_C1DATAL 0x16
#define reg_C1DATAH 0x17

uint8_t TSL2591_init();
uint8_t TSL2591_read_byte(uint8_t reg_addr);
uint8_t TSL2591_write_byte(uint8_t reg_addr,uint8_t reg_data);
uint32_t TSL2591_GetLux();

#endif

