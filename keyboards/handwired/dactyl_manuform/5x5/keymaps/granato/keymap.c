/* A special gaming layout for L. Granato and the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H

enum layer_names {
  _QWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWER] = LAYOUT_5x5(

  /* QWER
   * .----------------------------------.                                                  .----------------------------------.
   * |  Esc |   1  |   2  |   3  |   4  |                                                  |      |      |      |      |      |
   * |------+------+------+------+------|                                                  |------+------+------+------+------|
   * |  Tab |   Q  |   W  |   E  |   R  |                                                  |      |      |      |      |      |
   * |------+------+------+------+------|                                                  |------+------+------+------+------|
   * | Caps |   A  |   S  |   D  |   F  |                                                  |      |      |      |      |      |
   * |------+------+------+------+------|                                                  |------+------+------+------+------|
   * | Shft |   Z  |   X  |   C  |   V  |                                                  |      |      |      |      |      |
   * '----------------------------------/-------.                                  .-------\----------------------------------'
   *        | Ctrl |  Alt |    / Space / Space /---------------.    .---------------\       \       \    |      |      |
   *        |      |      |   /       /       / Space / Space /      \       \       \       \       \   |      |      |
   *        '-------------'  '-------'-------/       /       /        \       \       \-------'-------'  '-------------'
   *                                        /---------------/          \---------------\
   *                                       / Space / Space /            \       \       \
   *                                      /       /       /              \       \       \
   *                                     '---------------'                '---------------'
   */


     KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   ,                                                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   ,                                                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   ,                                                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   ,                                                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
              KC_LCTL, KC_RBRC,                                                                         XXXXXXX, XXXXXXX,
                                         KC_SPC , KC_SPC ,                                     XXXXXXX, XXXXXXX,
                                                           KC_SPC , KC_SPC , XXXXXXX, XXXXXXX,
                                                           KC_SPC , KC_SPC , XXXXXXX, XXXXXXX
  ),
};
