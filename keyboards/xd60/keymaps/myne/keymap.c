#include QMK_KEYBOARD_H

// Make special keycodes more visible
#define ____ KC_TRNS
#define XXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // 0: Base Layer
  LAYOUT_all_rev3(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,    KC_BSPC,  XXXX,      \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,             KC_BSLS,   \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  XXXX,                KC_ENT,    \
      KC_LSFT, XXXX,    KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  XXXX,      KC_UP,    KC_RSFT,   \
      MO(1), KC_LGUI, KC_LALT, KC_LALT,   KC_SPC,                               XXXX, XXXX,    KC_APP,   KC_LEFT, KC_DOWN,  KC_RIGHT),

      // all, not rev 3 - works but no 2nd alt
      //MO(1), KC_LGUI, KC_LALT,                   KC_SPC,                          XXXX,             KC_APP,   KC_LEFT, KC_DOWN,  KC_RIGHT),

  // 1: Function Layer
  LAYOUT_all_rev3(
  /*
      RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_F13,   KC_F14,    \
      KC_TAB,   KC_WH_U, KC_UP,   KC_WH_D, KC_BSPC,KC_HOME,KC_CALC,KC_NO,  KC_INS, KC_NO,   KC_PSCR, KC_SLCK,  KC_PAUS,           KC_DEL,    \
      KC_LCTL,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_DEL, KC_END, KC_PGDN,KC_NO,  KC_NO,  KC_NO,   KC_HOME, KC_PGUP,  KC_NO,             KC_ENT,    \
      KC_LSFT, KC_NO,   KC_NO,   KC_APP,  BL_STEP,KC_NO,  KC_NO,  KC_VOLD,KC_VOLU,KC_MUTE, KC_END,  KC_PGDN,  KC_RSFT, KC_PGUP,  KC_INS,    \
      MO(1), KC_LGUI, KC_LALT,   KC_LALT,                 KC_SPC,                          KC_NO,   KC_APP,   KC_LEFT, KC_DOWN,  KC_RIGHT),
  */

      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, XXXX,
      ____,    ____, ____, ____, ____,    ____,            ____,  KC_PGUP,  KC_UP,   KC_PGDN, KC_PSCR, KC_ESC,  KC_BSPC,  ____,
      ____,    ____, ____, ____,  KC_GRV, ____,            KC_HOME, KC_LEFT, KC_DOWN,  KC_RGHT, KC_INS,  KC_DEL, XXXX,    ____,
      ____,   XXXX, KC_MUTE,    ____,     ____,    ____,    ____,  KC_END,    ____,    ____,    ____,   ____,    XXXX, ____,  ____,
      ____,    ____,    ____,     ____,   ____,                                 ____, ____,    RESET, ____, ____,  ____ ),

      //____,    ____,    ____,     ____,                   ____,                                       RESET, ____, ____,  ____ ),

};

// Loop
void matrix_scan_user(void) {
  // Empty
};
