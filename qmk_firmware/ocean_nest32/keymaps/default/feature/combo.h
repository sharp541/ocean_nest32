#pragma once

#include "quantum.h"

enum combos {
    ENT_L_COMBO,
    BSPC_R_COMBO,
    BSPC_L_COMBO,
    UARR_R_COMBO,
    UARR_L_COMBO,
    DARR_R_COMBO,
    DARR_L_COMBO,
    RARR_R_COMBO,
    RARR_L_COMBO,
    LARR_R_COMBO,
    LARR_L_COMBO,
    HOME_R_COMBO,
    END_R_COMBO,
    ESC_R_COMBO,
    ALT_L_COMBO,
    GUI_L_COMBO,
    CW_TOGG_COMBO,
    LEFT_1_COMBO,
    LEFT_2_COMBO,
    LEFT_3_COMBO,
    LEFT_4_COMBO,
    RIGHT_1_COMBO,
    RIGHT_2_COMBO,
    RIGHT_3_COMBO,
    RIGHT_4_COMBO,
    LPRN_COMBO,
    RPRN_COMBO,
    LBRK_COMBO,
    RBRK_COMBO,
    LBRC_COMBO,
    RBRC_COMBO,
    LLT_COMBO,
    RGT_COMBO
};

// enter
const uint16_t PROGMEM ent_l_combo[] = {KC_K, KC_C, COMBO_END};

// backspace
const uint16_t PROGMEM bspc_r_combo[] = {KC_N, KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM bspc_l_combo[] = {KC_K, KC_C, KC_T, COMBO_END};

// up arrow
const uint16_t PROGMEM uarr_r_combo[] = {KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM uarr_l_combo[] = {KC_S, KC_I, COMBO_END};

// down arrow
const uint16_t PROGMEM darr_r_combo[] = {KC_N, KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM darr_l_combo[] = {KC_S, KC_I, KC_T, COMBO_END};

// right arrow
const uint16_t PROGMEM rarr_r_combo[] = {KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM rarr_l_combo[] = {KC_T, KC_I, COMBO_END};

// left arrow
const uint16_t PROGMEM larr_r_combo[] = {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM larr_l_combo[] = {KC_T, KC_S, COMBO_END};

// home
const uint16_t PROGMEM home_r_combo[] = {KC_A, KC_DOT, COMBO_END};

// end
const uint16_t PROGMEM end_r_combo[] = {KC_U, KC_A, KC_DOT, COMBO_END};

// esc
const uint16_t PROGMEM esc_r_combo[] = {KC_L, KC_COMM, COMBO_END};

// alt
const uint16_t PROGMEM alt_l_combo[] = {KC_Y, KC_G, COMBO_END};

// gui
const uint16_t PROGMEM gui_l_combo[] = {KC_D, KC_K, COMBO_END};

// caps word
const uint16_t PROGMEM cw_togg_combo[] = {KC_T, KC_N, COMBO_END};

// left_1
const uint16_t PROGMEM v_combo[] = {KC_S, KC_K, COMBO_END};

// left_2
const uint16_t PROGMEM j_combo[] = {KC_I, KC_C, COMBO_END};

// left_3
const uint16_t PROGMEM c_combo[] = {KC_Y, KC_T, COMBO_END};

// left_4
const uint16_t PROGMEM l_combo[] = {KC_T, KC_M, COMBO_END};

// right_1
const uint16_t PROGMEM x_combo[] = {KC_R, KC_N, COMBO_END};

// right_2
const uint16_t PROGMEM q_combo[] = {KC_COMM, KC_N, COMBO_END};

// right_3
const uint16_t PROGMEM dot_combo[] = {KC_E, KC_U, COMBO_END};

// right_4
const uint16_t PROGMEM comma_combo[] = {KC_A, KC_O, COMBO_END};

// parentheses
const uint16_t PROGMEM lprn_combo[] = {KC_PLUS, KC_AMPR, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {KC_QUOT, KC_MINS, COMBO_END};

// brackets
const uint16_t PROGMEM lbrk_combo[] = {KC_AMPR, KC_PIPE, COMBO_END};
const uint16_t PROGMEM rbrk_combo[] = {KC_UNDS, KC_MINS, COMBO_END};

// braces
const uint16_t PROGMEM lbrc_combo[] = {KC_ASTR, KC_PERC, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_DQT, KC_BSLS, COMBO_END};

// angle brackets
const uint16_t PROGMEM llt_combo[] = {KC_DLR, KC_HASH, COMBO_END};
const uint16_t PROGMEM rgt_combo[] = {KC_GRV, KC_COLN, COMBO_END};
