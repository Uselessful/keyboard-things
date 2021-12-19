#include QMK_KEYBOARD_H

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_P7,    KC_P8,    KC_P9,    KC_BSPC,  
        KC_P4,    KC_P5,    KC_P6,    KC_PPLS,  
        KC_P1,    KC_P2,    KC_P3,    KC_PENT,  
        KC_P0,    KC_PCMM,  KC_PDOT,  KC_PENT
    ),

    [1] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____,         
        ____, ____, ____, ____,        
        ____, ____, ____, ____  
      
    ),

    [2] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____,         
        ____, ____, ____, ____,        
        ____, ____, ____, ____  
      
    ),

    [3] = LAYOUT(
        ____, ____, ____, ____,
        ____, ____, ____, ____,         
        ____, ____, ____, ____,        
        ____, ____, ____, ____  
      
    )
};