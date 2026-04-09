.PHONY: help init build flash

KEYBOARD := ocean_nest32
KEYMAP := default
QMK_HOME := $(HOME)/qmk_firmware
QMK_KEYBOARDS_DIR := $(QMK_HOME)/keyboards
KEYBOARD_SOURCE := $(abspath qmk_firmware/$(KEYBOARD))
KEYBOARD_LINK := $(QMK_KEYBOARDS_DIR)/$(KEYBOARD)

help:
	@echo "make init   - link $(KEYBOARD_SOURCE) into $(QMK_KEYBOARDS_DIR)"
	@echo "make build  - run qmk compile for $(KEYBOARD):$(KEYMAP)"
	@echo "make flash  - run qmk flash for $(KEYBOARD):$(KEYMAP)"

init:
	@mkdir -p "$(QMK_KEYBOARDS_DIR)"
	@if [ -e "$(KEYBOARD_LINK)" ] && [ ! -L "$(KEYBOARD_LINK)" ]; then \
		echo "$(KEYBOARD_LINK) exists and is not a symlink"; \
		exit 1; \
	fi
	@ln -sfn "$(KEYBOARD_SOURCE)" "$(KEYBOARD_LINK)"
	@echo "linked $(KEYBOARD_LINK) -> $(KEYBOARD_SOURCE)"

build: init
	@qmk compile -kb "$(KEYBOARD)" -km "$(KEYMAP)"

flash: init
	@qmk flash -kb "$(KEYBOARD)" -km "$(KEYMAP)"
