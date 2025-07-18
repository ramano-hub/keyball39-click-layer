/* Copyright 2021 Yoichiro Tanaka
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

// デバッグ機能を無効化（容量削減）
#define NO_DEBUG
#define NO_PRINT

// マトリックスのデバッグを無効化（容量削減）
#define DEBUG_MATRIX_SCAN_RATE 0
#define DEBUG_MATRIX 0

// VIA/Remapサポートのためのレイヤー数設定
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

// RGB LEDの設定
#ifdef RGBLIGHT_ENABLE
    // アニメーション無効化（容量削減）
    #undef RGBLIGHT_ANIMATIONS
    #undef RGBLIGHT_EFFECT_BREATHING
    #undef RGBLIGHT_EFFECT_RAINBOW_MOOD
    #undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #undef RGBLIGHT_EFFECT_SNAKE
    #undef RGBLIGHT_EFFECT_KNIGHT
    #undef RGBLIGHT_EFFECT_CHRISTMAS
    #undef RGBLIGHT_EFFECT_STATIC_GRADIENT
    #undef RGBLIGHT_EFFECT_RGB_TEST
    #undef RGBLIGHT_EFFECT_ALTERNATING
    #undef RGBLIGHT_EFFECT_TWINKLE
    
    // 静的なライトモードのみ有効化
    #define RGBLIGHT_EFFECT_STATIC_LIGHT
    
    // LEDの最大輝度を制限（容量削減・省電力化）
    #define RGBLIGHT_LIMIT_VAL 150
    
    // HSV色定義
    #define HSV_WHITE 0, 0, 255
#endif

// マウスキーの設定
#ifdef MOUSEKEY_ENABLE
    // マウスキーの高速化
    #define MOUSEKEY_INTERVAL 16
    #define MOUSEKEY_DELAY 0
    #define MOUSEKEY_TIME_TO_MAX 60
    #define MOUSEKEY_MAX_SPEED 7
    #define MOUSEKEY_WHEEL_DELAY 0
#endif

// 一部の機能の無効化（容量削減）
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
