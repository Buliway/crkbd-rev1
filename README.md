# crkbd-rev1

Настройки моей клавиатуры. Понятия не имею, что я делаю. Метод тыка в деле.

Эта клавиатура не пригодна для игр, так как там часто и быстро надо жать числа, а иногда и эфки, в комбинации с другими клавишами. Надо было брать клавиатуру с числами...

# TODO: 
1) Добавить кастом кейкоды lang_shift в VIAL https://get.vial.today/manual/custom_keycode.html
2) Сделать нормальный once shift, а не через смену слоя на +1 как в стандартном lang_shift
3) Написать более подробный гайд по прошивке ниже

# Как прошить

Создать файл прошивки

make crkbd/rev1:vial

Прошить одну половину, потом вторую.

qmk flash -kb crkbd/rev1 -km vial

https://get.vial.today/docs/porting-to-vial.html

https://docs.qmk.fm/#/newbs_flashing

# Моя раскладка
![Keyboard](/img/layers.png)
