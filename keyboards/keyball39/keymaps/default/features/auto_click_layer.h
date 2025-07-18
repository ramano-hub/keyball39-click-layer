/*
 * Copyright 2023 Yoichiro Tanaka
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

// クリックレイヤーの設定
#define CLICK_LAYER 4                    // クリックレイヤーのレイヤー番号
#define CLICKABLE_TIMEOUT 800            // クリック可能状態の維持時間（ミリ秒）
#define CLICKED_TIMEOUT 800              // クリック直後状態の維持時間（ミリ秒）
#define MOVEMENT_THRESHOLD 0             // クリックレイヤー有効化のための動き閾値

// グローバル変数
typedef enum {
    CL_NONE,        // 通常状態
    CL_WAITING,     // マウスレイヤー有効化待ち
    CL_CLICKABLE,   // クリック可能状態
    CL_CLICKING,    // クリック中
    CL_CLICKED      // クリック直後
} click_layer_state_t;

// 関数プロトタイプ
void auto_click_layer_init(void);
void enable_click_layer(void);
void disable_click_layer(void);
report_mouse_t click_layer_pointing_device_task(report_mouse_t mouse_report);
bool click_layer_process_record(uint16_t keycode, keyrecord_t *record);
void click_layer_task(void);
