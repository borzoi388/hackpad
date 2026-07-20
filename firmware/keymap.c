
#include QMK_KEYBOARD_H

enum layers {
  GAMING,
  KRITA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [GAMING] = LAYOUT(
      KC_F1, KC_F2, KC_F3,
      KC_Q,  KC_W, KC_E,
      KC_A,   KC_S, KC_D
  ),
  [KRITA] = LAYOUT(
      KC_E, KC_F, KC_L,
      XXXXXXX, XXXXXXX, XXXXXXX,
      KC_K, KC_COPY, KC_PASTE
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [GAMING] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
  [KRITA] = { ENCODER_CCW_CW(_______, _______) }
};
#endif

