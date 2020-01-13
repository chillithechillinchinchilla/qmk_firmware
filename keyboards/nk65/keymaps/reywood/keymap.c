/* Copyright 2019 Yiancar
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
#include QMK_KEYBOARD_H

#define ______ KC_TRNS
#define KC_HGRV ALL_T(KC_GRV) // Hyper if held / Grave if tapped

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_65_ansi( /* Base */
    KC_GESC, KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,\
    KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,\
    KC_HGRV, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGDN,\
    KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_END, \
    KC_LCTL, KC_LALT, KC_LGUI,                KC_SPC,                          KC_RGUI, MO(1),   KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT),

[1] = LAYOUT_65_ansi( /* FN */
    KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL,  ______,\
    ______,  ______,  ______,   KC_UP,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,   RESET,  ______,\
    KC_CAPS, ______, KC_LEFT, KC_DOWN, KC_RGHT,  ______,  ______,  ______,  ______,  ______,  ______,  ______,           ______,  ______,\
    ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,          KC_VOLU,  ______,\
    KC_VOLU, KC_VOLD, KC_MUTE,                     KC_MPLY,                          ______,  ______,   MO(2),  ______, KC_VOLD,  ______),

[2] = LAYOUT_65_ansi( /* Empty for dynamic keymaps */
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,\
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,\
    ______, ______, ______, ______, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  ______, ______, ______, ______,          ______, ______,\
    ______, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  BR_DEC,  BR_INC,  ES_DEC,  ES_INC,  ______,          ______, ______,\
    ______, ______, ______,                ______,                               ______, ______, ______, ______, ______, ______),

[3] = LAYOUT_65_ansi( /* Empty for dynamic keymaps */
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,\
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,\
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,          ______, ______,\
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,          ______, ______,\
    ______, ______, ______,                ______,                               ______, ______, ______, ______, ______, ______),
};

void matrix_init_user(void) {
  //user initialization
}

void matrix_scan_user(void) {
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}