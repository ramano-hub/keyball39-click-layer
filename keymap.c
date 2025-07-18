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
#include QMK_KEYBOARD_H
#include "features/auto_click_layer.h"

// クリックレイヤーを含む各レイヤーの定義
enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
    _CLICK
};

// キーマップで使用する記号の定義
#define KC_L_SPC LT(_LOWER, KC_SPC)  // ホールドでLOWERレイヤー、タップでスペース
#define KC_R_ENT LT(_RAISE, KC_ENT)  // ホールドでRAISEレイヤー、タップでエンター
#define KC_G_JA LGUI_T(KC_LANG1)     // ホールドで左GUI、タップで英数
#define KC_G_EN LGUI_T(KC_LANG2)     // ホールドで左GUI、タップでかな
#define KC_C_BS LCTL_T(KC_BSPC)      // ホールドで左CTRL、タップでバックスペース

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // QWERTY
  [_QWERTY] = LAYOUT_keyball39(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.      
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|      
                         KC_G_JA, KC_C_BS, KC_L_SPC,                               KC_R_ENT,  KC_DEL, KC_G_EN 
  //                  `---------------------------'                                  `---------------------------'
  ),

  // LOWER
  [_LOWER] = LAYOUT_keyball39(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.      
       KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|      
                         KC_G_JA, KC_C_BS, KC_L_SPC,                               KC_R_ENT,  KC_DEL, KC_G_EN 
  //                  `---------------------------'                                  `---------------------------'
  ),

  // RAISE
  [_RAISE] = LAYOUT_keyball39(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.      
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|      
                         KC_G_JA, KC_C_BS, KC_L_SPC,                               KC_R_ENT,  KC_DEL, KC_G_EN 
  //                  `---------------------------'                                  `---------------------------'
  ),

  // ADJUST
  [_ADJUST] = LAYOUT_keyball39(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.      
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|      
                         KC_G_JA, KC_C_BS, KC_L_SPC,                               KC_R_ENT,  KC_DEL, KC_G_EN 
  //                  `---------------------------'                                  `---------------------------'
  ),

  // CLICK LAYER
  [_CLICK] = LAYOUT_keyball39(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.      
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_BTN1, KC_BTN3, KC_BTN2, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|      
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_BTN4, XXXXXXX, KC_BTN5, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------'                    `--------+--------+--------+--------+--------+--------|      
                         _______, _______, _______,                               _______, _______, _______ 
  //                  `---------------------------'                                  `---------------------------'
  )
};

// レイヤー状態更新時のフック
layer_state_t layer_state_set_user(layer_state_t state) {
    // LOWERレイヤーとRAISEレイヤーが同時に有効な場合、ADJUSTレイヤーを有効にする
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// キーボード初期化後のフック
void keyboard_post_init_user(void) {
    // クリックレイヤー機能の初期化
    auto_click_layer_init();
}
