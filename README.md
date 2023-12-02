# crkbd-rev1

Настройки моей клавиатуры. Понятия не имею, что я делаю. Метод тыка в деле.

Эта клавиатура не пригодна для игр, так как там часто и быстро надо жать числа, а иногда и эфки, в комбинации с другими клавишами. Надо было брать клавиатуру с числами...

А ещё у моей раскладки есть минус. Tap Dance на home row. При чередовании рук на большой скорости могут быть проблемы. Если я сначала одной рукой нажму клавишу из home row, а потом другой рукой нажму другую клавишу, то другая может сработать быстрее, потому что она нажмётся на нажатие, а home row срабатывает только на отжатие. Либо как то делать так, чтоб на все буквы было срабатывание по отжатию, либо делать неудобными модификаторы.

# TODO: 
1) Добавить кастом кейкоды lang_shift в VIAL https://get.vial.today/manual/custom_keycode.html
2) Написать более подробный гайд по прошивке ниже

# Как прошить на Linux

## Vial

Когда то будет

https://get.vial.today/docs/porting-to-vial.html

А пока старый вариант гайда

Создать файл прошивки

make crkbd/rev1:vial

Прошить одну половину, потом вторую.

qmk flash -kb crkbd/rev1 -km vial

## QMK

https://docs.qmk.fm/#/newbs_getting_started

В терминале пишем это
1) sudo pacman --needed --noconfirm -S git python-pip libffi 
2) paru -S qmk-git
3) qmk setup 
4) Переносим в каталог ~/qmk_firmware/keyboards/crkbd/keymaps/default свои настройки. Либо можно создать свой каталог в keymaps вместо default и туда засунуть свои настройки.
5) qmk compile -kb crkbd/rev1 -km default
6) qmk flash -kb crkbd/rev1 -km default
В теории всё

# Моя раскладка
![Keyboard](/img/layers.png)
