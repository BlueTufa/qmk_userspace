/*
Copyright 2024 Dan White <opensource@bluetufa.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "badger.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY]     = LAYOUT_60_hhkb_ansi(\
     KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  \
     KC_TAB,    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  \
     MOVE_MAC,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,   \
     KC_LSFT,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  J_MACRO,  \
                KC_LCTL,  KC_LGUI,                                KC_SPC,                                 KC_RALT,  LT_FUNC   ),

[_MOVE]       = LAYOUT_60_hhkb_ansi(\
     MAC_FRC,   MM_LEFT,  MM_RGHT,  KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  P_PAREN,  KC_RPRN,  KC_UNDS,  KC_PLUS,  WD_DELE,  \
     _______,   IJ_STEP,  IJ_INTO,  IJ_OUT,   IJ_NEXT,  IJ_STOP,  IJ_TOP,   WD_BACK,  KC_HOME,  KC_END,   WD_FRWD,  IJ_BACK,  IJ_FWD,   KC_PIPE,  \
     _______,   MM_LH,    MM_MAX,   MM_RH,    IJ_FIND,  IJ_LINE,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_COLN,  KC_DQUO,  _______,  \
     _______,   MM_UH,    MM_BH,    MAC_CPY,  MAC_SPS,  _______,  IJ_BOTT,  IJ_REN,   IJ_IMPL,  IJ_DECL,  IJ_USAG,  _______,  _______,  \
                _______,  _______,                                _______,                                _______,  _______   ),

[_FUNCTION]   = LAYOUT_60_hhkb_ansi(\
     KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,  \
     _______,   _______,  _______,  _______,  IJ_RFMT,  IJ_TERM,  KC_MPLY,  KC_PGUP,  _______,  _______,  KC_PGDN,  KC_VOLD,  KC_VOLU,  KC_INS,  \
     _______,   _______,  _______,  IJ_DEBG,  IJ_FILE,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  \
     _______,   _______,  _______,  KC_CAPS,  _______,  KC_MRWD,  KC_MNXT,  KC_MUTE,  _______,  _______,  _______,  _______,  CONFIG,   \
                _______,  _______,                                _______,                                _______,  _______   ),

[_MACRO]     = LAYOUT_60_hhkb_ansi(\
     _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
     _______,   SELECT,   KC_UP,    _______,  SED,      KC_MSTP,  _______,  _______,  BASH_IF,  _______,  _______,  P_BRACK,  _______,  _______, \
     _______,   KC_LEFT,  KC_DOWN,  KC_RGHT,  FOR_LOOP, _______,  _______,  _______,  _______,  FOR_LOOP, _______,  _______,  _______,  \
     _______,   _______,  _______,  CONST,    _______,  SHEBANG,  TS_IMPT,  _______,  _______,  _______,  _______,  _______,  _______,  \
                _______,  _______,                                _______,                                _______,  _______   ),

[_CONFIG]     = LAYOUT_60_hhkb_ansi(\
     _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
     _______,   _______,  _______,  EE_CLR,   QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
     _______,   _______,  _______,  DB_TOGG,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
     _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, \
                _______,  _______,                                _______,                                _______,  _______   )
};
