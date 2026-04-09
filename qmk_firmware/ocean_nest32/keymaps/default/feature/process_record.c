#include "quantum.h"

#include "states.h"

static bool azik_waiting_consonant = false;

static bool is_azik_vowel_key(uint16_t keycode) {
    switch (keycode) {
        case KC_A:
        case KC_E:
        case KC_I:
        case KC_O:
        case KC_U:
            return true;
        default:
            return false;
    }
}

static bool is_azik_consonant_key(uint16_t keycode) {
    switch (keycode) {
        case KC_B:
        case KC_C:
        case KC_D:
        case KC_F:
        case KC_G:
        case KC_H:
        case KC_J:
        case KC_K:
        case KC_L:
        case KC_M:
        case KC_N:
        case KC_P:
        case KC_Q:
        case KC_R:
        case KC_S:
        case KC_T:
        case KC_V:
        case KC_W:
        case KC_X:
        case KC_Y:
        case KC_Z:
            return true;
        default:
            return false;
    }
}

static const char *get_azik_combo_output(uint16_t keycode) {
    switch (keycode) {
        case KC_R:
            return "oo";
        case KC_S:
            return "enn";
        case KC_P:
            return "oi";
        case KC_M:
            return "ei";
        case KC_W:
            return "ou";
        case KC_K:
            return "unn";
        case KC_T:
            return "inn";
        case KC_G:
            return "onn";
        case KC_Z:
            return "uu";
        case KC_N:
            return "ai";
        case KC_B:
            return "aa";
        case KC_D:
            return "ann";
        default:
            return NULL;
    }
}

static void clear_azik_waiting(void) {
    azik_waiting_consonant = false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        case KC_LNG1:
            clear_azik_waiting();
            lang_en_state = false;
            autoshift_disable();
            return true;
        case KC_LNG2:
            clear_azik_waiting();
            lang_en_state = true;
            autoshift_enable();
            return true;
        default:
            break;
    }

    if (lang_en_state) {
        clear_azik_waiting();
        return true;
    }

    if (keycode == KC_Q) {
        clear_azik_waiting();
        send_string("xn");
        return false;
    }

    if (keycode == KC_C) {
        clear_azik_waiting();
        send_string("xtu");
        return false;
    }

    if (is_azik_vowel_key(keycode)) {
        clear_azik_waiting();
        return true;
    }

    if (is_azik_consonant_key(keycode)) {
        if (azik_waiting_consonant) {
            const char *combo_output = get_azik_combo_output(keycode);
            if (combo_output != NULL) {
                clear_azik_waiting();
                send_string(combo_output);
                return false;
            }
        }

        azik_waiting_consonant = true;
        return true;
    }

    clear_azik_waiting();
    return true;
}
