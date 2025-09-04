// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                KC_H,   KC_K,   KC_R,   KC_Z,                         KC_Q,   KC_E,   KC_P,   KC_W,
        KC_B,   KC_M,   KC_S,   KC_N,   KC_T,   KC_G,         KC_C,   KC_A,   KC_O,   KC_I,  KC_U,   KC_V,
                        KC_F,   KC_L,   KC_D,   KC_J,         KC_X,   KC_Y,   MS_BTN1,MS_BTN2,
                                        KC_SPC, KC_TAB,       KC_DEL, KC_ENT
    )
};
