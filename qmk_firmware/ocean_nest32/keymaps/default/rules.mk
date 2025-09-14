# hardware configuration
SERIAL_DRIVER = vendor

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360

BOARD = GENERIC_RP_RP2040
SPI_DRIVER_REQUIRED = yes

# software configuration
CAPS_WORD_ENABLE = yes
TAP_DANCE_ENABLE = no
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
AUTO_SHIFT_ENABLE = yes

SRC += layer.c mouse_control.c process_record.c autoshift.c custom_key.c
