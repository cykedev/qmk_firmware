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

#define CM_SPA  MT(MOD_LGUI, KC_SPC)
#define AL_SPA  MT(MOD_RALT, KC_SPC)
#define SY_COM  LT(_SYMBOL, KC_COMM)
#define SY_DOT  LT(_SYMBOL, KC_DOT)
#define SH_ENL  MT(MOD_LSFT, KC_ENT)
#define SH_ENR  MT(MOD_RSFT, KC_ENT)
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
   * | Esc  |   1  |   2  |   3  |   4  |   5  |                                    |   6  |   7  |   8  |   9  |   0  |  =   |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |  Home |                    |  End  |   Y  |   U  |   I  |   O  |   P  |  \   |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * | Ctrl |   A  |   S  |   D  |   F  |   G  |  Del  |                    |  Bsp  |   H  |   J  |   K  |   L  |   ;  |  '   |
   * |------+------+------+------+------+------|       |                    |       |------+------+------+------+------+------|
   * |Shift |   Z  |   X  |   C  |   V  |   B  '----------------,  ,----------------'   N  |   M  |   ,  |   .  |   /  | Shift|
   * |-----------------------------------------/   *   /   /   /    \   +   \   -   \-----------------------------------------|
   * |  ADJ | Hypr |  Alt | Ctrl |    /  SYM  /-------/-------/      \-------\-------\  SYM  \    | Ctrl | Alt  | Meh  | ADJ  |
   * |      |      |      |      |   /   ,   /  Cmd  / Shift /        \ Shift \  Alt  \   .   \   |      |      |      |      |
   * `---------------------------'  '-------/ Space / Enter /          \ Enter \ Space \-------'  '---------------------------'
   *                                        '--------------'            '--------------'
   */
     KC_ESC  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                            KC_6   , KC_7   , KC_8    , KC_9    , KC_0    , KC_PEQL ,
     KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_HOME ,                         KC_END , KC_Y   , KC_U   , KC_I    , KC_O    , KC_P    , KC_BSLS ,
     KC_LCTL , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_DEL  ,                         KC_BSPC, KC_H   , KC_J   , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,
     KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_ASTR , KC_SLSH   , KC_PPLS   , KC_MINS, KC_N   , KC_M   , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT ,
     ADJ     , KC_HYPR, KC_LALT, KC_LCTL,          SY_COM , CM_SPA  , SH_ENL    , SH_ENR    , AL_SPA , SY_DOT ,          KC_RCTL , KC_RALT , KC_MEH  , ADJ
  ),

  [_COLEMAK] = LAYOUT(
  /* COLEMAK
   * ,-----------------------------------------.                                    ,-----------------------------------------.
   * | Esc  |   1  |   2  |   3  |   4  |   5  |                                    |   6  |   7  |   8  |   9  |   0  |  =   |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   F  |   P  |   G  |  Home |                    |  End  |   J  |   L  |   U  |   Y  |   ;  |  \   |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * | Ctrl |   A  |   R  |   S  |   T  |   D  |  Del  |                    |  Bsp  |   H  |   N  |   E  |   I  |   O  |  '   |
   * |------+------+------+------+------+------|       |                    |       |------+------+------+------+------+------|
   * |Shift |   Z  |   X  |   C  |   V  |   B  '----------------,  ,----------------'   K  |   M  |   ,  |   .  |   /  | Shift|
   * |-----------------------------------------/   *   /   /   /    \   +   \   -   \-----------------------------------------|
   * |  ADJ | Hypr |  Alt | Ctrl |    /  SYM  /-------/-------/      \-------\-------\  SYM  \    | Ctrl | Alt  | Meh  | ADJ  |
   * |      |      |      |      |   /   ,   /  Cmd  / Shift /        \ Shift \  Alt  \   .   \   |      |      |      |      |
   * `---------------------------'  '-------/ Space / Enter /          \ Enter \ Space \-------'  '---------------------------'
   *                                        '--------------'            '--------------'
   */
     KC_ESC  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                            KC_6   , KC_7   , KC_8    , KC_9    , KC_0    , KC_PEQL ,
     KC_TAB  , KC_Q   , KC_W   , KC_F   , KC_P   , KC_G   , KC_HOME ,                         KC_END , KC_J   , KC_L   , KC_U    , KC_Y    , KC_SCLN , KC_BSLS ,
     KC_LCTL , KC_A   , KC_R   , KC_S   , KC_T   , KC_D   , KC_DEL  ,                         KC_BSPC, KC_H   , KC_N   , KC_E    , KC_I    , KC_O    , KC_QUOT ,
     KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_ASTR , KC_SLSH   , KC_PPLS   , KC_MINS, KC_K   , KC_M   , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT ,
     ADJ     , KC_HYPR, KC_LALT, KC_LCTL,          SY_COM , CM_SPA  , SH_ENL    , SH_ENR    , AL_SPA , SY_DOT ,          KC_RCTL , KC_RALT , KC_MEH  , ADJ
  ),

  [_SYMBOL] = LAYOUT(
  /* SYMBOL
   * ,-----------------------------------------.                                    ,-----------------------------------------.
   * |  `~  |  F1  |  F2  |  F3  |  F4  |  F5  |                                    |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * |      |   !  |   @  |   {  |   }  |   |  |  PgUp |                    |  PgDn |   &  |   +  |  up  |      |      |  F12 |
   * |------+------+------+------+------+------|-------.                    ,-------|------+------+------+------+------+------|
   * |      |   #  |   $  |   (  |   )  |   `  |   Ins |                    |       |   =  | left | down | right|  ?   |      |
   * |------+------+------+------+------+------|       |                    |       |------+------+------+------+------+------|
   * |      |   %  |   ^  |   [  |   ]  |   ~  '----------------,  ,----------------'   *  |   -  |      |      |      |      |
   * |-----------------------------------------/       /       /    \       \       \-----------------------------------------|
   * |      |      |      |      |    /       /-------/-------/      \-------\-------\       \    |      |      |      |      |
   * |      |      |      |      |   /       /       /       /        \       \       \       \   |      |      |      |      |
   * `---------------------------'  '-------/       /       /          \       \       \-------'  '---------------------------'
   *                                        '--------------'            '--------------'
   */
     KC_GRV  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,                                         KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  ,
     _______ , KC_EXLM , KC_AT   , KC_LCBR , KC_RCBR , KC_PIPE , KC_PGUP ,                     KC_PGDN , KC_AMPR , KC_PPLS , KC_UP   , XXXXXXX , XXXXXXX , KC_F12  ,
     _______ , KC_HASH , KC_DLR  , KC_LPRN , KC_RPRN , KC_GRV  , KC_INS  ,                     _______ , KC_PEQL , KC_LEFT , KC_DOWN , KC_RGHT , KC_QUES , XXXXXXX ,
     XXXXXXX , KC_PERC , KC_CIRC , KC_LBRC , KC_RBRC , KC_TILD , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_ASTR , KC_MINS , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
     XXXXXXX , _______ , _______ , _______ ,           _______ , _______ , _______ , _______ , _______ , _______ ,           _______ , _______ , _______ , XXXXXXX
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
     EEP_RST , XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , EEP_RST ,
     XXXXXXX , RGB_MOD  , RGB_HUI , RGB_SAI , RGB_VAI , KC_VOLU , QWERT   ,                     COLEM   , KC_BRIU , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
     XXXXXXX , RGB_RMOD , RGB_HUD , RGB_SAD , RGB_VAD , KC_VOLD , RGB_TOG ,                     XXXXXXX , KC_BRID , KC_MRWD , KC_MPLY , KC_MFFD , XXXXXXX , XXXXXXX ,
     XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX , KC_MUTE , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
     _______ , XXXXXXX  , XXXXXXX , XXXXXXX ,           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,           XXXXXXX , XXXXXXX , XXXXXXX , _______
  )
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SY_COM:
            return TAPPING_TERM - 50;
        case SY_DOT:
            return TAPPING_TERM - 50;
        default:
            return TAPPING_TERM;
    }
}
