#ifndef __APDS9250_H__
#define __APDS9250_H__

#include "main.h"
#define APDS9250_port hi2c2
#define APDS9250_addr 0x52

extern I2C_HandleTypeDef hi2c2;
uint8_t APDS9250_init();
uint8_t APDS9250_read_byte(uint8_t reg_addr);
uint8_t APDS9250_write_byte(uint8_t reg_addr,uint8_t reg_data);
uint16_t APDS9250_GetLux();

#endif

