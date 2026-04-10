# Ocean Nest32 Keymap SVG

This directory contains the files needed to regenerate the `ocean_nest32` default keymap SVG with `keymap-drawer`.

Files:
- `generate_svg.sh`: regenerate intermediate JSON/YAML and the final SVG
- `ocean_nest32_default.yaml`: curated `keymap-drawer` YAML used for the final SVG
- `ocean_nest32_default.svg`: generated layout image
- `ocean_nest32_default_keymap.json`: intermediate QMK keymap JSON
- `ocean_nest32_default.auto.yaml`: raw YAML parsed from `keymap.json`
- `../keyboard.json`: physical layout definition used for drawing
- `../keymaps/default/keymap.c`: default keymap source used for JSON conversion
- `../keymaps/default/feature/combo.h`: combo source of record

Prerequisites:
- `qmk` CLI available
- `keymap-drawer` installed and `keymap` command available

Regenerate:

```bash
cd /home/kentaro/ws/ocean_nest32/qmk_firmware/ocean_nest32/keymap_drawer
./generate_svg.sh
```

Notes:
- `ocean_nest32_default.auto.yaml` is the raw parser output from `keymap.json`.
- `ocean_nest32_default.yaml` is the hand-adjusted version used for the final SVG.
- The current final SVG intentionally shows only selected ALPHA1 combos: `J`, `L`, `F`, `V`, `C`, `,`, `Q`, `X`.
