# crkbd-rev1

Настройки моей клавиатуры. Прошивка VIAL, потому что на голом QMK ничего не работает, сложно делать тапденс, подсветка лишь на левую половину клавы, и вообще вечно сыпет ошибками. Понятия не имею, что я делаю. Метод тыка в деле.

Эта клавиатура не пригодна для игр, так как там часто и быстро надо жать числа, а иногда и эфки, в комбинации с другими клавишами. Есть конечно вариант с оверинженерингом, где на одну часть клавы будут числа и эфки, а на другую нужная половина qwerty клавиатуры. Но это всёравно не удобно. Надо было брать клавиатуру с числами...

Сейчас есть баг - сбрасывается цвет игрового слоя, когда я использую на нём числовой слой. Не знаю как фиксить.

Создать файл прошивки

make crkbd/rev1:vial

Прошить одну половину, потом вторую.

qmk flash -kb crkbd/rev1 -km vial

https://get.vial.today/docs/porting-to-vial.html

https://docs.qmk.fm/#/newbs_flashing

# Моя раскладка
![Keyboard](/img/test.jpg)
