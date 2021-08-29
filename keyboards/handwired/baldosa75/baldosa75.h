 /* Copyright 2020 Imam Rafii 
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

/*   LAYOUT
  ENCODER
  ESC| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | -  | =  |BCKS | DEL  
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | [  | ]  |     \    
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | ;  | '  |    ENTER 
  LSHFT| Z  | X  | C  | V  | B  | N  | M  | ,  | .  | /  |   RSHIF | FN 
  LCT| WIN| ALT|               ESPACE             | ALT| WIN | MN| RCT| 
*/

#define LAYOUT( \
  K015,	                                                                                        \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, \
	K400,       K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413,       K415, \
	      K501, K502, K503, K504, K505, K506, K507, K508, K509, K510, K511,       K513, K514, K515, \
	K600, K601,       K603,             K606,                   K610, K611, K612, K613, K614, K615  \
) { \
	{ K015,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215 }, \
	{ K300,  KC_NO, K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315 }, \
	{ K400,  KC_NO, K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  KC_NO, K415 }, \
	{ KC_NO, K501,  K502,  K503,  K504,  K505,  K506,  K507,  K508,  K509,  K510,  K511,  KC_NO, K513,  K514,  K515 }, \
	{ K600,  K601,  KC_NO, K603,  KC_NO, KC_NO, K606,  KC_NO, KC_NO, KC_NO, K610,  K611,  K612,  K613,  K614,  K615 }  \
}
