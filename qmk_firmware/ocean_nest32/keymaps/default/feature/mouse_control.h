#pragma once

#include "quantum.h"

// Scrolling mode state
extern bool scrolling_mode;

// Function declarations
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report);
void set_scrolling_mode(bool enable);
bool get_scrolling_mode(void);
