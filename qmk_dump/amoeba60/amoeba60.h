#ifndef AMOEBA60_H
#define AMOEBA60_H

#include "quantum.h"

#define LAYOUT_DEFAULT( \
	k00, k01, k02, k03, k04, k05, k06, k50, k51, k52, k53, k54, k55, k56, \
	k10, k11, k12, k13, k14, k15, k16, k60, k61, k62, k63, k64, k65, k66, \
	k20, k21, k22, k23, k24, k25, k26, k70, k71, k72, k73, k74,      k76, \
	k30, k31, k32, k33, k34, k35, k36, k80, k81, k82, k83,           k86, \
	k40, k41, k42,        k43,   k45,    k90,    k92,   k93,   k94,  k96  \
) { \
	{ k00, k01, k02, k03, k04, k05, k06 }, \
	{ k10, k11, k12, k13, k14, k15, k16 }, \
	{ k20, k21, k22, k23, k24, k25, k26 }, \
	{ k30, k31, k32, k33, k34, k35, k36 }, \
	{ k40, k41, k42, k43, KC_NO, k45, KC_NO }, \
	{ k50, k51, k52, k53, k54, k55, k56 }, \
	{ k60, k61, k62, k63, k64, k65, k66 }, \
	{ k70, k71, k72, k73, k74, KC_NO, k76 }, \
	{ k80, k81, k82, k83, KC_NO, KC_NO, k86 }, \
	{ k90, KC_NO, k92, k93, k94, KC_NO, k96 } \
}

void matrix_init_user(void);
void matrix_scan_user(void);

#define KEYMAP LAYOUT_DEFAULT
#endif
