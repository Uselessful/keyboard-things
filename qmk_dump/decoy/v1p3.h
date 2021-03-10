/* Copyright 2020 noroadsleft
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
#pragma once

#include "quantum.h"

/*
 * So... to be perfectly honest, I'm guessing at these based on a KBFirmware
 * JSON file and photos of the PCB from a user on QMK Discord.
 *
 * This board has the most unusual matrix wiring I've seen on any mechanical
 * keyboard PCB. The 2u Backspace doesn't share its matrix position with either
 * of the keys used in a split Backspace. Left GUI and Left Alt are on
 * different columns depending on how large the Left Ctrl key is (which could be
 * as wide as 1.75u). I don't have much idea what's going on in the bottom right
 * corner. Pretty much everything in the drawings below is basically a
 * semi-educated guess.
 *
 * Sorry if you're coming in here after the fact. I don't have the PCB on-hand.
 *
 *                                                                 - noroadsleft
 *
 *                                                                    ┌───────┐
 *                                                       2u Backspace │K56    │
 *                                                                    └───────┘
 *                ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐   ANSI Enter   ISO Enter
 * ANSI LSft      │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0A │0B │0C │K56│K76│      ┌─────┐      ┌─────┐
 * ┌────────┐     ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤      │1D   │      │2D   │
 * │30      │ ─┐  │10   │11 │12 │13 │14 │15 │16 │17 │18 │19 │1A │1B │1C │1D   │   ┌──┴─────┤   ┌──┴┐    │
 * └────────┘  │  ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┤   │2D      │   │2C │    │
 * ISO LSft    │  │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2A │2B │2C │2D  │   └────────┘   └───┴────┘
 * ┌────┬───┐  │  ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬──┴┬───┤   ┌──────────┐
 * │30  │31 │ ─┼> │LSft    │32 │33 │34 │35 │36 │37 │38 │39 │3A │3C    │3D │3F │   │3D        │ ANSI RSft
 * └────┴───┘  │  ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬───┼───┼───┤   └──────────┘
 * 2u LSft     │  │40  │41  │43  │48                      │4A │4B │4C │4E │4F │   ┌───┬───┬───┐
 * ┌───────┐   │  └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┘   │3B │3D │3F │ 3x1u "RSft"
 * │30     │  ─┘                                                                  └───┴───┴───┘
 * └───────┘                                                                      ┌──────┬───┐
 *                                                                                │K84   │K85│ HHKB RSft
 *                                                                                └──────┴───┘
 *                ┌──────┬────┬────┬────┬───────────┬────┬────┬───┬───┬───┬───┐
 *                │40    │42  │44  │45  │48         │49  │4A  │4B │4C │4E │4F │ Minila
 *                └──────┴────┴────┴────┴───────────┴────┴────┴───┴───┴───┴───┘
 *                ┌────┬────┬────┬────────────────────────┬────┬────┬────┬────┐
 *                │40  │41  │43  │48                      │4A  │4B  │4D  │4F  │ Standard
 *                └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 *                ┌─────┬───┬─────┬───────────────────────────┬─────┬───┬─────┐
 *                │40   │41 │43   │48                         │4B   │4D │4F   │ Tsangan/HHKB is fucked up
 *                └─────┴───┴─────┴───────────────────────────┴─────┴───┴─────┘
 *                ┌─────┬───┬─────┬───────────────────────────┬───┬───┬───┬───┐
 *                │40   │41 │43   │48                         │4B │4C │4E │4F │
 *                └─────┴───┴─────┴───────────────────────────┴───┴───┴───┴───┘
 *                ┌─────┬───┬─────┬───────────────────────┬─────┬─────┬───┬───┐
 *                │40   │41 │43   │48                     │4A   │4C   │4E │4F │
 *                └─────┴───┴─────┴───────────────────────┴─────┴─────┴───┴───┘
 */

#define LAYOUT_all( \
    K00, K01, K02, K03, K04, K05, K06, K50, K51, K52, K53, K54, K55, K56, K76, \
     K10,  K11, K12, K13, K14, K15, K16, K60, K61, K62, K63, K64, K65,   K66,  \
      K20,  K21, K22, K23, K24, K25, K26, K70, K71, K72, K73, K74,     K75,    \
       K30,   K31, K32, K33, K34, K35, K36, K80, K81, K82, K83,   K84,    K85, \
     K40,  K41,  K42,                K43,               K46,  K92,  K93,  K94  \
) { \
    { K00, K01, K02, K03, K04, K05, K06 }, \
    { K10, K11, K12, K13, K14, K15, K16 }, \
    { K20, K21, K22, K23, K24, K25, K26 }, \
    { K30, K31, K32, K33, K34, K35, K36 }, \
    { K40, K41, K42, K43, KC_NO, KC_NO, K46 }, \
    { K50, K51, K52, K53, K54, K55, K56 }, \
    { K60, K61, K62, K63, K64, K65, K66 }, \
    { K70, K71, K72, K73, K74, K75, K76 }, \
    { K80, K81, K82, K83, K84, K85, KC_NO }, \
    { KC_NO, KC_NO, K92, K93, K94, KC_NO, KC_NO } \
}
