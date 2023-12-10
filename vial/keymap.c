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
         KC_ESC,      KC_F,       KC_L,       KC_H,       KC_V,      KC_Z,                                 KC_Q,       KC_W,       KC_U,       KC_O,       KC_Y,    DF(L_GAME),
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,  WIN_T(KC_S),ALT_T(KC_R),CTL_T(KC_N),SFT_T(KC_T),  KC_K,                                 KC_C,    SFT_T(KC_D),CTL_T(KC_E),ALT_T(KC_A),WIN_T(KC_I),  XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,     KC_X,      XXXXXXX,     KC_B,       KC_M,      KC_J,                                 KC_P,       KC_G,      XXXXXXX,    XXXXXXX,    XXXXXXX,   LA_CHNG,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                            LT(L_MEDIA, KC_ENT), LT(L_MOUSE, KC_BSPC),     MO(L_NAV),            MO(L_SYM),       LT(L_FUN, KC_SPC),       MO(L_NUM)
                        //`+--------------------+--------------------+--------------------||--------------------+--------------------+--------------------+'
    ),

    [L_RU] = LAYOUT(
    //,-----------------------------------------------------------------------.                        ,-----------------------------------------------------------------------.
         KC_ESC,       KC_A,     KC_QUOT,      KC_Z,      KC_S,      KC_RBRC,                               KC_Q,     KC_COMM,     KC_K,       KC_R,       KC_W,     KC_SCLN,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
           KC_O,      TD(0),      TD(2),      TD(4),   SFT_T(KC_F),   KC_M,                                 KC_L,   SFT_T(KC_N),   TD(5),      TD(3),      TD(1),      KC_X,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         LA_CHNG,      KC_I,     KC_DOT,       KC_E,      KC_B,      KC_GRV,                                KC_U,       KC_V,      KC_H,       KC_G,      KC_LBRC,    XXXXXXX,
    //|-----------+-----------+-----------+-----------+-----------+-----------+-----------||-----------+-----------+-----------+-----------+-----------+-----------+-----------|
                            LT(L_MEDIA, KC_ENT), LT(L_MOUSE, KC_BSPC),     MO(L_NAV),            MO(L_SYM),       LT(L_FUN, KC_SPC),       MO(L_NUM)
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
         AG_COMM,    AG_EXCL,    AG_QUES,  COMMA_SPACE, SMART_DOT,   AG_DOT,                              AG_BSLS,    AG_LPRN,    EN_LCBR,    EN_LBRC,     EN_LT,     EN_GRV,
    //|-----------+-----------+-----------+-----------+-----------+-----------|                        |-----------+-----------+-----------+-----------+-----------+-----------|
         XXXXXXX,    EN_SLSH,    RU_NUME,    AG_DQUO,    EN_QUOT,  ONCE_SHIFT,                            EN_PIPE,    AG_RPRN,    EN_RCBR,    EN_RBRC,     EN_GT,     EN_TILD,
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
                                   KC_LALT,             KC_SPC,        LT(L_NUM, KC_ESC),           KC_H,               KC_SPC,         LT(L_FUN, KC_ENT)
                        //`+--------------------+--------------------+--------------------||--------------------+--------------------+--------------------+'
    )
};


bool shift_on_next_key = false;

// Обработка нажатий?
bool process_record_user(uint16_t keycode, keyrecord_t *record) {   // В конце должно быть true, чтоб символ напечатался.
    // lang_shift
    if (!lang_shift_process_record(keycode, record))
        return false;


    // Одиночный шифт от GPT4. Потому что одиночный шифт lang_shift не нравится. Но этот шифт не умеет работать с кастом кейкодами lang_shift
    if (keycode == ONCE_SHIFT && record->event.pressed) {
        shift_on_next_key = true;
        return false;
    }

    if (shift_on_next_key && record->event.pressed) {
        register_code(KC_LSFT);
        register_code(keycode);
        unregister_code(keycode);
        unregister_code(KC_LSFT);
        shift_on_next_key = false;
        return false;
    }


    // Умная точка
    if (keycode == SMART_DOT && record->event.pressed) {
        lang_shift_tap_key(AG_DOT);
        register_code(KC_SPC);
        unregister_code(KC_SPC);
        shift_on_next_key = true;
        return false;
    }


    // Запятая + пробел
    if (keycode == COMMA_SPACE && record->event.pressed) {
        lang_shift_tap_key(AG_COMM);
        register_code(KC_SPC);
        unregister_code(KC_SPC);
        return false;
    }

    return true;    // Если условия выше не сработали, то отправить символ как есть
};

void user_timer(void) {
    lang_shift_user_timer();
};

// Tap Dance
// Mod keys on RU layer
vial_tap_dance_entry_t td0 = { KC_C,   // С on tap, Win on hold
                               WIN_EN,
                               KC_NO,
                               KC_NO,
                               TAPPING_TERM };
dynamic_keymap_set_tap_dance(0, &td0);

vial_tap_dance_entry_t td1 = { KC_P,   // З on tap, Win on hold
                               WIN_EN,
                               KC_NO,
                               KC_NO,
                               TAPPING_TERM };
dynamic_keymap_set_tap_dance(1, &td1);

vial_tap_dance_entry_t td2 = { KC_T,   // Е on tap, Alt on hold
                               ALT_EN,
                               KC_NO,
                               KC_NO,
                               TAPPING_TERM };
dynamic_keymap_set_tap_dance(2, &td2);

vial_tap_dance_entry_t td3 = { KC_D,   // В on tap, Alt on hold
                               ALT_EN,
                               KC_NO,
                               KC_NO,
                               TAPPING_TERM };
dynamic_keymap_set_tap_dance(3, &td3);

vial_tap_dance_entry_t td4 = { KC_J,   // О on tap, Ctrl on hold
                               CTRL_EN,
                               KC_NO,
                               KC_NO,
                               TAPPING_TERM };
dynamic_keymap_set_tap_dance(4, &td4);

vial_tap_dance_entry_t td5 = { KC_Y,   // Н on tap, Ctrl on hold
                               CTRL_EN,
                               KC_NO,
                               KC_NO,
                               TAPPING_TERM };
dynamic_keymap_set_tap_dance(5, &td5);


// Lighting Layers
layer_state_t default_layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case L_ENG:
            rgblight_sethsv(HSV_PINK);
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
            rgblight_sethsv(HSV_PURPLE);
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
