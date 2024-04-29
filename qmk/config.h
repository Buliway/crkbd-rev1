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

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200

#define LANG_CHANGE_DEFAULT LANG_CHANGE_CAPS
// #define LANG_CHANGE_DEFAULT LANG_CHANGE_ALT_SHIFT
// #define LANG_CHANGE_DEFAULT LANG_CHANGE_CTRL_SHIFT
// #define LANG_CHANGE_DEFAULT LANG_CHANGE_WIN_SPACE

#define RGBLIGHT_LAYERS



// Holding mouse movement keys moves the cursor at constant speeds
#define MK_3_SPEED
// The chosen speed is only active while you hold the respective key. When the key is raised, mouse keys returns to the unmodified speed.
// Momentary: KC_ACL0 < KC_ACL1 < unmodified < KC_ACL2
// #define MK_MOMENTARY_ACCEL

// Cursor offset per movement       (unmodified).   Default: 16
// #define MK_C_OFFSET_UNMOD                                    16

// Time between cursor movements    (unmodified).   Default: 16
// #define MK_C_INTERVAL_UNMOD                                  16

// Cursor offset per movement       (KC_ACL0).      Default: 1
// #define MK_C_OFFSET_0                                        1

// Time between cursor movements    (KC_ACL0).      Default: 32
// #define MK_C_INTERVAL_0                                      32

// Cursor offset per movement       (KC_ACL1).      Default: 4
// #define MK_C_OFFSET_1                                        4

// Time between cursor movements    (KC_ACL1).      Default: 16
// #define MK_C_INTERVAL_1                                      16

// Cursor offset per movement       (KC_ACL2).      Default: 32
// #define MK_C_OFFSET_2                                        32

// Time between cursor movements    (KC_ACL2).      Default: 16
// #define MK_C_INTERVAL_2                                      16

// Scroll steps per scroll action   (unmodified).   Default: 1
// #define MK_W_OFFSET_UNMOD                                    1

// Time between scroll steps        (unmodified).   Default: 40
// #define MK_W_INTERVAL_UNMOD                                  40

// Scroll steps per scroll action   (KC_ACL0).      Default: 1
// #define MK_W_OFFSET_0                                        1

// Time between scroll steps        (KC_ACL0).      Default: 360
// #define MK_W_INTERVAL_0                                      360

// Scroll steps per scroll action   (KC_ACL1).      Default: 1
// #define MK_W_OFFSET_1                                        1

// Time between scroll steps        (KC_ACL1).      Default: 120
// #define MK_W_INTERVAL_1                                      120

// Scroll steps per scroll action   (KC_ACL2).      Default: 1
// #define MK_W_OFFSET_2                                        1

// Time between scroll steps        (KC_ACL2).      Default: 20
// #define MK_W_INTERVAL_2                                      20
