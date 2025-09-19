// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "quantum.h"
#include "feature/layer.h"
#include "feature/combo.h"
#include "feature/custom_key.h"

#define LB_MO LT(_MOUSE_LAYER, MS_BTN2) // Hold for mouse layer, tap for right click
#define SPC_FUN LT(_FUNCTION_LAYER, KC_SPC) // Hold for function layer, tap for space
#define TAB_NUM LT(_NUMPAD_LAYER, KC_TAB) // Hold for numpad layer, tap for tab
#define BSPC_SYM LT(_SYMBOL_LAYER, KC_BSPC) // Hold for symbol layer, tap for backspace

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_LAYER] = LAYOUT(
                    KC_H,       KC_K,       KC_R,       KC_Z,                                           KC_Q,       KC_E,       KC_P,       KC_W,
        KC_B,       KC_M,       KC_S,       KC_N,       KC_T,       KC_G,                   KC_C,       KC_A,       KC_O,       KC_I,       KC_U,       LB_MO,
                                KC_J,       KC_F,       KC_D,       KC_L,                   KC_X,       KC_Y,       KC_V,       MS_BTN1 ,
                                                        SPC_FUN ,   TAB_NUM ,               BSPC_SYM,   RCTL_T(KC_DEL)
    ),

    [_MOUSE_LAYER] = LAYOUT(
                    XXXXXXX,    KC_FIND,    XXXXXXX,    XXXXXXX,                                        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        C(KC_SLSH), C(KC_A),    C(KC_S),    C(KC_Z),    C(KC_Y),    KC_WREF,                SGUI(KC_S), XXXXXXX,    RCS(KC_T),  C(KC_T),    C(KC_W),    XXXXXXX,
                                C(KC_X) ,   C(KC_C),    C(KC_V),    KC_WSTP,                XXXXXXX,    C(KC_PGUP), C(KC_PGDN), KC_BTN3,
                                                        C(KC_LBRC), C(KC_RBRC),             KC_WFWD,    KC_WBAK
    ),

    [_SYMBOL_LAYER] = LAYOUT(
                    KC_CIRC,    KC_PERC,    KC_ASTR,    KC_PLUS,                                        CKC_BRC,    KC_DQT ,    KC_QUOT,    KC_GRV,
        KC_EQL ,    KC_AT  ,    KC_HASH,    KC_DLR ,    KC_AMPR,    KC_PIPE,                KC_UNDS,    CKC_PRN,    CKC_BRCT,   KC_COLN,    KC_SCLN,    CKC_MNS,
                                KC_LT  ,    KC_GT  ,    KC_EXLM,    KC_QUES,                CKC_SL ,    KC_DOT ,    KC_COMM ,   KC_TILD,
                                                        KC_LNG2,    KC_LNG1,                XXXXXXX,    XXXXXXX
    ),

    [_NUMPAD_LAYER] = LAYOUT(
                    KC_6   ,    KC_7   ,    KC_8   ,    KC_9   ,                                        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_0   ,    KC_1   ,    KC_2   ,    KC_3   ,    KC_4   ,    KC_5   ,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                XXXXXXX,    KC_COLN,    KC_MINUS,   KC_DOT ,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                        XXXXXXX,    XXXXXXX,                XXXXXXX,    XXXXXXX
    ),

    [_FUNCTION_LAYER] = LAYOUT(
                    KC_F6  ,    KC_F7  ,    KC_F8  ,    KC_F9  ,                                        QK_BOOT,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_F10 ,    KC_F1  ,    KC_F2  ,    KC_F3  ,    KC_F4  ,    KC_F5  ,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                XXXXXXX,    XXXXXXX,    KC_F12 ,    KC_F11 ,                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                                        XXXXXXX,    XXXXXXX,                XXXXXXX,    XXXXXXX
    )
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
