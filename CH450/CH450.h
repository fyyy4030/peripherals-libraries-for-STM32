/*
 * @Date: 2022-08-18 11:07:24
 * @LastEditors: Cath pjgao@youealcorp.com.cn
 * @LastEditTime: 2022-08-22 09:32:53
 * @FilePath: \MDK-ARMc:\Users\Administrator\Desktop\product\0733_new\Core\Src\CH450.h
 */
#ifndef __CH450_H__
#define __CH450_H__

#include "main.h"

#define CH450_port hi2c1
//#define CH450_addr 0x48

uint8_t CH450_send_sig_number(uint8_t pos,uint8_t num);
uint8_t CH450_send_float(float num);
uint8_t CH450_ReadKey();
void CH450_display_Error();
void CH450_send_all_number(uint32_t num);
uint8_t CH450_init();

#endif