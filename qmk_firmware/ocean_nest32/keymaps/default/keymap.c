// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "quantum.h"
#include "feature/layer.h"
#include "feature/combo.h"
#include "feature/custom_key.h"

#define LB_MO LT(_MOUSE_LAYER, MS_BTN2) // Hold for mouse layer, tap for right click
#define SPC_A2 LT(_ALPHA2_LAYER, KC_SPC) // Hold for function layer, tap for space
#define TAB_NUM LT(_NUMPAD_LAYER, KC_TAB) // Hold for numpad layer, tap for tab
#define BSP_SYM LT(_SYMBOL_LAYER, KC_BSPC) // Hold for symbol layer, tap for backspace
#define DEL_FUN LT(_FUNCTION_LAYER, KC_DEL) // Hold for function layer, tap for delete

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHA1_LAYER] = LAYOUT(
        KC_P,       KC_K,       KC_R,       KC_Z,                                                       KC_C,       KC_U,       KC_E,       KC_MINS,
        KC_M,       KC_S,       KC_N,       KC_T,       KC_G,                               KC_DOT,     KC_I,       KC_A,       KC_O,       KC_D,
        KC_H,                               KC_Y,                                                       KC_COMM,    MS_BTN1,    LB_MO ,     KC_W,
                                                        SPC_A2 ,    TAB_NUM ,   DEL_FUN,    BSP_SYM
    ),

    [_ALPHA2_LAYER] = LAYOUT(
        _______,    KC_V,       _______,    _______,                                                    CKC_BRCT,   KC_TILD,    _______,    _______,
        KC_X,       KC_B,       KC_L,       KC_F,       KC_Q,                               _______,    CKC_PRN,    CKC_BRC,    _______,    _______,
        _______,                            KC_J,                                                       KC_GT,      KC_LT,      _______ ,   _______,
                                                        _______,    _______ ,   _______,    CW_TOGG
    ),

    [_MOUSE_LAYER] = LAYOUT(
        _______,    C(KC_S),    C(KC_Z),    C(KC_Y),                                                    _______,    _______,    _______,    _______,
        C(KC_X),    C(KC_C),    C(KC_V),    _______,    C(KC_SLSH),                         C(KC_PGUP), C(KC_PGDN), KC_BTN3,    _______,    _______,
        C(KC_A),                            SGUI(KC_S),                                                 C(KC_T),    C(KC_W),    _______,    RCS(KC_T),
                                                        C(KC_LBRC), C(KC_RBRC), KC_WFWD,    KC_WBAK
    ),

    [_SYMBOL_LAYER] = LAYOUT(
        KC_CIRC,    KC_PERC,    KC_ASTR,    KC_PLUS,                                                    KC_DQT,     KC_QUOT,    KC_GRV,     _______,
        KC_AT,      KC_HASH,    KC_DLR,     KC_AMPR ,   KC_PIPE,                            KC_UNDS,    KC_EQL,     _______,    KC_COLN,    KC_SCLN,
        KC_EXLM,                            KC_QUES,                                                    CKC_SL ,    _______ ,   _______,    _______,
                                                        KC_LNG2,    KC_LNG1,    _______,    _______
    ),

    [_NUMPAD_LAYER] = LAYOUT(
        KC_6   ,    KC_7   ,    KC_8   ,    KC_9   ,                                                    _______,    _______,    _______,    _______,
        KC_1   ,    KC_2   ,    KC_3   ,    KC_4   ,    KC_5   ,                            _______,    _______,    _______,    _______,    _______,
        KC_0,                               KC_DOT ,                                                    _______,    _______,    _______,    _______,
                                                        _______,    _______,    _______,    _______
    ),

    [_FUNCTION_LAYER] = LAYOUT(
        KC_F6  ,    KC_F7  ,    KC_F8  ,    KC_F9  ,                                                    QK_BOOT,    _______,    _______,    _______,
        KC_F1  ,    KC_F2  ,    KC_F3  ,    KC_F4  ,    KC_F5  ,                            _______,    _______,    _______,    _______,    _______,
        KC_F10,                             KC_F11 ,                                                    _______,    _______,    _______,    _______,
                                                        _______,    MS_BTN2,    _______,    _______
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_ALPHA1_LAYER] =   { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    [_ALPHA2_LAYER] =   { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    [_MOUSE_LAYER]  =   { ENCODER_CCW_CW(LALT(KC_TAB), LSA(KC_TAB)) },
    [_SYMBOL_LAYER] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_NUMPAD_LAYER] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_FUNCTION_LAYER]=  { ENCODER_CCW_CW(MS_WHLR, MS_WHLL) },
};


combo_t key_combos[] = {
    [ENT_R_COMBO] = COMBO(ent_r_combo, SFT_T(KC_ENT)),
    [ENT_L_COMBO] = COMBO(ent_l_combo, SFT_T(KC_ENT)),
    [BSPC_R_COMBO] = COMBO(bspc_r_combo, C(KC_BSPC)),
    [BSPC_L_COMBO] = COMBO(bspc_l_combo, KC_BSPC),
    [UARR_R_COMBO] = COMBO(uarr_r_combo, KC_UP),
    [UARR_L_COMBO] = COMBO(uarr_l_combo, KC_UP),
    [DARR_R_COMBO] = COMBO(darr_r_combo, KC_DOWN),
    [DARR_L_COMBO] = COMBO(darr_l_combo, KC_DOWN),
    [HOME_R_COMBO] = COMBO(home_r_combo, KC_HOME),
    [END_R_COMBO] = COMBO(end_r_combo, KC_END),
    [ESC_R_COMBO] = COMBO(esc_r_combo, KC_ESC),
    [ALT_L_COMBO] = COMBO(alt_l_combo, KC_LALT),
    [GUI_L_COMBO] = COMBO(gui_l_combo, KC_LGUI)
};
