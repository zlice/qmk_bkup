#include QMK_KEYBOARD_H

// Make special keycodes more visible
#define ____ KC_TRNS
#define XXXX KC_NO

// Layer definition
#define L0 0
#define L1 1

// https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_macros
// see jkbone for RGB LED

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_all(
       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, XXXX,
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
       KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
       KC_LSFT, XXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXX,    KC_UP,   KC_RSFT,
       //MO(1), KC_LGUI, KC_LALT,   KC_LALT,              KC_SPC,       XXXX,             MO(1),   KC_APP, KC_LEFT, KC_DOWN,  KC_RGHT
       MO(1), KC_LGUI, KC_LALT,   KC_LALT,              KC_SPC,       XXXX,             MO(1),   KC_APP, KC_LEFT, KC_DOWN,  KC_RGHT
      ),
[1] = LAYOUT_all(
       KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, XXXX,
       ____,    ____,    ____,    ____,    ____,    ____,    ____, KC_PGUP, KC_UP,   KC_PGDN, KC_PSCR, KC_ESC,   KC_BSPC,  ____,
       ____,    ____,    ____,    ____,    KC_GRV, ____,  KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_INS,  KC_DEL,             ____,
       ____,    ____, KC_MUTE,    ____,    ____,    ____,    ____,  KC_END,    ____,    ____,    ____,  ____,    XXXX,    ____,  ____,
       ____,    ____, KC_SLCK,     ____,                   ____,       ____,                      ____,   RESET, ____, ____,  ____
    ),
/*
[1] = LAYOUT_all(
       KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, XXXX,
       ____,    RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, ____,    ____, KC_PGUP, KC_UP,   KC_PGDN, KC_PSCR, KC_ESC,   KC_BSPC,  ____,
       ____,    RGB_HUD, RGB_SAD, RGB_VAD,  KC_GRV, ____, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_INS,  KC_DEL,             ____,
       ____,    ____, KC_MUTE,    ____,     ____,    ____,    ____,  KC_END,    ____,    ____,    ____,  ____,    XXXX,    ____,  ____,
       ____,    ____,    ____,     ____,                   ____,       ____,                      ____,   RESET, ____, ____,  ____
    ),
*/
};

/*
// https://docs.splitkb.com/hc/en-us/articles/360011243659-How-can-I-set-the-default-RGB-underglow-color-of-my-keyboard-
#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_setrgb(RGB_GOLDENROD); // orange?
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif
*/

/*
// Base layer - ANSI QWERTY
[L0] = LAYOUT_all(
	KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, XXXX, KC_BSPC,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
	KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, XXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
	KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(L1), KC_SPC, KC_RALT, MO(L2), KC_LEFT, KC_DOWN, KC_RIGHT),

// Utility layer - RGB and multimedia control
[L1] = LAYOUT_all(
	____, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, ____, ____,
	____, RGB_TOG, RGB_MOD, RGB_M_K, RGB_M_R, ____, ____, KC_PSCR, ____, KC_PAUS, ____, ____, ____, ____,
	____, RGB_HUI, RGB_HUD, ____, ____, ____, ____, KC_INS, KC_HOME, KC_PGUP, ____, ____, ____,
	____, ____, RGB_SAI, RGB_SAD, ____, ____, ____, ____, ____, KC_END, KC_PGDN, ____, KC_MPLY, KC_VOLU, KC_MUTE,
	____, RGB_VAI, RGB_VAD, ____, ____, ____, ____, ____, KC_MPRV, KC_VOLD, KC_MNXT),

// Setup layer - Reset an additional "b" button
[L2] = LAYOUT_all(
	RESET, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	KC_B, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, RESET,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

};
*/

