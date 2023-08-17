/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wbxx_hal.h"

#include "app_conf.h"
#include "app_entry.h"
#include "app_common.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdint.h>
#include <stddef.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TOUCH_IO2_Pin GPIO_PIN_13
#define TOUCH_IO2_GPIO_Port GPIOB
#define TOUCH_G2_SCAP_Pin GPIO_PIN_4
#define TOUCH_G2_SCAP_GPIO_Port GPIOB
#define TOUCH_G2_SHIELD_Pin GPIO_PIN_5
#define TOUCH_G2_SHIELD_GPIO_Port GPIOB
#define TOUCH_IO3_Pin GPIO_PIN_14
#define TOUCH_IO3_GPIO_Port GPIOB
#define TOUCH_IO4G_Pin GPIO_PIN_15
#define TOUCH_IO4G_GPIO_Port GPIOB
#define TOUCH_SCAP_Pin GPIO_PIN_12
#define TOUCH_SCAP_GPIO_Port GPIOB
#define MOTOR_EN_Pin GPIO_PIN_0
#define MOTOR_EN_GPIO_Port GPIOA
#define BATT_CHG_Pin GPIO_PIN_1
#define BATT_CHG_GPIO_Port GPIOC
#define IMU_INT2_Pin GPIO_PIN_5
#define IMU_INT2_GPIO_Port GPIOA
#define IMU_INT1_Pin GPIO_PIN_4
#define IMU_INT1_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
