#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  MAC_MISSION_CONTROL,
  MAC_SPOTLIGHT,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LBRC,                                        KC_RBRC,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LCBR,                                        KC_RCBR,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    MO(3),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_LPRN,                                                                        KC_RPRN,        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    MO(1),          KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       MO(5),                                                                                                          KC_TRANSPARENT, KC_UP,          KC_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MT(MOD_LSFT, KC_SPACE),MT(MOD_LCTL, KC_BSPC),MT(MOD_LGUI, KC_ENTER),                KC_LEFT_ALT,    LT(4,KC_TAB),   MT(MOD_RSFT, KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_5,                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_UP,                                KC_F15,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,                                KC_F14,         MAC_MISSION_CONTROL,KC_F16,         KC_F17,         KC_TRANSPARENT, KC_F19,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,                                                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_F18,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 MAC_SPOTLIGHT,  LGUI(LCTL(LSFT(KC_4))),LGUI(LSFT(KC_4)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_GRAVE), KC_TRANSPARENT, KC_TRANSPARENT, LCTL(RALT(RSFT(KC_R))),KC_UP,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_TAB),   LGUI(KC_S),     LGUI(KC_P),     KC_LEFT,        KC_DOWN,        KC_RIGHT,                                                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_7,     ST_MACRO_8,     LGUI(KC_W),     ST_MACRO_9,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_SPACE,       KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_T)))),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_S)))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_V)))),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
const uint16_t PROGMEM combo0[] = { KC_L, KC_K, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_E, KC_S, KC_F, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_F, KC_RIGHT, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_UP, KC_J, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_U, KC_I, KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_U, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_S, KC_B, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_0, KC_MINUS, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(2)),
    COMBO(combo1, KC_ESCAPE),
    COMBO(combo2, KC_HOME),
    COMBO(combo3, KC_END),
    COMBO(combo4, KC_RIGHT_GUI),
    COMBO(combo5, KC_HYPR),
    COMBO(combo6, KC_MEH),
    COMBO(combo7, KC_DLR),
    COMBO(combo8, KC_AT),
    COMBO(combo9, KC_BSLS),
    COMBO(combo10, KC_EQUAL),
    COMBO(combo11, KC_BSPC),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {132,167,126}, {198,203,217}, {132,167,126}, {198,203,217}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {0,0,255}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {0,0,255}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {31,121,255}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {31,121,255}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {198,203,217}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {0,0,255}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {0,0,255}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {0,0,255}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {31,121,255}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {31,121,255}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {132,167,126}, {198,203,217}, {132,167,126}, {0,0,255} },

    [1] = { {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {198,161,163}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {198,204,107}, {33,255,255}, {33,255,255}, {33,255,255}, {0,0,0}, {198,255,72}, {223,162,255}, {223,162,255}, {223,162,255}, {0,0,0}, {0,0,0}, {223,162,255}, {223,162,255}, {223,162,255}, {0,0,0}, {0,0,0}, {33,255,255}, {33,255,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {0,0,0}, {180,115,177}, {180,115,177}, {180,115,177}, {180,115,177}, {0,0,0}, {180,115,177}, {180,115,177}, {180,115,177}, {180,115,177}, {0,0,0}, {180,115,177}, {180,115,177}, {180,115,177}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,232,223}, {160,232,223}, {0,0,0}, {0,0,0}, {0,0,0}, {160,232,223}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,232,223}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,232,223}, {160,232,223}, {160,232,223}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {198,216,255}, {198,100,240}, {198,255,72}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {237,111,235}, {0,0,0}, {47,76,255}, {0,0,0}, {0,0,0}, {237,111,235}, {237,111,235}, {47,76,255}, {0,0,0}, {0,0,0}, {237,111,235}, {0,0,0}, {237,111,235}, {31,252,255}, {31,121,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,255,182}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {139,255,182}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {139,255,182}, {230,218,204}, {0,0,0}, {0,0,0}, {139,255,182}, {31,121,255}, {230,218,204}, {0,0,0}, {0,0,0}, {31,121,255}, {31,121,255}, {0,0,0}, {0,0,0}, {0,0,0}, {31,121,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,255,255}, {0,0,0}, {0,0,0}, {139,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(100) SS_TAP(X_LBRC) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(100) SS_LSFT(SS_TAP(X_LBRC)) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(100) SS_LSFT(SS_TAP(X_9)) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(100) SS_TAP(X_Z) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_K)) SS_DELAY(100) SS_LGUI(SS_TAP(X_LEFT)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_K)) SS_DELAY(100) SS_LGUI(SS_TAP(X_RIGHT)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_K)) SS_DELAY(100) SS_TAP(X_W));
    }
    break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_SPOTLIGHT:
      HCS(0x221);

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}



