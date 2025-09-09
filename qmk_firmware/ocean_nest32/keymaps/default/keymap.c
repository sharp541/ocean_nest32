// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "quantum.h"
#include "layer.h"
#include "tap_dance.h"
#include "combo.h"

#define LB_MO LT(_MOUSE_LAYER, MS_BTN2) // Hold for mouse layer, tap for right click
#define SPC_FUN LT(_FUNCTION_LAYER, KC_SPC) // Hold for function layer, tap for space
#define TAB_NUM LT(_NUMPAD_LAYER, KC_TAB) // Hold for numpad layer, tap for tab

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_LAYER] = LAYOUT(
                    TD(TD_H),   TD(TD_K),   TD(TD_R),   TD(TD_Z),                                       TD(TD_Q),   TD(TD_E),   TD(TD_P),   TD(TD_W),
        TD(TD_B),   TD(TD_M),   TD(TD_S),   TD(TD_N),   TD(TD_T),   TD(TD_G),               TD(TD_C),   TD(TD_A),   TD(TD_O),   TD(TD_I),   TD(TD_U),   LB_MO,
                                TD(TD_F),   TD(TD_L),   TD(TD_D),   TD(TD_J),               TD(TD_X),   TD(TD_Y),   TD(TD_V),   MS_BTN1 ,
                                                        SPC_FUN ,   TAB_NUM ,               RCTL_T(KC_DEL),     KC_BSPC
    ),

    [_MOUSE_LAYER] = LAYOUT(
                    XXXXXXX,    KC_FIND,    XXXXXXX,    XXXXXXX,                                        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        C(KC_SLSH), C(KC_A),    C(KC_S),    KC_UNDO,    KC_AGIN,    KC_WREF,                SGUI(KC_S), XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                KC_CUT ,    KC_COPY,    KC_PSTE,    KC_WSTP,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                        C(KC_LBRC), C(KC_RBRC),             KC_WFWD,    KC_WBAK
    ),

    [_SYMBOL_LAYER] = LAYOUT(
                    KC_CIRC,    KC_PERC,    KC_ASTR,    KC_PLUS,                                        TD(TD_BRC), TD(TD_QT),  KC_GRV ,    KC_TILD,
        KC_EQL ,    KC_AT  ,    KC_HASH,    KC_DLR ,    KC_AMPR,    KC_PIPE,                KC_UNDS,    TD(TD_PRN), TD(TD_BRCT),KC_COLN,    KC_SCLN,    KC_MINUS,
                                KC_LT  ,    KC_GT  ,    KC_EXLM,    KC_QUES,                TD(TD_SL_B),KC_DOT ,    KC_COMM ,   KC_QUOT,
                                                        KC_LNG2,    KC_LNG1,                XXXXXXX,    XXXXXXX
    ),

    [_NUMPAD_LAYER] = LAYOUT(
                    KC_6   ,    KC_7   ,    KC_8   ,    KC_9   ,                                        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_0   ,    KC_1   ,    KC_2   ,    KC_3   ,    KC_4   ,    KC_5   ,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                        XXXXXXX,    XXXXXXX,                XXXXXXX,    XXXXXXX
    ),

    [_FUNCTION_LAYER] = LAYOUT(
                    KC_F6  ,    KC_F7  ,    KC_F8  ,    KC_F9  ,                                        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_F10 ,    KC_F1  ,    KC_F2  ,    KC_F3  ,    KC_F4  ,    KC_F5  ,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                XXXXXXX,    XXXXXXX,    KC_F12 ,    KC_F11 ,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
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
    [TD_SL_B] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS),
    [TD_PRN] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_RPRN),
    [TD_BRC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
    [TD_BRCT] = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_RCBR),
    [TD_QT] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_DQT)
};

combo_t key_combos[] = {
    [ENT_R_COMBO] = COMBO(ent_r_combo, KC_ENT),
    [ENT_L_COMBO] = COMBO(ent_l_combo, SFT_T(KC_ENT)),
    [BSPC_R_COMBO] = COMBO(bspc_r_combo, C(KC_BSPC)),
    [BSPC_L_COMBO] = COMBO(bspc_l_combo, KC_BSPC),
    [UARR_R_COMBO] = COMBO(uarr_r_combo, KC_UP),
    [UARR_L_COMBO] = COMBO(uarr_l_combo, KC_UP),
    [DARR_R_COMBO] = COMBO(darr_r_combo, KC_DOWN),
    [DARR_L_COMBO] = COMBO(darr_l_combo, KC_DOWN),
    [RARR_R_COMBO] = COMBO(rarr_r_combo, KC_RIGHT),
    [RARR_L_COMBO] = COMBO(rarr_l_combo, KC_RIGHT),
    [LARR_R_COMBO] = COMBO(larr_r_combo, KC_LEFT),
    [LARR_L_COMBO] = COMBO(larr_l_combo, KC_LEFT),
    [HOME_R_COMBO] = COMBO(home_r_combo, KC_HOME),
    [END_R_COMBO] = COMBO(end_r_combo, KC_END),
    [ESC_R_COMBO] = COMBO(esc_r_combo, KC_ESC),
    [ALT_L_COMBO] = COMBO(alt_l_combo, KC_LALT),
    [GUI_L_COMBO] = COMBO(gui_l_combo, KC_LGUI),
    [CW_COMBO] = COMBO(cw_combo, CW_TOGG),
};
