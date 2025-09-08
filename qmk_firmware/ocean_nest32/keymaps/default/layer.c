#include "quantum.h"
#include "layer.h"
#include "mouse_control.h"

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _MOUSE_LAYER:  // If we're on the _MOUSE layer enable scrolling mode
            set_scrolling_mode(true);
            break;
        default:
            if (get_scrolling_mode()) {  // check if we were scrolling before and set disable if so
                set_scrolling_mode(false);
            }
            break;
    }
    return state;
}
