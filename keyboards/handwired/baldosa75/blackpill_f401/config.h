/* Copyright 2019
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

#define MATRIX_COL_PINS \
    { B0, B2, B1, B0, A7, A6, A5, A4, A15, B3, B4, A10, A9, A8, B15, B14 }
#define MATRIX_ROW_PINS \
    { A2, B8, A0, A1, C13, C14, C15 }
#define UNUSED_PINS \
    { A3, B9, B13, B5, A11, A12, B10 }

/*
DO NOT USE A11, A12
*/

#define ENCODERS_PAD_A { B12 }
#define ENCODERS_PAD_B { D13 }