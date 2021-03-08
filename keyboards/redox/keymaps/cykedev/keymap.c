// Copyright 2021 Christian Eiden, cykedev
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H

#define CM_SPAL  MT(MOD_LGUI, KC_SPC)
#define CM_SPAR  MT(MOD_LGUI, KC_SPC)

#define SH_ENL  MT(MOD_LSFT, KC_ENT)
#define SH_ENR  MT(MOD_RSFT, KC_ENT)

#define SYM     MO(_SYMBOL)
#define ADJ     MO(_ADJUST)

#define QWERT   DF(_QWERTY)
#define COLEM   DF(_COLEMAK)

enum layer_names {
    _QWERTY,
    _COLEMAK,
    _SYMBOL,
    _ADJUST
  };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  /* QWERTY
   * ,-----------------------------------------.                                    ,-----------------------------------------.
   * | Esc  |   1  |   2  |   3  |   4  |   5  |                                    |   6  |   7  |   8  |   9  |   0  | Bsp  |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |  Home |                    |  End  |   Y  |   U  |   I  |   O  |   P  |  \   |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * | Ctrl |   A  |   S  |   D  |   F  |   G  |  PgUp |                    |  PgDn |   H  |   J  |   K  |   L  |   ;  |  '   |
   * |------+------+------+------+------+------|       |                    |       |------+------+------+------+------+------|
   * |Shift |   Z  |   X  |   C  |   V  |   B  '----------------,  ,----------------'   N  |   M  |   ,  |   .  |   /  | Shift|
   * |-----------------------------------------/  Alt  /  Ctrl /    \ Ctrl  \  Alt  \-----------------------------------------|
   * |  ADJ | Hypr |  Meh | Ctrl |    /  SYM  /-------/-------/      \-------\-------\  SYM  \    | Ctrl | Meh  | Hypr | ADJ  |
   * |      |      |      |      |   /       /  Cmd  / Shift /        \ Shift \  Cmd  \       \   |      |      |      |      |
   * `---------------------------'  '-------/ Space / Enter /          \ Enter \ Space \-------'  '---------------------------'
   *                                        '--------------'            '--------------'
   */
     KC_GESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                            KC_6   , KC_7   , KC_8    , KC_9    , KC_0    , KC_BSPC ,
     KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_HOME ,                         KC_END , KC_Y   , KC_U   , KC_I    , KC_O    , KC_P    , KC_BSLS ,
     KC_LCTL , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_PGUP ,                         KC_PGDN, KC_H   , KC_J   , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,
     KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_LALT , KC_LCTL   , KC_RCTL   , KC_RALT, KC_N   , KC_M   , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT ,
     ADJ     , KC_HYPR, KC_MEH , KC_MINS,          SYM    , CM_SPAL , SH_ENL    , SH_ENR    , CM_SPAR, SYM    ,          KC_EQL  , KC_RALT , KC_HYPR , ADJ
  ),

  [_COLEMAK] = LAYOUT(
  /* COLEMAK
   * ,-----------------------------------------.                                    ,-----------------------------------------.
   * | Esc  |   1  |   2  |   3  |   4  |   5  |                                    |   6  |   7  |   8  |   9  |   0  | Bsp  |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   F  |   P  |   G  |  Home |                    |  End  |   J  |   L  |   U  |   Y  |   ;  |  \   |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * | Ctrl |   A  |   R  |   S  |   T  |   D  |  PgUp |                    |  PgDn |   H  |   N  |   E  |   I  |   O  |  '   |
   * |------+------+------+------+------+------|       |                    |       |------+------+------+------+------+------|
   * |Shift |   Z  |   X  |   C  |   V  |   B  '----------------,  ,----------------'   K  |   M  |   ,  |   .  |   /  | Shift|
   * |-----------------------------------------/  Alt  /  Ctrl /    \  Ctrl \  Alt  \-----------------------------------------|
   * |  ADJ | Hypr |  Meh |   -  |    /  SYM  /-------/-------/      \-------\-------\  SYM  \    |   =  | Meh  | Hypr | ADJ  |
   * |      |      |      |      |   /       /  Cmd  / Shift /        \ Shift \  Cmd  \       \   |      |      |      |      |
   * `---------------------------'  '-------/ Space / Enter /          \ Enter \ Space \-------'  '---------------------------'
   *                                        '--------------'            '--------------'
   */
     KC_GESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                            KC_6   , KC_7   , KC_8    , KC_9    , KC_0    , KC_BSPC ,
     KC_TAB  , KC_Q   , KC_W   , KC_F   , KC_P   , KC_G   , KC_HOME ,                         KC_END , KC_J   , KC_L   , KC_U    , KC_Y    , KC_SCLN , KC_BSLS ,
     KC_LCTL , KC_A   , KC_R   , KC_S   , KC_T   , KC_D   , KC_PGUP ,                         KC_PGDN, KC_H   , KC_N   , KC_E    , KC_I    , KC_O    , KC_QUOT ,
     KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_LALT , KC_LCTL   , KC_RCTL   , KC_RALT, KC_K   , KC_M   , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT ,
     ADJ     , KC_HYPR, KC_MEH , KC_MINS,          SYM    , CM_SPAL , SH_ENL    , SH_ENR    , CM_SPAR, SYM    ,          KC_EQL  , KC_MEH  , KC_HYPR , ADJ
  ),

  [_SYMBOL] = LAYOUT(
  /* SYMBOL
   * ,-----------------------------------------.                                    ,-----------------------------------------.
   * |  `~  |  F1  |  F2  |  F3  |  F4  |  F5  |                                    |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * |      |   !  |   @  |   [  |   ]  |   +  |       |                    |       |      |      |  up  |      |      |  F12 |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * |      |   &  |   |  |   (  |   )  |   -  |       |                    |       |      | left | down | right|  ?   |      |
   * |------+------+------+------+------+------|       |                    |       |------+------+------+------+------+------|
   * |      |   *  |   /  |   {  |   }  |   =  '----------------,  ,----------------'      |      |      |      |      |      |
   * |-----------------------------------------/       /       /    \       \       \-----------------------------------------|
   * |      |      |      |      |    /       /-------/-------/      \-------\-------\       \    |      |      |      |      |
   * |      |      |      |      |   /       /       /       /        \       \       \       \   |      |      |      |      |
   * `---------------------------'  '-------/       /       /          \       \       \-------'  '---------------------------'
   *                                        '--------------'            '--------------'
   */
     KC_GRV  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,                                         KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  ,
     XXXXXXX , KC_EXLM , KC_AT   , KC_LBRC , KC_RBRC , KC_PPLS , XXXXXXX ,                     XXXXXXX , XXXXXXX , XXXXXXX , KC_UP   , XXXXXXX , XXXXXXX , KC_F12  ,
     XXXXXXX , KC_AMPR , KC_PIPE , KC_LPRN , KC_RPRN , KC_MINS , XXXXXXX ,                     XXXXXXX , XXXXXXX , KC_LEFT , KC_DOWN , KC_RGHT , KC_QUES , XXXXXXX ,
     XXXXXXX , KC_ASTR , KC_SLSH , KC_LCBR , KC_RCBR , KC_PEQL , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
     XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
  ),

  [_ADJUST] = LAYOUT(
  /* ADJUST
   * ,-----------------------------------------.                                    ,-----------------------------------------.
   * | RST  |      |      |      |      |      |                                    |      |      |      |      |      | RST  |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * |      | Mod+ | H +  | S +  |  V + | Vol+ | QWERT |                    | COLEM |  B + |      |      |      |      |      |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * |      | Mod- | H -  | S -  |  V - | Vol- |  RGB  |                    |       |  B - |  <<  | play |  >>  |      |      |
   * |------+------+------+------+------+------|       |                    |       |------+------+------+------+------+------|
   * |      |      |      |      |      | Mute '----------------,  ,----------------'      |      |      |      |      |      |
   * |-----------------------------------------/       /       /    \       \       \-----------------------------------------|
   * |      |      |      |      |    /       /-------/-------/      \-------\-------\       \    |      |      |      |      |
   * |      |      |      |      |   /       /       /       /        \       \       \       \   |      |      |      |      |
   * `---------------------------'  '-------/       /       /          \       \       \-------'  '---------------------------'
   *                                        '--------------'            '--------------'
   */
     RESET   , XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , RESET   ,
     XXXXXXX , RGB_MOD  , RGB_HUI , RGB_SAI , RGB_VAI , KC_VOLU , QWERT   ,                     COLEM   , KC_BRIU , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
     XXXXXXX , RGB_RMOD , RGB_HUD , RGB_SAD , RGB_VAD , KC_VOLD , RGB_TOG ,                     XXXXXXX , KC_BRID , KC_MRWD , KC_MPLY , KC_MFFD , XXXXXXX , XXXXXXX ,
     XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX , KC_MUTE , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
     _______ , XXXXXXX  , XXXXXXX , XXXXXXX ,           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,           XXXXXXX , XXXXXXX , XXXXXXX , _______
  )
};



