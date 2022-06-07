/* Copyright 2018 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define _BASE 0
#define _FN1 1
#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = {{ KC_A }}
};
*/

/*
   only have just enough pins to use the somewhat empty 5th row as a fake col 11
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = {
    {KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    /*r6c5 KC_MINS,*/ KC_EQL,  KC_BSPC,},\
    {KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    /*r8c5 KC_LBRC,*/ KC_RBRC, KC_BSLS,},\
    {KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, /*nil*/           KC_QUOT,  KC_ENT,},\
    {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, /*nil*/             KC_UP, KC_RSFT,},\
    {MO(_FN1), KC_LGUI, KC_LALT, KC_LALT, _______, KC_SPC, KC_MINS, _______, KC_LBRC, KC_APP,  KC_LEFT, /*nil*/            KC_DOWN, KC_RGHT}
  },

  [_FN1] = {
    {KC_GRV,    KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   /*r6c5 KC_F11, */ KC_F12,  KC_DEL,},\
    {_______, _______, _______, _______, _______,  _______, _______, KC_PGUP, KC_UP,   KC_PGDN,  KC_PSCR,  /*8c5 KC_ESC,  */ KC_BSPC, _______,},\
    {_______, _______, _______, KC_BSPC, KC_GRAVE, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,   KC_INS, /*nil*/            _______, _______,},
    {_______, _______, KC_MUTE, _______, _______,  _______, KC_END,  _______, _______, _______,  _______, /*nil*/            _______, _______,},\
    {_______, _______, KC_SLCK, _______, _______,  _______, KC_F11,  _______, KC_ESC,  RESET,    _______, /*nil*/             _______, _______}

  }
};

