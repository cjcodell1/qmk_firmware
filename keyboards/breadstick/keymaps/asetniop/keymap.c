#include QMK_KEYBOARD_H
#include "engine.h"
#include "keymap_engine.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT (
       KC_A, KC_S, KC_E, KC_T, KC_L, KC_R, KC_N, KC_I, KC_O, KC_P,
       KC_A, KC_S, KC_E, KC_T, KC_L, KC_R, KC_N, KC_I, KC_O, KC_P
)};

size_t keymapsCount = sizeof(keymaps)/sizeof(keymaps[0]);
