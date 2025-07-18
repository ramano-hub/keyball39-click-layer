/*
 * クリックレイヤー機能のヘッダファイル
 * トラックボール検知で自動的にクリックレイヤーに切り替える機能を提供します
 */

#pragma once

#include "quantum.h"
#include "keyball.h"
#include "../utils/functions.h"

// クリックレイヤーの番号（keymap.cで定義されたレイヤー番号）
#define CLICK_LAYER 4

// タイムアウト設定（ミリ秒）
#define CLICKABLE_TIMEOUT 800  // クリック可能状態のタイムアウト
#define CLICKED_TIMEOUT 800    // クリック後のタイムアウト

// トラックボール動き検知の閾値
#define MOVEMENT_THRESHOLD 3   // この値以上の動きでクリックレイヤーを有効化

// トラックボールの状態を表す列挙型
enum ball_state {
    NONE,       // 初期状態
    WAITING,    // 動き検知中
    CLICKABLE,  // クリック可能状態
    CLICKING,   // クリック中
    CLICKED     // クリック直後
};

// 関数プロトタイプ宣言
void auto_click_layer_init(void);
void enable_click_layer(void);
void disable_click_layer(void);
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report);
bool process_record_user(uint16_t keycode, keyrecord_t *record);
void keyball_on_mouse_move(keyball_motion_t *m, report_mouse_t *r, bool is_left);