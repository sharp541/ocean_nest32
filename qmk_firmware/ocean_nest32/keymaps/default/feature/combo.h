#pragma once

#include "quantum.h"

enum combos {
    ENT_R_COMBO,
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
const uint16_t PROGMEM ent_r_combo[] = {KC_I, KC_E, COMBO_END};
const uint16_t PROGMEM ent_l_combo[] = {KC_S, KC_N, COMBO_END};

// backspace
const uint16_t PROGMEM bspc_r_combo[] = {KC_I, KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM bspc_l_combo[] = {KC_S, KC_N, KC_T, COMBO_END};

// up arrow
const uint16_t PROGMEM uarr_r_combo[] = {KC_O, KC_O, COMBO_END};
const uint16_t PROGMEM uarr_l_combo[] = {KC_K, KC_R, COMBO_END};

// down arrow
const uint16_t PROGMEM darr_r_combo[] = {KC_A, KC_O, KC_Y, COMBO_END};
const uint16_t PROGMEM darr_l_combo[] = {KC_K, KC_R, KC_T, COMBO_END};

// right arrow
const uint16_t PROGMEM rarr_r_combo[] = {KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM rarr_l_combo[] = {KC_R, KC_T, COMBO_END};

// left arrow
const uint16_t PROGMEM larr_r_combo[] = {KC_A, KC_O, COMBO_END};
const uint16_t PROGMEM larr_l_combo[] = {KC_T, KC_K, COMBO_END};

// home
const uint16_t PROGMEM home_r_combo[] = {KC_W, KC_Y, COMBO_END};

// end
const uint16_t PROGMEM end_r_combo[] = {KC_E, KC_W, KC_Y, COMBO_END};

// esc
const uint16_t PROGMEM esc_r_combo[] = {KC_P, KC_COMM, COMBO_END};

// alt
const uint16_t PROGMEM alt_l_combo[] = {KC_Z, KC_G, COMBO_END};

// gui
const uint16_t PROGMEM gui_l_combo[] = {KC_M, KC_S, COMBO_END};

// caps word
const uint16_t PROGMEM cw_togg_combo[] = {KC_H, KC_W, COMBO_END};

// left_1
const uint16_t PROGMEM left_1_combo[] = {KC_S, KC_K, COMBO_END};

// left_2
const uint16_t PROGMEM left_2_combo[] = {KC_R, KC_N, COMBO_END};

// left_3
const uint16_t PROGMEM left_3_combo[] = {KC_Z, KC_T, COMBO_END};

// left_4
const uint16_t PROGMEM left_4_combo[] = {KC_T, KC_G, COMBO_END};

// right_1
const uint16_t PROGMEM right_1_combo[] = {KC_P, KC_A, COMBO_END};

// right_2
const uint16_t PROGMEM right_2_combo[] = {KC_COMM, KC_A, COMBO_END};

// right_3
const uint16_t PROGMEM right_3_combo[] = {KC_E, KC_O, COMBO_END};

// right_4
const uint16_t PROGMEM right_4_combo[] = {KC_Y, KC_I, COMBO_END};

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
