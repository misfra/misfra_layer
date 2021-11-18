/**
 * @file pin.h
 * @brief
 * @author xqyjlj (xqyjlj@126.com)
 * @version 0.0
 * @date 2021-11-16
 * @copyright Copyright © 2021-2021 Misfra Team<"https://github.com/misfra">
 * @SPDX-License-Identifier: Apache-2.0
 *
 * ********************************************************************************
 * @par ChangeLog:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2021-11-16 <td>0.0     <td>xqyjlj  <td>内容
 * </table>
 * ********************************************************************************
 */

#ifndef __MISFRA_LAYER_PIN_H__
#define __MISFRA_LAYER_PIN_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "misfra_layer/base.h"

enum misfra_layer_pin_level_enum
{
	Misfra_Pin_Level_Low = 0x00,        /**< 低电平 */
	Misfra_Pin_Level_High               /**< 高电平 */
};
typedef enum misfra_layer_pin_level_enum misfra_layer_pin_level_t; /**< 引脚电平 */

enum misfra_layer_pin_mode_enum
{
	Misfra_Pin_Mode_Output = 0,                             /**< 输出模式 */
	Misfra_Pin_Mode_Input = (uint32_t) (1 << 0),            /**< 输入模式 */
	Misfra_Pin_Mode_Alternate = (uint32_t) (1 << 1),        /**< 复用模式 */
	Misfra_Pin_Mode_Analog = (uint32_t) (1 << 2),           /**< 模拟模式 */
};
typedef enum misfra_layer_pin_mode_enum misfra_layer_pin_mode_t; /**< 引脚模式 */

enum misfra_layer_pin_output_mode_enum
{
	Misfra_Pin_Output_Mode_PP = (uint32_t) (1 << 3),        /**< 推挽输出 */
	Misfra_Pin_Output_Mode_OD = (uint32_t) (1 << 4),        /**< 开漏输出 */
};
typedef enum misfra_layer_pin_output_mode_enum misfra_layer_pin_output_mode_t; /**< 引脚输出模式 */

enum misfra_layer_pin_output_speed_enum
{
	Misfra_Pin_Output_Speed_Low = (uint32_t) (1 << 5),      /**< 低速 */
	Misfra_Pin_Output_Speed_Medium = (uint32_t) (1 << 6),   /**< 中速 */
	Misfra_Pin_Output_Speed_Fast = (uint32_t) (1 << 7),     /**< 快速 */
	Misfra_Pin_Output_Speed_High = (uint32_t) (1 << 8),     /**< 高速 */
};
typedef enum misfra_layer_pin_output_speed_enum misfra_layer_pin_output_speed_t; /**< 引脚速度 */

enum misfra_layer_pin_pull_mode_enum
{
	Misfra_Pin_Pull_Mode_No = (uint32_t) (1 << 9),         /**< 无 */
	Misfra_Pin_Pull_Mode_Up = (uint32_t) (1 << 10),        /**< 上拉 */
	Misfra_Pin_Pull_Mode_Down = (uint32_t) (1 << 11),      /**< 下拉 */
};
typedef enum misfra_layer_pin_pull_mode_enum misfra_layer_pin_pull_mode_t; /**< 引脚上下拉 */

enum misfra_layer_pin_irq_mode_enum
{
	Misfra_Pin_Irq_Mode_Rising = 0x00,          /**< 上升沿触发 */
	Misfra_Pin_Irq_Mode_Falling,                /**< 下降沿触发 */
	Misfra_Pin_Irq_Mode_Rising_Falling,         /**< 上升下降沿触发 */
	Misfra_Pin_Irq_Mode_High_Level,             /**< 高电平触发 */
	Misfra_Pin_Irq_Mode_Low_Level               /**< 低电平触发 */
};
typedef enum misfra_layer_pin_irq_mode_enum misfra_layer_pin_irq_mode_t; /**< 引脚中断触发模式 */

enum misfra_layer_pin_irq_cmd_enum
{
	Misfra_Pin_Irq_Cmd_Disable = 0x00,          /**< 关闭中断 */
	Misfra_Pin_Irq_Cmd_Enable,                  /**< 打开中断 */
};
typedef enum misfra_layer_pin_irq_cmd_enum misfra_layer_pin_irq_cmd_t; /**< 引脚中断命令 */

struct misfra_layer_pin_index_struct
{

};
typedef struct misfra_layer_pin_index_struct misfra_layer_pin_index_t; /**< 引脚节点 */

/**
 * @brief 设置引脚电平
 * @param index 引脚编号
 * @param level @c Misfra_Pin_Level_Low: 低电平
 * @param level @c Misfra_Pin_Level_High: 高电平
 */
void misfra_layer_pin_write(const misfra_layer_pin_index_t *index, misfra_layer_pin_level_t level);

/**
 * @brief 获取引脚电平
 * @param index 引脚编号
 * @return Misfra_Pin_Level_Low @c 低电平
 * @return Misfra_Pin_Level_High @c 高电平
 */
misfra_layer_pin_level_t misfra_layer_pin_read(const misfra_layer_pin_index_t *index);

/**
 * @brief 设置引脚工作模式
 * @param index 引脚编号
 * @param mode 引脚模式
 */
void misfra_layer_pin_mode(const misfra_layer_pin_index_t *index, uint32_t mode);

/**
 * @brief 控制引脚中断
 * @param index 引脚编号
 * @param mode 中断触发模式
 * @param cmd 中断控制字
 */
void misfra_layer_pin_irq_cmd(const misfra_layer_pin_index_t *index, misfra_layer_pin_irq_mode_t mode, misfra_layer_pin_irq_cmd_t cmd);

/**
 * @brief 引脚中断回调函数
 * @param index 引脚序号（1、2、3、4、5……）
 */
void misfra_layer_pin_irq_callback(int32_t index);

#ifdef __cplusplus
}
#endif

#endif /**< __MISFRA_LAYER_PIN_H__ */
