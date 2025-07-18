/*
 * ユーティリティ関数のヘッダファイル
 */

#pragma once

#include "quantum.h"

// 絶対値を計算する関数（インライン関数として定義）
static inline int16_t my_abs(int16_t x) {
    return x < 0 ? -x : x;
}

// int8_t型に値を制限する関数
static inline int8_t clip2int8(int16_t x) {
    if (x > 127) return 127;
    if (x < -128) return -128;
    return (int8_t)x;
}