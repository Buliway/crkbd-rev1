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
#define L_RU 2
#define L_NUMF 1
#define L_PUNC 3
#define L_IDK1 4
#define L_IDK2 5
#define L_GAME 6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L_ENG] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_ESC,    EN_F,     EN_L,     EN_H,     EN_V,     EN_Z,                          EN_Q,     EN_W,     EN_U,     EN_O,     EN_Y,     XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,   EN_S,     EN_R,     EN_N,     EN_T,     EN_K,                          EN_C,     EN_D,     EN_E,     EN_A,     EN_I,    XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      CTRL_0 ,   EN_X,    XXXXXXX,   EN_B,     EN_M,     EN_J,                          EN_P,     EN_G,    XXXXXXX,  XXXXXXX,  XXXXXXX,   TD(6),
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                                TD(0),   TD(1),  KC_LSHIFT,   TD(2),    TD(3),    KC_TAB
                                         //`+---------+---------+---------||---------+---------+---------+'
  ),

  [L_RU] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_ESC,    RU_H,     RU_G,     RU_JA,    RU_Y,     RU_U,                          RU_D,     RU_CH,    RU_M,     RU_ZH,    RU_E,     RU_SC,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
       RU_F,     RU_N,     RU_I,     RU_JE,    RU_O,     RU_SF,                         RU_P,     RU_V,     RU_T,     RU_S,     RU_R,     RU_TS,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
       TD(5),    RU_SH,    RU_B,     RU_JU,    RU_A,     RU_JO,                         RU_HD,    RU_K,     RU_L,     RU_Z,     RU_J,     ALT_0,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                                TD(0),   TD(1),  KC_LSHIFT,   TD(2),    TD(3),    KC_TAB
                                         //`+---------+---------+---------||---------+---------+---------+'
  ),

  [L_NUMF] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      CTRL_0,   KC_LWIN,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   ALT_0,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`+---------+---------+---------||---------+---------+---------+'
  ),

  [L_PUNC] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`+---------+---------+---------||---------+---------+---------+'
  ),

  [L_IDK1] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`+---------+---------+---------||---------+---------+---------+'
  ),

  [L_IDK2] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       LA_SYNC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                     DF(L_GAME), LA_CAPS,  LA_ALSH,  LA_CTSH,  LA_WISP,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`+---------+---------+---------||---------+---------+---------+'
  ),

  [L_GAME] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`+---------+---------+---------||---------+---------+---------+'
  )

  // [7] = LAYOUT(
  // //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
  //     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  // //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
  //     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  // //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
  //     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
  // //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
  //                                             XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
  //                                        //`+---------+---------+---------||---------+---------+---------+'
  // )
};

//idk lang_shift
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!lang_shift_process_record(keycode, record))
        return false;
    return true;
};

void user_timer(void) {
    lang_shift_user_timer();
};

void matrix_scan_user(void) {
    user_timer();
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

    vial_tap_dance_entry_t td5 = { LA_CHNG,
                                   CTRL_0,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
    dynamic_keymap_set_tap_dance(5, &td5);

    vial_tap_dance_entry_t td6 = { LA_CHNG,
                                   ALT_0,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
    dynamic_keymap_set_tap_dance(6, &td6);
};

// Lighting Layers LA_CHNG
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
};

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
};
