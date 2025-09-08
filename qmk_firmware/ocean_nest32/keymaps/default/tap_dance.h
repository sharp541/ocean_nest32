#pragma once

#include "quantum.h"

typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_TAP,
    TD_DOUBLE_HOLD,
    TD_DOUBLE_SINGLE_TAP, // Send two single taps
    TD_TRIPLE_TAP,
    TD_TRIPLE_HOLD
} td_state_t;

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

// Tap dance enums
enum {
    TD_A, TD_B, TD_C, TD_D, TD_E, TD_F, TD_G, TD_H, TD_I, TD_J,
    TD_K, TD_L, TD_M, TD_N, TD_O, TD_P, TD_Q, TD_R, TD_S, TD_T,
    TD_U, TD_V, TD_W, TD_X, TD_Y, TD_Z
};

td_state_t cur_dance(tap_dance_state_t *state);
