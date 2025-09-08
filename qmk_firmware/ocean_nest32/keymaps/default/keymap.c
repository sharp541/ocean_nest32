// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "quantum.h"
#include "layer.h"
#include "tap_dance.h"

#define LB_MO LT(_MOUSE_LAYER, MS_BTN2) // Hold for mouse layer, tap for right click

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_LAYER] = LAYOUT(
                    TD(TD_H),   TD(TD_K),   TD(TD_R),   TD(TD_Z),                                       TD(TD_Q),   TD(TD_E),   TD(TD_P),   TD(TD_W),
        TD(TD_B),   TD(TD_M),   TD(TD_S),   TD(TD_N),   TD(TD_T),   TD(TD_G),               TD(TD_C),   TD(TD_A),   TD(TD_O),   TD(TD_I),   TD(TD_U),   LB_MO,
                                TD(TD_F),   TD(TD_L),   TD(TD_D),   TD(TD_J),               TD(TD_X),   TD(TD_Y),   TD(TD_V),   MS_BTN1 ,
                                            KC_SPC,     KC_TAB,                             RCTL_T(KC_DEL),     KC_ENT
    ),

    [_MOUSE_LAYER] = LAYOUT(
                    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                                        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                        XXXXXXX,    XXXXXXX,                XXXXXXX,    XXXXXXX
    )
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_A] = ACTION_TAP_DANCE_DOUBLE(KC_A, LSFT(KC_A)),
    [TD_B] = ACTION_TAP_DANCE_DOUBLE(KC_B, LSFT(KC_B)),
    [TD_C] = ACTION_TAP_DANCE_DOUBLE(KC_C, LSFT(KC_C)),
    [TD_D] = ACTION_TAP_DANCE_DOUBLE(KC_D, LSFT(KC_D)),
    [TD_E] = ACTION_TAP_DANCE_DOUBLE(KC_E, LSFT(KC_E)),
    [TD_F] = ACTION_TAP_DANCE_DOUBLE(KC_F, LSFT(KC_F)),
    [TD_G] = ACTION_TAP_DANCE_DOUBLE(KC_G, LSFT(KC_G)),
    [TD_H] = ACTION_TAP_DANCE_DOUBLE(KC_H, LSFT(KC_H)),
    [TD_I] = ACTION_TAP_DANCE_DOUBLE(KC_I, LSFT(KC_I)),
    [TD_J] = ACTION_TAP_DANCE_DOUBLE(KC_J, LSFT(KC_J)),
    [TD_K] = ACTION_TAP_DANCE_DOUBLE(KC_K, LSFT(KC_K)),
    [TD_L] = ACTION_TAP_DANCE_DOUBLE(KC_L, LSFT(KC_L)),
    [TD_M] = ACTION_TAP_DANCE_DOUBLE(KC_M, LSFT(KC_M)),
    [TD_N] = ACTION_TAP_DANCE_DOUBLE(KC_N, LSFT(KC_N)),
    [TD_O] = ACTION_TAP_DANCE_DOUBLE(KC_O, LSFT(KC_O)),
    [TD_P] = ACTION_TAP_DANCE_DOUBLE(KC_P, LSFT(KC_P)),
    [TD_Q] = ACTION_TAP_DANCE_DOUBLE(KC_Q, LSFT(KC_Q)),
    [TD_R] = ACTION_TAP_DANCE_DOUBLE(KC_R, LSFT(KC_R)),
    [TD_S] = ACTION_TAP_DANCE_DOUBLE(KC_S, LSFT(KC_S)),
    [TD_T] = ACTION_TAP_DANCE_DOUBLE(KC_T, LSFT(KC_T)),
    [TD_U] = ACTION_TAP_DANCE_DOUBLE(KC_U, LSFT(KC_U)),
    [TD_V] = ACTION_TAP_DANCE_DOUBLE(KC_V, LSFT(KC_V)),
    [TD_W] = ACTION_TAP_DANCE_DOUBLE(KC_W, LSFT(KC_W)),
    [TD_X] = ACTION_TAP_DANCE_DOUBLE(KC_X, LSFT(KC_X)),
    [TD_Y] = ACTION_TAP_DANCE_DOUBLE(KC_Y, LSFT(KC_Y)),
    [TD_Z] = ACTION_TAP_DANCE_DOUBLE(KC_Z, LSFT(KC_Z)),
};
