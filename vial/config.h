/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define VIAL_KEYBOARD_UID {0xCE, 0x08, 0x17, 0xF3, 0x0D, 0xE4, 0x4A, 0xC8}

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 175

#define LANG_CHANGE_DEFAULT LANG_CHANGE_CAPS
// #define LANG_CHANGE_DEFAULT LANG_CHANGE_ALT_SHIFT
// #define LANG_CHANGE_DEFAULT LANG_CHANGE_CTRL_SHIFT
// #define LANG_CHANGE_DEFAULT LANG_CHANGE_WIN_SPACE

#define DYNAMIC_KEYMAP_LAYER_COUNT 9

#define RGBLIGHT_LAYERS
