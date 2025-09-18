#include "quantum.h"

#include "process_record.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LNG1:
            if (record->event.pressed) {
                lang_en_state = false;
            }
            return true;
        case KC_LNG2:
            if (record->event.pressed) {
                lang_en_state = true;
            }
            return true;
        default:
            break;
    }
    return true;
}
