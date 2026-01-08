#include "quantum.h"

#include "states.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LNG1:
            if (record->event.pressed) {
                lang_en_state = false;
                autoshift_disable();
            }
            return true;
        case KC_LNG2:
            if (record->event.pressed) {
                lang_en_state = true;
                autoshift_enable();
            }
            return true;
        default:
            break;
    }
    return true;
}
