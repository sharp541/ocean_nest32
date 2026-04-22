.PHONY: help init build flash keymap-svg

KEYBOARD := ocean_nest32
KEYMAP := default
QMK_HOME := $(HOME)/qmk_firmware
QMK_BUILD_DIR := $(QMK_HOME)/.build
QMK_KEYBOARDS_DIR := $(QMK_HOME)/keyboards
KEYBOARD_SOURCE := $(abspath qmk_firmware/$(KEYBOARD))
KEYBOARD_LINK := $(QMK_KEYBOARDS_DIR)/$(KEYBOARD)
BUILD_LINK := $(abspath .build)
KEYMAP_DRAWER_DIR := $(KEYBOARD_SOURCE)/keymap_drawer

help:
	@echo "make init   - link $(KEYBOARD_SOURCE) into $(QMK_KEYBOARDS_DIR)"
	@echo "            - link $(QMK_BUILD_DIR) into $(BUILD_LINK)"
	@echo "make build  - run qmk compile for $(KEYBOARD):$(KEYMAP)"
	@echo "make flash  - run qmk flash for $(KEYBOARD):$(KEYMAP)"
	@echo "make keymap-svg - regenerate the keymap SVG with keymap-drawer"

init:
	@mkdir -p "$(QMK_KEYBOARDS_DIR)"
	@if [ -e "$(KEYBOARD_LINK)" ] && [ ! -L "$(KEYBOARD_LINK)" ]; then \
		echo "$(KEYBOARD_LINK) exists and is not a symlink"; \
		exit 1; \
	fi
	@if [ -e "$(BUILD_LINK)" ] && [ ! -L "$(BUILD_LINK)" ]; then \
		echo "$(BUILD_LINK) exists and is not a symlink"; \
		exit 1; \
	fi
	@ln -sfn "$(KEYBOARD_SOURCE)" "$(KEYBOARD_LINK)"
	@mkdir -p "$(QMK_BUILD_DIR)"
	@ln -sfn "$(QMK_BUILD_DIR)" "$(BUILD_LINK)"
	@echo "linked $(KEYBOARD_LINK) -> $(KEYBOARD_SOURCE)"
	@echo "linked $(BUILD_LINK) -> $(QMK_BUILD_DIR)"

build: init
	@qmk compile -kb "$(KEYBOARD)" -km "$(KEYMAP)"

flash: init
	@qmk flash -kb "$(KEYBOARD)" -km "$(KEYMAP)"

keymap-svg: init
	@cd "$(KEYMAP_DRAWER_DIR)" && ./generate_svg.sh
