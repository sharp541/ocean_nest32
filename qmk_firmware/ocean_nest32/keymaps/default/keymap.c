// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "quantum.h"
#include "feature/layer.h"
#include "feature/combo.h"
#include "feature/custom_key.h"

#define LB_MO LT(_MOUSE_LAYER, MS_BTN2) // Hold for mouse layer, tap for right click
#define SPC_NUM LT(_NUMPAD_LAYER, KC_SPC) // Hold for function layer, tap for space
#define BSP_SYM LT(_SYMBOL_LAYER, KC_BSPC) // Hold for symbol layer, tap for backspace
#define DEL_FUN LT(_FUNCTION_LAYER, KC_DEL) // Hold for function layer, tap for delete

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHA1_LAYER] = LAYOUT(
        KC_H,       KC_K,       KC_R,       KC_W,                                                       KC_F,       KC_E,       KC_M,       KC_D,
        KC_B,       KC_S,       KC_N,       KC_I,       KC_G,                               KC_Z,       KC_A,       KC_O,       KC_T,       KC_P,
                                            KC_Y,                                                       KC_U,       MS_BTN1,    LB_MO ,
                                                        SPC_NUM,  CTL_T(KC_TAB),DEL_FUN,    BSP_SYM
    ),

    [_MOUSE_LAYER] = LAYOUT(
        C(KC_A),    C(KC_S),    C(KC_Z),    C(KC_Y),                                                    _______,    _______,    _______,    _______,
        C(KC_X),    C(KC_C),    C(KC_V),    C(KC_SLSH), _______,                            _______,    RCS(KC_T),  KC_BTN3,    _______,    _______,
                                            SGUI(KC_S),                                                 C(KC_T),    C(KC_W),    _______,
                                                        C(KC_LBRC), C(KC_RBRC), KC_WFWD,    KC_WBAK
    ),

    [_SYMBOL_LAYER] = LAYOUT(
        KC_CIRC,    KC_DLR,     KC_ASTR,    KC_PLUS,                                                    KC_DQT,     KC_QUOT,    KC_GRV,     KC_TILD,
        KC_AT,      KC_HASH,    KC_PERC,    KC_AMPR ,   KC_PIPE,                            KC_UNDS,    KC_MINS,    KC_BSLS,    KC_COLN,    KC_SCLN,
                                            KC_EQL,                                                     KC_SLSH ,   KC_QUES,    KC_EXLM,
                                                        KC_LNG2,    KC_LNG1,    _______,    _______
    ),

    [_NUMPAD_LAYER] = LAYOUT(
        KC_5   ,    KC_6   ,    KC_7   ,    KC_8   ,                                                    _______,    _______,    _______,    _______,
        KC_0   ,    KC_1   ,    KC_2   ,    KC_3   ,    KC_4   ,                            _______,    _______,    _______,    _______,    _______,
                                            KC_9,                                                       _______,    _______,    _______,
                                                        _______,    MS_BTN2,    _______,    _______
    ),

    [_FUNCTION_LAYER] = LAYOUT(
        KC_F5  ,    KC_F6  ,    KC_F7  ,    KC_F8  ,                                                    _______,    _______,    _______,    _______,
        KC_F10 ,    KC_F1  ,    KC_F2  ,    KC_F3  ,    KC_F4  ,                            _______,    _______,    _______,    _______,    _______,
                                            KC_F9 ,                                                    _______,    _______,    _______,
                                                        _______,    _______,    _______,    _______
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_ALPHA1_LAYER] =   { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [_MOUSE_LAYER]  =   { ENCODER_CCW_CW(MS_WHLR, MS_WHLL) },
    [_SYMBOL_LAYER] =   { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    [_NUMPAD_LAYER] =   { ENCODER_CCW_CW(C(KC_PGUP), C(KC_PGDN)) },
    [_FUNCTION_LAYER]=  { ENCODER_CCW_CW(LSA(KC_TAB), A(KC_TAB)) }
};


combo_t key_combos[] = {
    [ENT_R_COMBO] = COMBO(ent_r_combo, CTL_T(KC_ENT)),
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
    [CW_TOGG_COMBO] = COMBO(cw_togg_combo, CW_TOGG),
    [V_COMBO] = COMBO(v_combo, KC_V),
    [J_COMBO] = COMBO(j_combo, KC_J),
    [C_COMBO] = COMBO(c_combo, KC_C),
    [L_COMBO] = COMBO(l_combo, KC_L),
    [X_COMBO] = COMBO(x_combo, KC_X),
    [Q_COMBO] = COMBO(q_combo, KC_Q),
    [DOT_COMBO] = COMBO(dot_combo, KC_DOT),
    [COMMA_COMBO] = COMBO(comma_combo, KC_COMM),
    [LPRN_COMBO] = COMBO(lprn_combo, KC_LPRN),
    [RPRN_COMBO] = COMBO(rprn_combo, KC_RPRN),
    [LBRK_COMBO] = COMBO(lbrk_combo, KC_LBRC),
    [RBRK_COMBO] = COMBO(rbrk_combo, KC_RBRC),
    [LBRC_COMBO] = COMBO(lbrc_combo, KC_LCBR),
    [RBRC_COMBO] = COMBO(rbrc_combo, KC_RCBR),
    [LLT_COMBO] = COMBO(llt_combo, KC_LT),
    [RGT_COMBO] = COMBO(rgt_combo, KC_GT)
};
