# Ocean Nest32 Keymap SVG

This directory contains the files needed to regenerate the `ocean_nest32` default keymap SVG with `keymap-drawer`.

Files:
- `generate_svg.sh`: regenerate intermediate JSON/YAML and the final SVG
- `ocean_nest32_default.yaml`: curated `keymap-drawer` YAML used for the final SVG
- `ocean_nest32_default.svg`: generated layout image
- `ocean_nest32_default_keymap.json`: intermediate QMK keymap JSON
- `ocean_nest32_default.auto.yaml`: raw YAML parsed from `keymap.json`
- `ocean_nest32_drawer_layout.json`: SVG drawing-only layout with slightly expanded key spacing
- `../keyboard.json`: physical layout definition used for drawing
- `../keymaps/default/keymap.c`: default keymap source used for JSON conversion
- `../keymaps/default/feature/combo.h`: combo source of record
- `../keymaps/default/feature/process_record.c`: AZIK expansion output source of record for ALPHA1 legends

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
- `ocean_nest32_drawer_layout.json` is used only for SVG generation so key spacing can differ slightly from the firmware layout definition.
- The ALPHA1 layer legends include AZIK expansion hints derived from `feature/process_record.c`, shown as `R` + `(oo)` on two lines.
- The current final SVG intentionally shows only selected ALPHA1 combos: `J`, `L`, `F`, `V`, `C`, `,`, `Q`, `X`.
