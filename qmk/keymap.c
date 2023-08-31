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
#define L_GAME 1
#define L_RU 2
#define L_PUNC 3
#define L_IDK1 4
#define L_IDK2 5
#define L_NUMF 6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [L_ENG] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_ESC,    EN_F,     EN_L,     EN_H,     EN_V,     EN_Z,                          EN_Q,     EN_W,     EN_U,     EN_O,     EN_Y,   DF(L_GAME),
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,   EN_S,     EN_R,     EN_N,     EN_T,     EN_K,                          EN_C,     EN_D,     EN_E,     EN_A,     EN_I,    KC_LWIN,
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
      XXXXXXX,  XXXXXXX,   KC_1,     KC_2,     KC_3,    XXXXXXX,                       XXXXXXX,   KC_F1,    KC_F2,    KC_F3,    KC_F4,   XXXXXXX,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,   KC_0,     KC_4,     KC_5,     KC_6,    KC_PSCR,                       XXXXXXX,   KC_F5,    KC_F6,    KC_F7,    KC_F8,   KC_LWIN,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      KC_LCTL,  XXXXXXX,   KC_7,     KC_8,     KC_9,    XXXXXXX,                       XXXXXXX,   KC_F9,    KC_F10,   KC_F11,   KC_F12,  KC_LALT,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`+---------+---------+---------||---------+---------+---------+'
  ),

  [L_PUNC] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      AG_PERC,  EN_QUOT,  AG_MINS,  AG_SLSH,   AG_EQL,  AG_PLUS,                       EN_PIPE,  AG_RPRN,  EN_RCBR,  EN_RBRC,   EN_GT,   EN_TILD,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      EN_CIRC,  AG_DQUO,  AG_UNDS,  AG_COMM,   AG_DOT,   EN_AT,                        AG_BSLS,  AG_LPRN,  EN_LCBR,  EN_LBRC,   EN_LT,   EN_GRV,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      XXXXXXX,  EN_DLR,   AG_SCLN,  AG_ASTR,  AG_QUES,  RU_NUME,                       XXXXXXX,  AG_EXCL,  EN_HASH,  AG_COLN,  EN_AMPR,  XXXXXXX,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX
                                         //`+---------+---------+---------||---------+---------+---------+'
  ),

  [L_IDK1] = LAYOUT(
  //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
       XXXXXXX,   C(KC_SLSH),  C(KC_R),    C(KC_Z),    C(KC_S),    XXXXXXX,                             XXXXXXX,    C(KC_T),    C(KC_N),   C(S(KC_P)),  C(KC_F5),   XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
      C(S(KC_V)),  C(KC_W),    C(KC_A),    C(KC_C),    C(KC_V),    C(KC_X),                             XXXXXXX,    A(KC_D),   A(KC_ENT),   C(KC_F),    C(KC_J),    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
       XXXXXXX,   C(S(KC_T)),  C(KC_D),  C(KC_PGUP),  C(KC_PGDN),  XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    G(KC_L),
  //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                       XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,    XXXXXXX
                                                 //`+-----------+-----------+-----------||-----------+-----------+-----------+'
  ),

  [L_IDK2] = LAYOUT(
  //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------------------------.
       KC_HOME,  C(KC_LEFT),  C(KC_UP),  C(KC_DOWN),  C(KC_RGHT),  KC_PGUP,                               LA_SYNC,   C(S(KC_LEFT)),  C(S(KC_UP)),  C(S(KC_DOWN)),  C(S(KC_RGHT)),    XXXXXXX,
  //|-----------+-----------+-----------+-----------+-----------+-----------|                        |--------------+--------------+--------------+--------------+--------------+--------------|
       KC_END,     KC_LEFT,     KC_UP,     KC_DOWN,    KC_RGHT,    KC_PGDN,                               KC_VOLD,       KC_MPLY,       KC_MNXT,       KC_MPRV,       KC_MUTE,       KC_VOLU,
  //|-----------+-----------+-----------+-----------+-----------+-----------|                        |--------------+--------------+--------------+--------------+--------------+--------------|
       KC_LCTL,    KC_WH_L,    KC_WH_U,    KC_WH_D,    KC_WH_R,    KC_DEL,                                RGB_TOG,       LA_CAPS,       LA_ALSH,       LA_CTSH,       LA_WISP,       KC_LALT,
  //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+--------------+--------------+--------------+--------------+--------------+--------------|
                                                       XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_LSHIFT,     XXXXXXX,       XXXXXXX
                                                 //`+-----------+-----------+-----------||-----------+--------------+--------------+'
  ),

  [L_GAME] = LAYOUT(
  //,-----------------------------------------------------------.                    ,-----------------------------------------------------------.
      KC_TAB,    KC_T,     KC_Q,     KC_W,     KC_E,     KC_R,                          KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,   DF(L_ENG),
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      KC_LSFT,   KC_G,     KC_A,     KC_S,     KC_D,     KC_F,                          KC_H,     KC_J,     KC_UP,    KC_K,     KC_L,    KC_GRV,
  //|---------+---------+---------+---------+---------+---------|                    |---------+---------+---------+---------+---------+---------|
      KC_LCTL,   KC_B,     KC_Z,     KC_X,     KC_C,     KC_V,                          KC_N,    KC_LEFT,  KC_DOWN,  KC_RGHT,   KC_M,    KC_SLSH,
  //|---------+---------+---------+---------+---------+---------+---------||---------+---------+---------+---------+---------+---------+---------|
                                              KC_LALT,  KC_SPC,    TD(4),      KC_H,   KC_SPC,  KC_ENTER
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


// Tap Dance
// Tap Dance Definitions
enum {
    TD_0,
    TD_1,
    TD_2,
    TD_3,
    TD_4,
    TD_5,
    TD_6
};

// Tap Dance Finished Functions
void td0_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1 && !state->pressed) {
        tap_code(KC_PSCREEN);
    } else {
        layer_on(L_IDK2);
    }
}

void td1_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1 && !state->pressed) {
        tap_code(KC_BSPACE);
    } else if (state->count == 2) {
        tap_code16(LCTL(KC_BSPACE));
    } else if (state->count == 1 && state->pressed) {
        tap_code(KC_BSPACE);  // Tap + Hold
    } else {
        layer_on(L_IDK1);
    }
}

// ... same logic for td2, td3, etc.

// Tap Dance Reset Functions
void td0_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count != 1) {
        layer_off(L_IDK2);
    }
}

void td1_reset(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count != 1 && state->count != 2) {
        layer_off(L_IDK1);
    }
}

// ... same logic for td2, td3, etc.

// Associate the Tap Dance functions with the Tap Dance enums
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td0_finished, td0_reset),
    [TD_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td1_finished, td1_reset),
    // ... same logic for td2, td3, etc.
};


// Lighting Layers
layer_state_t default_layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case L_ENG:
            rgblight_sethsv(HSV_ORANGE);
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
        case L_RU:
            rgblight_sethsv(HSV_GREEN);
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
        case L_NUMF:
            rgblight_sethsv(HSV_CYAN);
            break;
        default: // for any other layers, or the default layer
            rgblight_sethsv(HSV_WHITE);
            break;
    }
    return state;
};

void matrix_scan_user(void) {
    user_timer();

    // Проверяем, активен ли слой
    if (!layer_state_cmp(layer_state, L_PUNC) &&
        !layer_state_cmp(layer_state, L_IDK1) &&
        !layer_state_cmp(layer_state, L_IDK2) &&
        !layer_state_cmp(layer_state, L_NUMF) &&
        !layer_state_cmp(layer_state, L_RU)) {
    // Если ни один из этих слоев не активен, обновляем подсветку на основе текущего базового слоя
    default_layer_state_set_user(default_layer_state);
    }
}
