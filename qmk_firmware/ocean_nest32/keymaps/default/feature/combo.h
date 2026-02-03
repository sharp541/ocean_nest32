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
    V_COMBO,
    J_COMBO,
    C_COMBO,
    L_COMBO,
    X_COMBO,
    Q_COMBO,
    DOT_COMBO,
    COMMA_COMBO,
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
const uint16_t PROGMEM ent_r_combo[] = {KC_T, KC_O, COMBO_END};
const uint16_t PROGMEM ent_l_combo[] = {KC_S, KC_N, COMBO_END};

// backspace
const uint16_t PROGMEM bspc_r_combo[] = {KC_A, KC_T, KC_O, COMBO_END};
const uint16_t PROGMEM bspc_l_combo[] = {KC_S, KC_N, KC_I, COMBO_END};

// up arrow
const uint16_t PROGMEM uarr_r_combo[] = {KC_E, KC_B, COMBO_END};
const uint16_t PROGMEM uarr_l_combo[] = {KC_K, KC_R, COMBO_END};

// down arrow
const uint16_t PROGMEM darr_r_combo[] = {KC_A, KC_E, KC_B, COMBO_END};
const uint16_t PROGMEM darr_l_combo[] = {KC_K, KC_R, KC_I, COMBO_END};

// right arrow
const uint16_t PROGMEM rarr_r_combo[] = {KC_A, KC_B, COMBO_END};
const uint16_t PROGMEM rarr_l_combo[] = {KC_R, KC_I, COMBO_END};

// left arrow
const uint16_t PROGMEM larr_r_combo[] = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM larr_l_combo[] = {KC_K, KC_I, COMBO_END};

// home
const uint16_t PROGMEM home_r_combo[] = {KC_B, KC_D, COMBO_END};

// end
const uint16_t PROGMEM end_r_combo[] = {KC_B, KC_D, KC_O, COMBO_END};

// esc
const uint16_t PROGMEM esc_r_combo[] = {KC_F, KC_Z, COMBO_END};

// alt
const uint16_t PROGMEM alt_l_combo[] = {KC_W, KC_G, COMBO_END};

// gui
const uint16_t PROGMEM gui_l_combo[] = {KC_M, KC_S, COMBO_END};

// caps word
const uint16_t PROGMEM cw_togg_combo[] = {KC_I, KC_A, COMBO_END};

// V
const uint16_t PROGMEM v_combo[] = {KC_W, KC_I, COMBO_END};

// J
const uint16_t PROGMEM j_combo[] = {KC_K, KC_S, COMBO_END};

// C
const uint16_t PROGMEM c_combo[] = {KC_I, KC_G, COMBO_END};

// L
const uint16_t PROGMEM l_combo[] = {KC_R, KC_N, COMBO_END};

// X
const uint16_t PROGMEM x_combo[] = {KC_E, KC_O, COMBO_END};

// Q
const uint16_t PROGMEM q_combo[] = {KC_B, KC_T, COMBO_END};

// Dot
const uint16_t PROGMEM dot_combo[] = {KC_A, KC_Z, COMBO_END};

// Comma
const uint16_t PROGMEM comma_combo[] = {KC_F, KC_A, COMBO_END};

// parentheses
const uint16_t PROGMEM lprn_combo[] = {KC_PLUS, KC_AMPR, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {KC_DQT, KC_MINS, COMBO_END};

// brackets
const uint16_t PROGMEM lbrk_combo[] = {KC_AMPR, KC_PIPE, COMBO_END};
const uint16_t PROGMEM rbrk_combo[] = {KC_UNDS, KC_MINS, COMBO_END};

// braces
const uint16_t PROGMEM lbrc_combo[] = {KC_ASTR, KC_PERC, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_QUOT, KC_BSLS, COMBO_END};

// angle brackets
const uint16_t PROGMEM llt_combo[] = {KC_DLR, KC_HASH, COMBO_END};
const uint16_t PROGMEM rgt_combo[] = {KC_GRV, KC_COLN, COMBO_END};
