#include QMK_KEYBOARD_H

enum combos {
  QUOTESEMI_A,
  LESSTHANQ_O,
  GREATERTHANJ_E,
  PK_U,
  YX_I,
  FB_D,
  GM_H,
  CW_T,
  RV_N,
  LZ_S

};

const uint16_t PROGMEM quotesemi_combo[] = {KC_SCOLON, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM lessthan_combo[] = {KC_COMMA, KC_O, COMBO_END};
const uint16_t PROGMEM greaterthan_combo[] = {KC_DOT, KC_E, COMBO_END};
const uint16_t PROGMEM pk_combo[] = {KC_P, KC_K, COMBO_END};
const uint16_t PROGMEM yx_combo[] = {KC_Y, KC_X, COMBO_END};
const uint16_t PROGMEM fb_combo[] = {KC_F, KC_B, COMBO_END};
const uint16_t PROGMEM gm_combo[] = {KC_G, KC_M, COMBO_END};
const uint16_t PROGMEM cw_combo[] = {KC_C, KC_W, COMBO_END};
const uint16_t PROGMEM rv_combo[] = {KC_R, KC_V, COMBO_END};
const uint16_t PROGMEM lz_combo[] = {KC_L, KC_Z, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [QUOTESEMI_A] = COMBO(quotesemi_combo, KC_A),
  [LESSTHANQ_O] = COMBO(lessthan_combo, KC_O),
  [GREATERTHANJ_E] = COMBO(greaterthan_combo, KC_E),
  [PK_U] = COMBO(pk_combo, KC_U),
  [YX_I] = COMBO(yx_combo, KC_I),
  [FB_D] = COMBO(fb_combo, KC_D),
  [GM_H] = COMBO(gm_combo, KC_H),
  [CW_T] = COMBO(cw_combo, KC_T),
  [RV_N] = COMBO(rv_combo, KC_N),
  [LZ_S] = COMBO(lz_combo, KC_S)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_3x10(
    KC_P, KC_Y, KC_F, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L,
    KC_SCOLON, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z,
          LT(1,KC_TAB),       KC_LCTL, KC_BSPC, KC_ENT, KC_SPC, LT(2, KC_LBRC), KC_LSHIFT
  ),

  [1] = LAYOUT_ortho_3x10(
    KC_GRAVE, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_QUOT,
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
             KC_LCTL,          _______, _______, _______, KC_SLSH, MO(2), _______
  ),

  [2] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, _______, _______, KC_PLUS, KC_EQL, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
             _______,          _______, _______, _______, _______, _______, _______
  )
};

//
// KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
