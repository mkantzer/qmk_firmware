/* Copyright 2018 Holten Campbell
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
    LAYOUT(
		LT(1,KC_ESC),   KC_Q,     KC_W,     KC_E,       KC_R,       KC_T,                  KC_Y,           KC_U,       KC_I,        KC_O,       KC_P,       KC_BSPC, KC_DEL,
		LT(2,KC_TAB),   KC_A,     KC_S,     KC_D,       KC_F,       KC_G,                  KC_H,           KC_J,       KC_K,        KC_L,       KC_QUOT,    KC_ENT,
		KC_LSPO,        KC_Z,     KC_X,     KC_C,       KC_V,       KC_B,                  MO(2),          KC_N,       KC_M,        KC_COMM,    KC_DOT,     KC_SLSH, KC_RSPC,
		KC_LCTL,        KC_LGUI,                        KC_LALT,    LSFT_T(KC_ENT),        LT(1,KC_SPC),   MO(6),                                           MO(5),   MO(4)
    ),

    LAYOUT(
		KC_GRV,         KC_1,     KC_2,     KC_3,       KC_4,       KC_5,                   KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS, KC_EQL,
        KC_TRNS,        KC_LEFT,  KC_DOWN,  KC_UP,      KC_RGHT,    KC_PGUP,                KC_LBRC,        KC_P4,      KC_P5,      KC_P6,      KC_SCLN,    KC_BSLS,
        KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_PGDN,                KC_TRNS,        KC_RBRC,    KC_P1,      KC_P2,      KC_P3,      KC_PDOT, KC_TRNS,
        KC_TRNS,        KC_TRNS,                        KC_TRNS,    KC_TRNS,                KC_SPC,         KC_ENT,                                         KC_P0, KC_TRNS
    ),

    LAYOUT(
		KC_TILD,        KC_EXLM,  KC_AT,    KC_HASH,    KC_DLR,     KC_PERC,                KC_CIRC,        KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_UNDS, KC_PLUS,
        KC_TRNS,        KC_LEFT,  KC_DOWN,  KC_UP,      KC_RGHT,    KC_HOME,                KC_LCBR,        KC_MUTE,    KC_VOLD,    KC_VOLU,    KC_COLN,    KC_PIPE,
        KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_END,                 KC_TRNS,        KC_RCBR,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_TRNS, KC_TRNS,
        KC_TRNS,        KC_TRNS,                        KC_TRNS,    KC_TRNS,                KC_PENT,        KC_TRNS,                                        KC_TRNS, MO(3)
    ),

    LAYOUT(
		KC_TRNS,        KC_F1,    KC_F2,    KC_F3,      KC_F4,      KC_F5,                  KC_F6,          KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11, KC_F12,
        KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, TG(7),
        KC_TRNS,        KC_TRNS,                        KC_TRNS,    KC_TRNS,                KC_TRNS,        KC_TRNS,                                        KC_TRNS, KC_TRNS
    ),

    LAYOUT(
		KC_NO,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,   KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC, KC_DEL,
        KC_NO,      LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_UP),    LCTL(KC_RGHT),  KC_NO,          KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_LSFT,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, KC_RSFT,
        KC_LCTL,    KC_LGUI,                                        KC_LALT,        KC_NO,          KC_NO,  KC_LALT,                                        KC_LGUI, KC_TRNS
    ),

    LAYOUT(
		KC_NO,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,   KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC, KC_DEL,
        KC_NO,      LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(KC_RGHT),  KC_NO,          KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_LSFT,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, KC_RSFT,
        KC_LCTL,    KC_LGUI,                                        KC_LALT,        KC_NO,          KC_NO,  KC_LALT,                                        KC_TRNS, KC_LCTL
    ),

    LAYOUT(
		KC_NO,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,   KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC, KC_DEL,
        KC_NO,      LALT(KC_LEFT),  LALT(KC_DOWN),  LALT(KC_UP),    LALT(KC_RGHT),  KC_NO,          KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_LSFT,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,  KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, KC_RSFT,
        KC_LCTL,    KC_LGUI,                                        KC_LALT,        KC_NO,          KC_NO,  KC_TRNS,                                        KC_LGUI, KC_LCTL
    ),

    LAYOUT(
		KC_ESC,     KC_Q,     KC_W,     KC_E,       KC_R,       KC_T,               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,    KC_DEL,
        KC_TAB,     KC_A,     KC_S,     KC_D,       KC_F,       KC_G,               KC_H,       KC_J,       KC_K,       KC_L,       KC_QUOT,    KC_ENT,
        KC_LSFT,    KC_Z,     KC_X,     KC_C,       KC_V,       KC_B,               MO(2),      KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    TG(7),
        KC_LCTL,    KC_LGUI,                        KC_LALT,    KC_SPC,             KC_SPC,     KC_RALT,                                        KC_RGUI,    KC_RCTL
    )
};

void matrix_init_user(void) {
  // set CapsLock LED to output and low
  setPinOutput(B1);
  writePinLow(B1);
  // set NumLock LED to output and low
  setPinOutput(B2);
  writePinLow(B2);
  // set ScrollLock LED to output and low
  setPinOutput(B3);
  writePinLow(B3);
}

void matrix_scan_user(void) {

}


void led_set_user(uint8_t usb_led) {
  if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
    writePinHigh(B2);
  } else {
    writePinLow(B2);
  }
  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinHigh(B1);
  } else {
    writePinLow(B1);
  }
/*
  if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
    writePinHigh(B3);
  } else {
    writePinLow(B3);
  }*/

}

//function for layer indicator LED
layer_state_t layer_state_set_user(layer_state_t state)
{
    if (get_highest_layer(state) == 1) {
    writePinHigh(B3);
	} else {
		writePinLow(B3);
    }
    return state;
}
