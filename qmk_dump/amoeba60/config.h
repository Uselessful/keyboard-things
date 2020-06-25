

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6061
#define DEVICE_VER      0x0001
#define MANUFACTURER    uselessful
#define PRODUCT         amoeba60
#define DESCRIPTION     amoebaed 60% keyboard

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS { D2, D1, C6, D7, B4, D3, D0, D4, E6, B5,}
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5}
#define UNUSED_PINS
#define FORCE_NKRO

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE




/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
