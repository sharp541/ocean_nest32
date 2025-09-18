#include "quantum.h"

#include "custom_key.h"
#include "states.h"

bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
    for (int i = 0; i < all_key_count; i++) {
        const custom_key_t *key = custom_keys[i];

        if (key->custom_keycode == keycode) {
            return true;
        }
    }

    if (lang_en_state) {
        switch (keycode) {
            case AUTO_SHIFT_ALPHA:
                return true;
            default:
                return false;
        }
    }
    return false;
}

void autoshift_press_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
    for (int i = 0; i < all_key_count; i++) {
        const custom_key_t *key = custom_keys[i];
        if (key->custom_keycode == keycode) {
            key->register_key(shifted);
            return;
        }
    }

    if (shifted) {
        add_weak_mods(MOD_BIT(KC_LSFT));
    }
    register_code16(keycode);
}

void autoshift_release_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
    for (int i = 0; i < all_key_count; i++) {
        const custom_key_t *key = custom_keys[i];
        if (key->custom_keycode == keycode) {
            key->unregister_key(shifted);
            return;
        }
    }

    unregister_code16(keycode);
}
