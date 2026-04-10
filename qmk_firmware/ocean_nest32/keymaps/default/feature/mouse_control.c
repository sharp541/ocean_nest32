#include "mouse_control.h"

bool scrolling_mode = false;

#define MOUSE_DIVISOR 4.0
#define SCROLL_DIVISOR 12.0

float mouse_accumulated_x = 0.0;
float mouse_accumulated_y = 0.0;

float scroll_accumulated_v = 0.0;

#ifdef POINTING_DEVICE_HIRES_SCROLL_ENABLE
static float get_scroll_resolution_multiplier(void) {
    return (float)pointing_device_get_hires_scroll_resolution();
}
#else
static float get_scroll_resolution_multiplier(void) {
    return 1.0f;
}
#endif

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    mouse_accumulated_x += (float)mouse_report.x / MOUSE_DIVISOR;
    mouse_accumulated_y += (float)mouse_report.y / MOUSE_DIVISOR;
    mouse_report.x = (int8_t)mouse_accumulated_x;
    mouse_report.y = (int8_t)mouse_accumulated_y;
    mouse_accumulated_x -= (int8_t)mouse_accumulated_x;
    mouse_accumulated_y -= (int8_t)mouse_accumulated_y;
    if (scrolling_mode) {
        scroll_accumulated_v += ((float)mouse_report.y * get_scroll_resolution_multiplier()) / SCROLL_DIVISOR;
        mouse_report.v = -(int8_t)scroll_accumulated_v;
        scroll_accumulated_v -= (int8_t)scroll_accumulated_v;
        mouse_report.h = 0;
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;
}

void set_scrolling_mode(bool enable) {
    scrolling_mode = enable;
}

bool get_scrolling_mode(void) {
    return scrolling_mode;
}
