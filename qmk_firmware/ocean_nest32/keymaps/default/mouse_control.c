#include "mouse_control.h"

bool scrolling_mode = false;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (scrolling_mode) {
        mouse_report.h = mouse_report.x;
        mouse_report.v = mouse_report.y;
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;
}

void set_scrolling_mode(bool enable) {
    scrolling_mode = enable;
    if (enable) {
        pointing_device_set_cpi(2000);
    } else {
        pointing_device_set_cpi(8000);
    }
}

bool get_scrolling_mode(void) {
    return scrolling_mode;
}
