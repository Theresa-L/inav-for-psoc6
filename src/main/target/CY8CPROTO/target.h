/*
 * File: target.h
 * Date: 2025-08-15
 * Author: Theresa Lachtner
 *
 * Project: iNAV for PsoC6
 * 
 * Description:
 *   This file contains all target specific macros.
 *
 */

 #pragma once

#define TARGET_BOARD_IDENTIFIER "CYP8"
#define USBD_PRODUCT_STRING     "CY8PROTO"

// use SPI
#define USE_IMU_BMI088
#define IMU_BMI088_ALIGN        // todo
#define BMI088_SPI_BUS          // todo
#define BMI088_GYRO_CS_PIN      // todo
#define BMI088_GYRO_EXTI_PIN    // todo
#define BMI088_ACC_CS_PIN       // todo
#define BMI088_ACC_EXTI_PIN     // todo

// use I2C
#define USE_BARO
#define USE_BARO_DPS368

#define USE_MAG
#define MAG_I2C_BUS             DEFAULT_I2C_BUS
#define USE_MAG_ALL