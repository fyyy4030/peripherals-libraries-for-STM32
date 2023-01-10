/*
 * @Date: 2022-08-19 15:18:28
 * @LastEditors: Cath pjgao@youealcorp.com.cn
 * @LastEditTime: 2022-08-22 18:55:42
 * @FilePath: \MDK-ARMc:\Users\Administrator\Desktop\product\0733_new\Core\Src\OTP3001.h
 */
#ifndef __OTP3001_H__
#define __OTP3001_H__

#include "main.h"
#define OTP3001PRINT
#define OTP3001_port hi2c1
#define OTP3001_addr 0x88


uint32_t OTP3001_GetLux();
uint8_t OTP3001_init();

#endif
