// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "quantum.h"
#include "layer.h"

#define LB_MO LT(_MOUSE_LAYER, MS_BTN2) // Hold for mouse layer, tap for right click

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_LAYER] = LAYOUT(
                KC_H,   KC_K,   KC_R,   KC_Z,                           KC_Q,   KC_E,   KC_P,   KC_W,
        KC_B,   KC_M,   KC_S,   KC_N,   KC_T,   KC_G,           KC_C,   KC_A,   KC_O,   KC_I,  KC_U,   KC_V,
                        KC_F,   KC_L,   KC_D,   KC_J,           KC_X,   KC_Y,   MS_BTN1,LB_MO,
                                        KC_SPC, KC_TAB,         KC_DEL, KC_ENT
    ),

    [_MOUSE_LAYER] = LAYOUT(
                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
                                        XXXXXXX,XXXXXXX,        XXXXXXX,XXXXXXX
    )
};

static bool scrolling_mode = false;

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _MOUSE_LAYER:  // If we're on the _MOUSE layer enable scrolling mode
            scrolling_mode = true;
            pointing_device_set_cpi(2000);
            break;
        default:
            if (scrolling_mode) {  // check if we were scrolling before and set disable if so
                scrolling_mode = false;
                pointing_device_set_cpi(8000);
            }
            break;
    }
    return state;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (scrolling_mode) {
        mouse_report.h = mouse_report.x;
        mouse_report.v = mouse_report.y;
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;
}
