# crkbd-rev1

Настройки моей клавиатуры. Прошивка VIAL, потому что на голом QMK ничего не работает, сложно делать тапденс, подсветка лишь на левую половину клавы, и вообще вечно сыпет ошибками. Понятия не имею, что я делаю. Метод тыка в деле.

Сейчас есть баг - сбрасывается цвет игрового слоя, когда я использую на нём числовой слой. Не знаю как фиксить.

TODO: добавить Ctrl + Shift + V. Чтобы вставить как обычный текст, например в Obsidian.

Создать файл прошивки

make crkbd/rev1:vial

Прошить одну половину, потом вторую.

qmk flash -kb crkbd/rev1 -km vial

https://get.vial.today/docs/porting-to-vial.html

https://docs.qmk.fm/#/newbs_flashing

# Моя раскладка
![Keyboard](/img/test.jpg)
