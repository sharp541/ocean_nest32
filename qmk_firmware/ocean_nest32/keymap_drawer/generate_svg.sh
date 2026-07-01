#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
KEYBOARD_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"
QMK_ROOT="$(cd "$KEYBOARD_DIR/.." && pwd)"

cd "$QMK_ROOT"

qmk c2json --no-cpp \
  -kb ocean_nest32 \
  -km default \
  "$KEYBOARD_DIR/keymaps/default/keymap.c" \
  -o "$SCRIPT_DIR/ocean_nest32_default_keymap.json"

keymap parse \
  -q "$SCRIPT_DIR/ocean_nest32_default_keymap.json" \
  -l ALPHA1 MOUSE SYMBOL NUMPAD FUNCTION \
  -o "$SCRIPT_DIR/ocean_nest32_default.auto.yaml"

keymap draw \
  -j "$SCRIPT_DIR/ocean_nest32_drawer_layout.json" \
  -l LAYOUT \
  "$SCRIPT_DIR/ocean_nest32_default.yaml" \
  -o "$SCRIPT_DIR/ocean_nest32_default.svg"

echo "Wrote:"
echo "  $SCRIPT_DIR/ocean_nest32_default_keymap.json"
echo "  $SCRIPT_DIR/ocean_nest32_default.auto.yaml"
echo "  $SCRIPT_DIR/ocean_nest32_default.svg"
