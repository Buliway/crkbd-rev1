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
#define L_MEDIA 3
#define L_NAV 4
#define L_MOUSE 5
#define L_SYM 6
#define L_NUM 7
#define L_FUN 8

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [L_ENG] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         KC_ESC,      EN_F,       EN_L,       EN_H,       EN_V,      EN_Z,                                 EN_Q,       EN_W,       EN_U,       EN_O,       EN_Y,    DF(L_GAME),
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,  WIN_T(EN_S),ALT_T(EN_R),CTL_T(EN_N),SFT_T(EN_T),  EN_K,                                 EN_C,    SFT_T(EN_D),CTL_T(EN_E),ALT_T(EN_A),WIN_T(EN_I),  XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,     EN_X,      XXXXXXX,     EN_B,       EN_M,      EN_J,                                 EN_P,       EN_G,      XXXXXXX,    XXXXXXX,    XXXXXXX,   LA_CHNG,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                            LT(L_MEDIA, KC_ENT), LT(L_MOUSE, KC_BSPC),      MO(L_NAV),            MO(L_SYM),       LT(L_FUN, KC_SPC),       MO(L_NUM)
                        //`+--------------------+--------------------+--------------------||--------------------+--------------------+--------------------+'
    ),

    [L_RU] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         KC_ESC,       RU_F,       RU_E,      RU_JA,      RU_Y,       RU_HD,                                RU_J,       RU_B,      RU_L,       RU_K,      RU_TS,      RU_ZH,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
          RU_SC,   WIN_T(RU_S),ALT_T(RU_JE),CTL_T(RU_O),SFT_T(RU_A),  RU_SF,                                RU_D,   SFT_T(RU_T),CTL_T(RU_N),ALT_T(RU_V),WIN_T(RU_Z),  RU_CH,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         LA_CHNG,     RU_SH,      RU_JU,       RU_U,      RU_I,       RU_JO,                                RU_G,       RU_M,      RU_R,       RU_P,       RU_H,     XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                            LT(L_MEDIA, KC_ENT), LT(L_MOUSE, KC_BSPC),      MO(L_NAV),            MO(L_SYM),       LT(L_FUN, KC_SPC),       MO(L_NUM)
                        //`+--------------------+--------------------+--------------------||--------------------+--------------------+--------------------+'
    ),

    [L_MEDIA] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    KC_VOLD,    KC_VOLU,    LA_SYNC,    RGB_TOG,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_LWIN,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,                             XXXXXXX,    KC_MPLY,    KC_MPRV,    KC_MNXT,    KC_MUTE,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    LA_CAPS,    LA_ALSH,    LA_CTSH,    LA_WISP,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                         XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,    XXXXXXX
                                                   //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_NAV] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             C(KC_Y),    C(KC_V),    C(KC_C),    C(KC_X),    C(KC_Z),    C(KC_S),
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_LWIN,    KC_LALT,    KC_LCTL,    KC_LSFT,    XXXXXXX,                             KC_CAPS,    KC_LEFT,    KC_DOWN,     KC_UP,     KC_RGHT,    KC_TAB,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                              KC_INS,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_DEL,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                         XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,    XXXXXXX
                                                   //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_MOUSE] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_ACL0,                             C(KC_Y),    C(KC_V),    C(KC_C),    C(KC_X),    C(KC_Z),    C(KC_S),
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    KC_LWIN,    KC_LALT,    KC_LCTL,    KC_LSFT,    KC_ACL1,                             KC_BTN5,    KC_MS_L,    KC_MS_D,    KC_MS_U,    KC_MS_R,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_ACL2,                             KC_BTN4,    KC_WH_L,    KC_WH_D,    KC_WH_U,    KC_WH_R,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                         XXXXXXX,    XXXXXXX,    XXXXXXX,     KC_BTN1,    KC_BTN3,    KC_BTN2
                                                   //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_SYM] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         XXXXXXX,     EN_AT,     EN_HASH,    EN_DLR,     AG_PERC,    EN_CIRC,                             EN_AMPR,    AG_ASTR,    AG_MINS,    AG_EQL,     AG_PLUS,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
        C(EN_SLSH),  AG_EXCL,    AG_QUES,    AG_COMM,    AG_DOT,     EN_GRV,                              AG_BSLS,    AG_LPRN,    EN_LCBR,    EN_LBRC,     EN_LT,     XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    AG_SLSH,    RU_NUME,    AG_DQUO,    EN_QUOT,    EN_TILD,                             EN_PIPE,    AG_RPRN,    EN_RCBR,    EN_RBRC,     EN_GT,     XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                         AG_UNDS,    AG_COLN,    AG_SCLN,     XXXXXXX,    XXXXXXX,    XXXXXXX
                                                   //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_NUM] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         XXXXXXX,     XXXXXXX,    AG_1,       AG_2,       AG_3,      XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,      AG_0,      AG_4,       AG_5,       AG_6,      KC_PSCR,                             XXXXXXX,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LWIN,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,     XXXXXXX,    AG_7,       AG_8,       AG_9,      XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                         XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,    XXXXXXX
                                                   //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_FUN] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         XXXXXXX,     KC_F1,      KC_F2,      KC_F3,      KC_F4,     XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,     KC_F5,      KC_F6,      KC_F7,      KC_F8,     XXXXXXX,                             XXXXXXX,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LWIN,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,     KC_F9,     KC_F10,     KC_F11,     KC_F12,     XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                         XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,    XXXXXXX
                                                   //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_GAME] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         KC_TAB,       KC_T,       KC_Q,      KC_W,       KC_E,       KC_R,                                KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,     DF(L_ENG),
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         KC_LSFT,      KC_G,       KC_A,      KC_S,       KC_D,       KC_F,                                KC_H,       KC_J,       KC_UP,      KC_K,       KC_L,      KC_GRV,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         KC_LCTL,      KC_B,       KC_Z,      KC_X,       KC_C,       KC_V,                                KC_N,      KC_LEFT,    KC_DOWN,    KC_RGHT,     KC_M,      KC_SLSH,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                   KC_LALT,             KC_SPC,         LT(L_NUM, KC_ESC)           KC_H,               KC_SPC,         LT(L_FUN, KC_ENT)
                        //`+--------------------+--------------------+--------------------||--------------------+--------------------+--------------------+'
    )
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


// Lighting Layers
layer_state_t default_layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case L_ENG:
            rgblight_sethsv(HSV_ROSE);
            break;
        case L_GAME:
            rgblight_sethsv(HSV_ORANGE);
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
            rgblight_sethsv(HSV_VIOLET);
            break;
        case L_MEDIA:
            rgblight_sethsv(HSV_MAGENTA);
            break;
        case L_NAV:
            rgblight_sethsv(HSV_CYAN);
            break;
        case L_MOUSE:
            rgblight_sethsv(HSV_YELLOW);
            break;
        case L_SYM:
            rgblight_sethsv(HSV_GREEN);
            break;
        case L_NUM:
            rgblight_sethsv(HSV_BLUE);
            break;
        case L_FUN:
            rgblight_sethsv(HSV_RED);
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
    if (!layer_state_cmp(layer_state, L_MEDIA) &&
        !layer_state_cmp(layer_state, L_NAV) &&
        !layer_state_cmp(layer_state, L_MOUSE) &&
        !layer_state_cmp(layer_state, L_SYM) &&
        !layer_state_cmp(layer_state, L_NUM) &&
        !layer_state_cmp(layer_state, L_FUN) &&
        !layer_state_cmp(layer_state, L_RU)) {
    // Если ни один из этих слоев не активен, обновляем подсветку на основе текущего базового слоя
    default_layer_state_set_user(default_layer_state);
    }
}
