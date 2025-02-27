/* Copyright 2023 Jason Chestnut <pauperboards@gmail.com> @pauperboards
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

<<<<<<<< HEAD:keyboards/keychron/q0/q0_stm32l432/config.h
#pragma once

/* key matrix pins */
#define MATRIX_ROW_PINS { B5, B4, B3, A15, A14, A13 }
#define MATRIX_COL_PINS { A5, A6, A7, B0 }

/* RGB Matrix Driver Configuration */
#define DRIVER_COUNT 1
#define DRIVER_ADDR_1 0b1110100

/* RGB Matrix Configuration */
#define DRIVER_1_LED_TOTAL 21
#define RGB_MATRIX_LED_COUNT DRIVER_1_LED_TOTAL

#define CKLED2001_CURRENT_TUNE { 0xFF, 0xFF, 0x70, 0xFF, 0xFF, 0x70, 0xFF, 0xFF, 0x70, 0xFF, 0xFF, 0x70 }

/* Enable num-lock LED */
#define NUM_LOCK_LED_INDEX 4
========
#include "quantum.h"

#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) { 
        return false; 
    }
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
       tap_code(KC_VOLD);
    }
    return true;
}
#endif
>>>>>>>> temp:keyboards/pauperboards/brick/brick.c
