/**
  ******************************************************************************
  * @file    stm32f4xx_hal_i2s_ex.h
  * @author  MCD Application Team
  * @version V1.3.0
  * @date    09-March-2015
  * @brief   Header file of I2S HAL module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F4xx_HAL_I2S_EX_H
#define __STM32F4xx_HAL_I2S_EX_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal_def.h"  

/** @addtogroup STM32F4xx_HAL_Driver
  * @{
  */

/** @addtogroup I2SEx
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/
/** @defgroup I2SEx_Exported_Types I2S Exported Types
  * @{
  */ 
/**
  * @}
  */

/* Exported constants --------------------------------------------------------*/
/** @defgroup I2SEx_Exported_Constants I2S Exported Constants
  * @{
  */ 
/**
  * @}
  */ 

/* Exported macro ------------------------------------------------------------*/
/** @defgroup I2SEx_Exported_Macros I2S Exported Macros
  * @{
  */

/**
  * @}
  */ 

/* Exported functions --------------------------------------------------------*/
/** @addtogroup I2SEx_Exported_Functions
  * @{
  */

/** @addtogroup I2SEx_Exported_Functions_Group1
  * @{
  */

/* Extended features functions **************************************************/
/* Blocking mode: Polling */
HAL_StatusTypeDef HAL_I2SEx_TransmitReceive(I2S_HandleTypeDef *hi2s, uint16_t *pTxData, uint16_t *pRxData, uint16_t Size, uint32_t Timeout);
/* Non-Blocking mode: Interrupt */
HAL_StatusTypeDef HAL_I2SEx_TransmitReceive_IT(I2S_HandleTypeDef *hi2s, uint16_t *pTxData, uint16_t *pRxData, uint16_t Size);
/* Non-Blocking mode: DMA */
HAL_StatusTypeDef HAL_I2SEx_TransmitReceive_DMA(I2S_HandleTypeDef *hi2s, uint16_t *pTxData, uint16_t *pRxData, uint16_t Size);
/**
  * @}
  */ 

/**
  * @}
  */
/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/** @defgroup I2SEx_Private_Constants I2S Private Constants
  * @{
  */
/**
  * @}
  */

/* Private macros ------------------------------------------------------------*/
/** @defgroup I2SEx_Private_Macros I2S Private Macros
  * @{
  */
/**
  * @}
  */

/* Private functions ---------------------------------------------------------*/
/** @defgroup I2SEx_Private_Functions I2S Private Functions
  * @{
  */
HAL_StatusTypeDef I2SEx_TransmitReceive_IT(I2S_HandleTypeDef *hi2s);
uint32_t I2S_GetInputClock(I2S_HandleTypeDef *hi2s); 
/**
  * @}
  */

/**
  * @}
  */ 

/**
  * @}
  */

#ifdef __cplusplus
}
#endif


#endif /* __STM32F4xx_HAL_I2S_EX_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
