# hardware configuration
SERIAL_DRIVER = vendor

ENCODER_ENABLE = yes
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = custom

BOARD = GENERIC_RP_RP2040
SPI_DRIVER_REQUIRED = yes

# software configuration
BOOTMAGIC_ENABLE = yes
ENCODER_MAP_ENABLE = yes
CAPS_WORD_ENABLE = yes
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
AUTO_SHIFT_ENABLE = yes

SRC += feature/layer.c
SRC += feature/mouse_control.c
SRC += feature/process_record.c
SRC += feature/autoshift.c
SRC += feature/custom_key.c
SRC += ../lib/pmw3610/pmw3610.c
SRC += ../lib/pmw3610/custom_pointing_device.c
