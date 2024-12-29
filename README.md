# crkbd-rev1

My keyboard settings. Mostly inspired by [Miryoku](https://github.com/manna-harbour/miryoku) and [this](https://habr.com/ru/articles/717912/) Russian keyboard layout.

# TODO: 
1) Add custom keycodes to VIAL https://get.vial.today/manual/custom_keycode.html
2) Upgrade VIAL to QMK state (currently firmware is very different, I use QMK)
3) Write a more detailed flashing guide below
4) **Swap Z and H to make it easier to typing the bigram CH**

# Flashing on Arch Linux

## Vial

Coming soon...

https://get.vial.today/docs/porting-to-vial.html

The old version of the guide

1) Create firmware file
2) `make crkbd/rev1:vial`
3) Flash one half of the keyboard, then the other half
4) `qmk flash -kb crkbd/rev1 -km vial`

## QMK

https://docs.qmk.fm/#/newbs_getting_started

Type this in the terminal
1) `sudo pacman --needed --noconfirm -S git python-pip libffi`
2) `paru -S qmk-git`
3) `qmk setup `
4) Move your settings to the `~/qmk_firmware/keyboards/crkbd/keymaps/default` directory. Or you can create your own directory in `keymaps` instead of `default` and put your settings there.
6) `qmk compile -kb crkbd/rev1 -km default`
7) `qmk flash -kb crkbd/rev1 -km default`

That's all

# Layout

## Phonetic layout

![Layout](/img/layout.png)

## Layers

![Layers](/img/layers.png)
