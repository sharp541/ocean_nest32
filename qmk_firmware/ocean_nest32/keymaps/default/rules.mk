# hardware configuration
SERIAL_DRIVER = vendor

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360

BOARD = GENERIC_RP_RP2040
SPI_DRIVER_REQUIRED = yes

# software configuration
CAPS_WORD_ENABLE = yes
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
AUTO_SHIFT_ENABLE = yes

SRC += feature/layer.c feature/mouse_control.c feature/process_record.c feature/autoshift.c feature/custom_key.c
