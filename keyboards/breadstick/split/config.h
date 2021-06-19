/* Copyright 2021 Carter Codell
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

//#include "config_common.h"

/* USB Device descriptor parameter */
//#define VENDOR_ID 0x6274
//#define PRODUCT_ID 0x6273
#define DEVICE_VER 0x0002
//#define MANUFACTURER breadtamer
//#define PRODUCT breadstick

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS / 2)

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS_MCU { F1, F0, F6, F7 }
#define MATRIX_COL_PINS_MCU { B6, F4, F5 }
#define UNUSED_PINS_MCU
#define MATRIX_ROW_PINS_MCP { A0, A1, A4, A5 }
#define MATRIX_COL_PINS_MCP { A3, A2, A7 }
#define UNUSeD_PINS_MCP

/* COL2ROW, ROW2COL*/
//#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
//#define DEBOUNCE 5

// TODO RGB Lighting
/*
#define RGB_DI_PIN B7 // B7 on MCU and MCP

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 21
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
*/
