#include "thumb_shift.h"

// clang-format off

enum layer {
    _QWERTY,
#ifdef DVORAK_LAYOUT
    _DVORAK,
#endif
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
        KC_LCTL, KC_LGUI, KC_LALT, THUMB_L, KC_SPC, THUMB_R, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
#ifdef DVORAK_LAYOUT
    [_DVORAK] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_GRV, KC_BSPC,
        KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL, KC_BSLS,
        KC_CAPS, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_ENT,
        KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, KC_UP, KC_DEL,
        KC_LCTL, KC_LGUI, KC_LALT, THUMB_L, KC_SPC, THUMB_R, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
#endif
    [_FN] = LAYOUT(
        RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, _______,
        DVORAK_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        THUMB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NLCK, KC_PGUP, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
};

static bool thumb_shift_enabled = false;
#ifdef DVORAK_LAYOUT
static bool dvorak_enabled = false;
#endif

static inline bool process_thumb_shift_toggle(void) {
    thumb_shift_enabled = !thumb_shift_enabled;
    if (thumb_shift_enabled) {
        thumb_shift_init(false);
    }
    return false;
}

#ifdef DVORAK_LAYOUT
static inline bool process_dvorak_toggle(void) {
    dvorak_enabled = !dvorak_enabled;
    if (dvorak_enabled) {
        layer_on(_DVORAK);
    } else {
        layer_off(_DVORAK);
    }
    return false;
}
#else
static inline bool process_dvorak_toggle(void) {
    return true;
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case THUMB_L:
            case THUMB_R:
                layer_on(_FN);
                break;
            case THUMB_TOG:
            case DVORAK_TOG:
                return false;
        }
    } else {
        switch (keycode) {
            case THUMB_L:
            case THUMB_R:
                layer_off(_FN);
                break;
            case THUMB_TOG:
                return process_thumb_shift_toggle();
            case DVORAK_TOG:
                return process_dvorak_toggle();
        }
    }
    if (thumb_shift_enabled) {
        return process_thumb_shift(keycode, &(record->event));
    }
    return true;
}
