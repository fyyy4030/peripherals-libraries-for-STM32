/*
 * @Date: 2022-09-08 14:06:26
 * @LastEditors: Cath pjgao@youealcorp.com.cn
 * @LastEditTime: 2022-09-08 14:11:10
 * @FilePath: \MDK-ARMc:\Users\Administrator\Desktop\product\CFD1075\Core\Src\BH1721.h
 */
#ifndef __BH1721_H__
#define __BH1721_H__

#include "main.h"

#define BH1721_port hi2c1
#define BH1721_addr 0x46

uint8_t BH1721_init();
uint16_t BH1721_read();

#endif