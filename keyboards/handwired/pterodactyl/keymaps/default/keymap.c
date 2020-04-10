/* Copyright 2020 Marcus Young
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//* ,------------------------------------------------.                    .------------------------------------------------.
//* |   =  |   1  |   2  |   3  |   4  |   5  |  _2_ |                    |  _2_ |   6  |   7  |   8  |   9  |   0  |  -   |
//* |------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
//* | Del  |   Q  |   W  |   E  |   R  |   T  |  _3_ |                    |  _3_ |   Y  |   U  |   I  |   O  |   P  |  \   |
//* |------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
//* | BkSp |   A  |   S  |   D  |   F  |   G  |  _4_ |                    |  _4_ |   H  |   J  |   K  |   L  |; / L2|'/Cmd |
//* |------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
//* |LShift|Z/Ctrl|   X  |   C  |   V  |   B  |  _5_ |                    |  _5_ |   N  |   M  |   ,  |   .  |//Ctrl|RShift|
//* |------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
//* |Grv/L1|  '"  |AltShf| Left | Right|  _1_ |  _6_ |                    |  _6_ |  _1_ |  Up  | Down |   [  |   ]  | ~L1  |
//* `------------------------------------------------'                    '------------------------------------------------'
//*                                            ,--------------.  ,---------------.
//*                                            |5 App | 2 LGui|  | 4 Alt  | 2 ^/Esc|
//*                                     ,------|------|-------|  |--------+--------+------.
//*                                     |  1   |  6   | 3 Home|  | 5 PgUp | 3      |  1   |
//*                                     | Space|Backsp|-------|  |--------|  Tab   |Enter |
//*                                     |      |ace   | 4 End |  | 6 PgDn |        |      |
//*                                     `---------------------'  `------------------------'
    [0] = LAYOUT(/* Base */
        //left hand
        CTL_T(KC_ESC),         KC_1,           KC_2,     KC_3,     KC_4,  KC_5,         KC_LGUI,
               KC_DEL,         KC_Q,           KC_W,     KC_E,     KC_R,  KC_T,         KC_HOME,
             KC_LCTRL,         KC_A,           KC_S,     KC_D,     KC_F,  KC_G,          KC_END,
              KC_LSFT,  CTL_T(KC_Z),           KC_X,     KC_C,     KC_V,  KC_B,   ALT_T(KC_APP),
              KC_TRNS,      KC_QUOT,  LALT(KC_LSFT),  KC_LEFT,  KC_RGHT,  KC_SPC,       KC_BSPC)

//        // right hand
//         CTL_T(KC_ESC),    KC_6,   KC_7,     KC_8,     KC_9,               KC_0,         KC_MINS,
//                KC_TAB,    KC_Y,   KC_U,     KC_I,     KC_O,               KC_P,         KC_BSLS,
//               KC_RALT,    KC_H,   KC_J,     KC_K,     KC_L,            KC_TRNS,  GUI_T(KC_QUOT),
//               KC_PGUP,    KC_N,   KC_M,  KC_COMM,   KC_DOT,     CTL_T(KC_SLSH),         KC_RSFT,
//               KC_PGDN,  KC_ENT,  KC_UP,  KC_DOWN,  KC_LBRC,            KC_RBRC,         KC_TRNS)
};

void matrix_init_user(void) {}
void matrix_scan_user(void) {}
void led_set_user(uint8_t usb_led) {}
/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}*/
