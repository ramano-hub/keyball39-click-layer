/*
Copyright 2021 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

// USB Device descriptor parameter
#define VENDOR_ID    0x5957 // "YW" = Yowkees
#define PRODUCT_ID   0x0400 // 0x0400 ~ 0x04FF Keyball series
#define DEVICE_VER   0x0001
#define MANUFACTURER  "Yowkees"
#define PRODUCT      "Keyball39"

// key matrix size
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// key matrix pins
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }

// COL2ROW, ROW2COL
#define DIODE_DIRECTION COL2ROW

// Set 0 if debouncing isn't needed
#define DEBOUNCE 5

// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE

// Bootmagic Lite key configuration
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

#define DYNAMIC_KEYMAP_LAYER_COUNT 6

// Rotary Encoder
#define ENCODERS_PAD_A { D1 }
#define ENCODERS_PAD_B { D0 }
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A_RIGHT { D1 }
#define ENCODERS_PAD_B_RIGHT { D0 }
#define ENCODER_RESOLUTION_RIGHT 4

// Keyball-specific definitions

// configure for keyball 39
#define KEYBALL_LAYOUT_ANGLED
#define KEYBALL_LAYOUT_39KEY

// configure ball-related pins
#define KEYBALL_PIN_CONFIGURE_ARGS { .pin_sclk = D3, .pin_mosi = D2, .pin_miso = B0, .pin_cs = D5 }
#define KEYBALL_PIN_CONFIGURE_ARGS_RIGHT { .pin_sclk = D3, .pin_mosi = D2, .pin_miso = B0, .pin_cs = D5 }

// configure RGB LED related pins
#define RGBLED_NUM 54
#define RGBLED_SPLIT { 27, 27 }
#define RGBLIGHT_SPLIT

// configure DPI and CPI
#define KEYBALL_DEFAULT_DPI 500
#define KEYBALL_CPI_OPTIONS { 250, 500, 750, 1000, 1250 }
#define KEYBALL_CPI_DEFAULT 2

// Scroll
#define KEYBALL_SCROLL_DIV 8
#define KEYBALL_SCROLL_DIV_INVERSE

// Scroll button
#define KEYBALL_SCROLLBALL_INHIVITOR
#define KEYBALL_SCROLLBALL_INHIVITOR_TIMEOUT 50

// Scroll gesture
#define KEYBALL_SCROLL_GESTURE_ENABLE
#define KEYBALL_SCROLL_GESTURE_TRIGGER_COUNT 30
#define KEYBALL_SCROLL_GESTURE_MOVE_THRESHOLD_COUNT 20
#define KEYBALL_SCROLL_GESTURE_MOVE_THRESHOLD 30
#define KEYBALL_SCROLL_GESTURE_TIMEOUT 500
