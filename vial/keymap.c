/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include <stdio.h>

#define CUSTOM_SAFE_RANGE SAFE_RANGE
#include "lang_shift/include.h"

#define L_ENG 0
#define L_RU 1
#define L_NUMF 2
#define L_PUNC 3
#define L_IDK1 4
#define L_IDK2 5
#define L_GAME 6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // [L_ENG] = LAYOUT_split_3x6_3(
  // //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
  //    KC_ESCAPE,  KC_F,     KC_L,     KC_H,     KC_V,     KC_Z,                          KC_Q,      KC_W,     KC_U,    KC_O,      KC_Y,    KC_NO,
  // //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
  //      KC_NO,    KC_S,     KC_R,     KC_N,     KC_T,     KC_K,                          KC_C,      KC_D,     KC_E,    KC_A,      KC_I,    KC_NO,
  // //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
  //     KC_LCTRL,  KC_X,     KC_NO,    KC_B,     KC_M,     KC_J,                          KC_P,      KC_G,     KC_NO,   KC_NO,     KC_NO,   DF(1),
  // //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
  //                                               TD(0),   TD(1),  KC_LSHIFT,   TD(2),    TD(3),    KC_TAB
  //                                        //`------------------------------'`------------------------------'
  // ),
  //
  // [L_RU] = LAYOUT_split_3x6_3(
  // //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
  //    KC_ESCAPE,KC_LBRACKET,KC_U,     KC_Z,     KC_S,     KC_E,                          KC_L,     KC_X,     KC_V,   KC_SCOLON, KC_QUOTE,  KC_O,
  // //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
  //      KC_A,     KC_Y,     KC_B,     KC_T,     KC_J,     KC_M,                          KC_G,     KC_D,     KC_N,     KC_C,     KC_H,     KC_W,
  // //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
  //      DF(0),    KC_I,    KC_COMMA,  KC_DOT,   KC_F,   KC_GRAVE,                     KC_RBRACKET, KC_R,     KC_K,     KC_P,     KC_Q,    KC_LALT,
  // //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
  //                                               TD(0),   TD(1),  KC_LSHIFT,   TD(2),    TD(3),    KC_TAB
  //                                        //`------------------------------'`------------------------------'
  // ),

  [L_ENG] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_0,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  RGB_TOG,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  DF(L_RU),
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                                TD(0),   TD(1),  KC_LSHIFT,   TD(2),    TD(3),    KC_TAB
                                         //`------------------------------'`------------------------------'
  ),

  [L_RU] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_1,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      DF(L_ENG),  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                                TD(0),   TD(1),  KC_LSHIFT,   TD(2),    TD(3),    KC_TAB
                                         //`------------------------------'`------------------------------'
  ),

  [L_NUMF] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_2,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`------------------------------'`------------------------------'
  ),

  [L_PUNC] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_3,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`------------------------------'`------------------------------'
  ),

  [L_IDK1] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_4,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`------------------------------'`------------------------------'
  ),

  [L_IDK2] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_5,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`------------------------------'`------------------------------'
  ),

  [L_GAME] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_6,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`------------------------------'`------------------------------'
  )

  // [7] = LAYOUT_split_3x6_3(
  // //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
  //     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  // //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
  //     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  // //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
  //     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  // //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
  //                                             XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
  //                                        //`------------------------------'`------------------------------'
  // )
};

// Tap Dance
void keyboard_post_init_user(void) {
    vial_tap_dance_entry_t td0 = { KC_PSCREEN,
                                   MO(L_IDK2),
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
    dynamic_keymap_set_tap_dance(0, &td0); // the first value corresponds to the TD(i) slot

    vial_tap_dance_entry_t td1 = { KC_BSPACE,
                                   MO(L_IDK1),
                                   LCTL(KC_BSPACE),
                                   KC_BSPACE,
                                   TAPPING_TERM };
    dynamic_keymap_set_tap_dance(1, &td1);

    vial_tap_dance_entry_t td2 = { KC_ENTER,
                                   MO(L_NUMF),
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
    dynamic_keymap_set_tap_dance(2, &td2);

    vial_tap_dance_entry_t td3 = { KC_SPACE,
                                   MO(L_PUNC),
                                   KC_NO,
                                   KC_SPACE,
                                   TAPPING_TERM };
    dynamic_keymap_set_tap_dance(3, &td3);

    vial_tap_dance_entry_t td4 = { KC_ESCAPE,
                                   MO(L_NUMF),
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
    dynamic_keymap_set_tap_dance(4, &td4);
}

// Lighting Layers
layer_state_t default_layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case L_ENG:
            rgblight_sethsv(HSV_ORANGE);
            break;
        case L_RU:
            rgblight_sethsv(HSV_GREEN);
            break;
        case L_NUMF:
            rgblight_sethsv(HSV_CYAN);
            break;
        case L_PUNC:
            rgblight_sethsv(HSV_MAGENTA);
            break;
        case L_IDK1:
            rgblight_sethsv(HSV_BLUE);
            break;
        case L_IDK2:
            rgblight_sethsv(HSV_RED);
            break;
        case L_GAME:
            rgblight_sethsv(HSV_YELLOW);
            break;
        default: // for any other layers, or the default layer
            rgblight_sethsv(HSV_WHITE);
            break;
    }
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case L_ENG:
            rgblight_sethsv(HSV_ORANGE);
            break;
        case L_RU:
            rgblight_sethsv(HSV_GREEN);
            break;
        case L_NUMF:
            rgblight_sethsv(HSV_CYAN);
            break;
        case L_PUNC:
            rgblight_sethsv(HSV_MAGENTA);
            break;
        case L_IDK1:
            rgblight_sethsv(HSV_BLUE);
            break;
        case L_IDK2:
            rgblight_sethsv(HSV_RED);
            break;
        case L_GAME:
            rgblight_sethsv(HSV_YELLOW);
            break;
        default: // for any other layers, or the default layer
            rgblight_sethsv(HSV_WHITE);
            break;
    }
    return state;
}
