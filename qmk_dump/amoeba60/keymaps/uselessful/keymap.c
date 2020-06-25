#include QMK_KEYBOARD_H

#define _BL 0
#define _LL 1
#define _RL 2
#define _GL 3
#define _______ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BL] = LAYOUT_DEFAULT(
  KC_GESC,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL,      KC_BSPC,
  KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,     
  KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,      KC_ENT,
  KC_LSFT,        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,          KC_RSFT,        
  KC_LCTL,KC_LGUI,KC_LALT,       KC_SPC,       MO(_LL),            MO(_RL),             KC_RALT,MO(_LL),KC_MENU,KC_RCTL),

[_LL] = LAYOUT_DEFAULT(
  KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,      KC_DEL,  
  _______,_______,_______,_______,_______,_______,_______,_______,KC_UP,  KC_MPRV,KC_MPLY,KC_MSTP,KC_MNXT, KC_MUTE,     
  _______,_______,_______,_______,_______,_______,_______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,    _______,
  _______,        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,      
  _______,_______,_______,        _______,      _______,            TG(_GL),              _______,_______,_______,_______),

 [_RL] = LAYOUT_DEFAULT(
  KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,      KC_DEL,  
  _______,_______,KC_MS_U,_______,_______,_______,_______,KC_ACL0,KC_WH_U,KC_ACL1,_______,_______,_______, _______,     
  _______,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,_______,KC_BTN1,KC_BTN3,KC_BTN2,_______,_______,    _______,
  _______,        _______,_______,_______,_______,KC_ACL2,KC_WH_D,KC_BTN4,KC_BTN5,_______,_______,        _______,      
  _______,_______,_______,        _______,      _______,            TG(_GL),              _______,_______,_______,_______),

  [_GL] = LAYOUT_DEFAULT(
  KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,      KC_BSPC,  
  KC_TAB,KC_Q,    KC_W,   KC_E,   KC_R,_______,_______,_______,KC_UP,  _______,_______,_______,_______, _______,     
  _______,KC_A,   KC_S,   KC_D,   KC_F,_______,_______,KC_BTN1,KC_BTN3,KC_BTN2,_______,_______,    _______,
  KC_LSFT,        KC_Z,   KC_X,   KC_C,   KC_V,_______,KC_ACL2,KC_WH_D,KC_BTN4,KC_BTN5,_______,        _______,      
  KC_LCTL,_______,KC_LALT,        KC_SPC,      _______,           TG(_GL),             _______,_______,_______,_______),
};