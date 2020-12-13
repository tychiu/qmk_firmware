#include "thumb_shift.h"

// clang-format off

enum layer {
    _QWERTY,
    _FN,
    _NICOLA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        NICOLA_TOG, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
        KC_LCTL, KC_LGUI, KC_LALT, THUMB_L, KC_SPC, THUMB_R, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_FN] = LAYOUT(
        RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NLCK, KC_PGUP, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
};

static bool nicola_enabled = false;

static inline bool process_nicola_toggle(bool pressed) {
    if (!pressed) {
        nicola_enabled = !nicola_enabled;
        thumb_shift_init();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case THUMB_L:
            case THUMB_R:
                layer_on(_FN);
                break;
            case NICOLA_TOG:
                return process_nicola_toggle(record->event.pressed);
        }
    } else {
        switch (keycode) {
            case THUMB_L:
            case THUMB_R:
                layer_off(_FN);
                break;
            case NICOLA_TOG:
                return process_nicola_toggle(record->event.pressed);
        }
    }
    if (nicola_enabled) {
        return process_thumb_shift(keycode, record->event.key, record->event.pressed);
    }
    return true;
}