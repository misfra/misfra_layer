/**
 * @file misfra_layer_pin.c
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
#include "misfra_layer/pin.h"

/**
 * @brief 设置引脚电平
 * @param index 引脚编号
 * @param level 引脚电平
 */
void misfra_layer_pin_write(const misfra_layer_pin_index_t *index, const misfra_layer_pin_level_t level)
{

}

/**
 * @brief 获取引脚电平
 * @param index 引脚编号
 * @return 引脚电平
 */
misfra_layer_pin_level_t misfra_layer_pin_read(const misfra_layer_pin_index_t *index)
{

}

/**
 * @brief 设置引脚工作模式
 * @param index 引脚编号
 * @param mode 引脚模式
 */
void misfra_layer_pin_mode(const misfra_layer_pin_index_t *index, uint32_t mode)
{

}

/**
 * @brief 控制引脚中断
 * @param index 引脚编号
 * @param mode 中断触发模式
 * @param cmd 中断控制字
 */
void misfra_layer_pin_irq_cmd(const misfra_layer_pin_index_t *index, const misfra_layer_pin_irq_mode_t mode, const misfra_layer_pin_irq_cmd_t cmd)
{

}

/**
 * @brief 引脚中断回调函数
 * @param index 引脚序号（1、2、3、4、5……）
 */
_misfra_weak void misfra_layer_pin_irq_callback(int32_t index)
{

}
