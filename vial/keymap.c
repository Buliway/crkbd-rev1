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
         XXXXXXX,     TD(3),      TD(5),      TD(7),      TD(9),     EN_K,                                 EN_C,      TD(10),      TD(8),      TD(6),      TD(4),    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,     EN_X,      XXXXXXX,     EN_B,       EN_M,      EN_J,                                 EN_P,       EN_G,      XXXXXXX,    XXXXXXX,    XXXXXXX,   LA_CHNG,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                        TD(0),      TD(1),    MO(L_NAV),   MO(L_SYM),    TD(2),    MO(L_NUM)
                                                 //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_RU] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         KC_ESC,       RU_F,       RU_E,      RU_JA,      RU_Y,       RU_HD,                                RU_J,       RU_B,      RU_L,       RU_K,      RU_TS,      RU_ZH,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
          RU_SC,     TD(11),     TD(13),     TD(15),     TD(17),      RU_SF,                                RU_D,      TD(18),    TD(16),     TD(14),     TD(12),     RU_CH,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         LA_CHNG,     RU_SH,      RU_JU,       RU_U,      RU_I,       RU_JO,                                RU_G,       RU_M,      RU_R,       RU_P,       RU_H,     XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                        TD(0),      TD(1),    MO(L_NAV),   MO(L_SYM),    TD(2),    MO(L_NUM)
                                                 //`+-----------+-----------+-----------||-----------+-----------+-----------+'
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
                                                       XXXXXXX,    XXXXXXX,    XXXXXXX,     KC_BTN2,    KC_BTN1,    KC_BTN3
                                                 //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_SYM] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                       XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,    XXXXXXX
                                                 //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_NUM] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LWIN,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                                                       XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,    XXXXXXX
                                                 //`+-----------+-----------+-----------||-----------+-----------+-----------+'
    ),

    [L_FUN] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LWIN,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
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
                                                       KC_LALT,     KC_SPC,     TD(19),     KC_H,    KC_SPC,    TD(20)
                                                 //`+-----------+-----------+-----------||-----------+-----------+-----------+'
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


// Tap Dance
void keyboard_post_init_user(void) {
//Thumb
   vial_tap_dance_entry_t td0 = { KC_ENT,   // Enter on tap, Media layer on hold
                                  MO(L_MEDIA),
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(0, &td0); // the first value corresponds to the TD(i) slot

   vial_tap_dance_entry_t td1 = { KC_BSPC,   // Backspace on tap, Mouse layer on hold
                                  MO(L_MOUSE),
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(1, &td1);

   vial_tap_dance_entry_t td2 = { KC_SPC,   // Space on tap, Fun layer on hold
                                  MO(L_FUN),
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(2, &td2);



// Mod keys on ENG layer
   vial_tap_dance_entry_t td3 = { EN_S,   // S on tap, Win on hold
                                  KC_LWIN,
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(3, &td3);

   vial_tap_dance_entry_t td4 = { EN_I,   // I on tap, Win on hold
                                  KC_LWIN,
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(4, &td4);

   vial_tap_dance_entry_t td5 = { EN_R,   // R on tap, Alt on hold
                                  KC_LALT,
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(5, &td5);

   vial_tap_dance_entry_t td6 = { EN_A,   // A on tap, Alt on hold
                                  KC_LALT,
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(6, &td6);

   vial_tap_dance_entry_t td7 = { EN_N,   // N on tap, Ctrl on hold
                                  KC_LCTL,
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(7, &td7);

   vial_tap_dance_entry_t td8 = { EN_E,   // E on tap, Ctrl on hold
                                  KC_LCTL,
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(8, &td8);

   vial_tap_dance_entry_t td9 = { EN_T,   // T on tap, Shift on hold
                                  KC_LSFT,
                                  KC_NO,
                                  KC_NO,
                                  TAPPING_TERM };
   dynamic_keymap_set_tap_dance(9, &td9);

   vial_tap_dance_entry_t td10 = { EN_D,   // D on tap, Shift on hold
                                   KC_LSFT,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(10, &td10);



// Mod keys on RU layer
   vial_tap_dance_entry_t td11 = { RU_S,   // С on tap, Win on hold
                                   WIN_EN,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(11, &td11);

   vial_tap_dance_entry_t td12 = { RU_Z,   // З on tap, Win on hold
                                   WIN_EN,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(12, &td12);

   vial_tap_dance_entry_t td13 = { RU_JE,   // Е on tap, Alt on hold
                                   ALT_EN,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(13, &td13);

   vial_tap_dance_entry_t td14 = { RU_V,   // В on tap, Alt on hold
                                   ALT_EN,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(14, &td14);

   vial_tap_dance_entry_t td15 = { RU_O,   // О on tap, Ctrl on hold
                                   CTRL_EN,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(15, &td15);

   vial_tap_dance_entry_t td16 = { RU_N,   // Н on tap, Ctrl on hold
                                   CTRL_EN,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(16, &td16);

   vial_tap_dance_entry_t td17 = { RU_A,   // А on tap, Shift on hold
                                   KC_LSFT,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(17, &td17);

   vial_tap_dance_entry_t td18 = { RU_T,   // Т on tap, Shift on hold
                                   KC_LSFT,
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(18, &td18);



// Game layer
   vial_tap_dance_entry_t td19 = { KC_ESC,   // Esc on tap, Num layer on hold
                                   MO(L_NUM),
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(19, &td19);

   vial_tap_dance_entry_t td20 = { KC_ENT,   // Enter on tap, Fun layer on hold
                                   MO(L_FUN),
                                   KC_NO,
                                   KC_NO,
                                   TAPPING_TERM };
   dynamic_keymap_set_tap_dance(20, &td20);
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
