# Repository Guidelines

## Scope
このファイルはポインタのみを書く。現状説明や技術解説は書かない。
実装の真実は `qmk_firmware/ocean_nest32/` 以下のコードと設計ファイルにある。

## Routing
ファームウェア変更は `qmk_firmware/ocean_nest32/keymaps/default/` を読む。
キーボード定義と配線前提は `qmk_firmware/ocean_nest32/keyboard.json` を読む。
ビルド機能の有効化は `qmk_firmware/ocean_nest32/keymaps/default/rules.mk` を読む。
タイミング・分割・ポインティング設定は `qmk_firmware/ocean_nest32/keymaps/default/config.h` を読む。
PCB変更は `kicad/`、筐体変更は `freecad/` を読む。

## Minimum Commands
`make build` : デフォルトファームウェアをビルドする。
`make flash` : ビルドして書き込む。
`qmk compile -kb ocean_nest32 -km default` : QMK CLI を使う場合の等価コマンド。

## Guardrails
存在しない ADR・lint・CI を前提にしない。参照先がなければ新設提案に留める。
`rules.mk` で無効な機能をコードだけで使わない。
`config.h` と `keyboard.json` の前提を変える変更は、対応する `kicad/` または `freecad/` も確認する。
このファイルに詳細なコーディング規約を書き足さない。必要なら対象ディレクトリに近い補助ファイルへ分割する。

## Validation
最低限、変更後に `make build` を通す。
キー配列・コンボ・エンコーダ・ポインティング変更は実機確認を前提にする。
