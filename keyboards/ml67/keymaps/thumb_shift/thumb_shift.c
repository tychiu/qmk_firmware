/* Copyright 2020 Ken TY Chiu
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

#include "thumb_shift.h"

// clang-format off

const uint8_t PROGMEM thumb_shift_keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [NO_SHIFT] = LAYOUT(
        NC_____, NC_____,  NC_____,   NC_____, NC_____,  NC_____,  NC_____, NC_____, NC_____, NC_____, NC_____,    NC_____,   NC_____,  NC_____, NC_____,
        NC_____, NC_KUTEN, NC_KA,     NC_TA,   NC_KO,    NC_SA,    NC_RA,   NC_TI,   NC_KU,   NC_TU,   NC_COMMA,   NC_TOUTEN, NC_DAKU,  NC_____,
        NC_____, NC_U,     NC_SI,     NC_TE,   NC_KE,    NC_SE,    NC_HA,   NC_TO,   NC_KI,   NC_I,    NC_N,       NC_____,   NC_____,
        NC_____, NC_DOT,   NC_HI,     NC_SU,   NC_HU,    NC_HE,    NC_ME,   NC_SO,   NC_NE,   NC_HO,   NC_CHUUTEN, NC_____,   NC_____,  NC_____,
        NC_____, NC_____,  NC_____,   NC_XXXX,                     NC_____,          NC_XXXX, NC_____,             NC_____,   NC_____,  NC_____, NC_____
    ),
    [LEFT_SHIFT] = LAYOUT(
        NC_____, NC_QUES,  NC_SLASH,  NC_____, NC_LKAGI, NC_RKAGI, NC_____, NC_____, NC_____, NC_____, NC_____,    NC_____,   NC_____,  NC_____, NC_____,
        NC_____, NC_L_A,   NC_E,      NC_RI,   NC_L_YA,  NC_RE,    NC_PA,   NC_DI,   NC_GU,   NC_DU,   NC_PI,    NC_XXXX,   NC_____,  NC_____,
        NC_____, NC_WO,    NC_A,      NC_NA,   NC_L_YU,  NC_MO,    NC_BA,   NC_DO,   NC_GI,   NC_PO,   NC_XXXX,    NC_____,   NC_____,
        NC_____, NC_L_U,   NC_CHOUON, NC_RO,   NC_YA,    NC_L_I,   NC_PU,   NC_ZO,   NC_PE,   NC_BO,   NC_XXXX,    NC_____,   NC_____,  NC_____,
        NC_____, NC_____,  NC_____,   NC_XXXX,                     NC_____,          NC_XXXX, NC_____,             NC_____,   NC_____,  NC_____, NC_____
    ),
    [RIGHT_SHIFT] = LAYOUT(
        NC_____, NC_____,  NC_____,   NC_____, NC_____,  NC_____,  NC_LBRC, NC_RBRC, NC_____, NC_LPRN, NC_RPRN,    NC_____,   NC_____,  NC_____, NC_____,
        NC_____, NC_XXXX,  NC_GA,     NC_DA,   NC_GO,    NC_ZA,    NC_YO,   NC_NI,   NC_RU,   NC_MA,   NC_L_E,     NC_XXXX,   NC_HDAKU, NC_____,
        NC_____, NC_VU,    NC_ZI,     NC_DE,   NC_GE,    NC_ZE,    NC_MI,   NC_O,    NC_NO,   NC_L_YO, NC_L_TU,    NC_XXXX,   NC_____,
        NC_____, NC_XXXX,  NC_BI,     NC_ZU,   NC_BU,    NC_BE,    NC_NU,   NC_YU,   NC_MU,   NC_WA,   NC_L_O,     NC_____,   NC_____,  NC_____,
        NC_____, NC_____,  NC_____,   NC_XXXX,                     NC_____,          NC_XXXX, NC_____,             NC_____,   NC_____,  NC_____, NC_____
    ),
};

#define OUTPUT_LEN 3

const uint16_t PROGMEM thumb_shift_outputs[NICOLA_CODE_COUNT][OUTPUT_LEN] = {
    [NC_XXXX] = {XXXXXXX, XXXXXXX, XXXXXXX},
    [NC_A] = {KC_A, XXXXXXX, XXXXXXX},
    [NC_I] = {KC_I, XXXXXXX, XXXXXXX},
    [NC_U] = {KC_U, XXXXXXX, XXXXXXX},
    [NC_E] = {KC_E, XXXXXXX, XXXXXXX},
    [NC_O] = {KC_O, XXXXXXX, XXXXXXX},
    [NC_L_A] = {KC_X, KC_A, XXXXXXX},
    [NC_L_I] = {KC_X, KC_I, XXXXXXX},
    [NC_L_U] = {KC_X, KC_U, XXXXXXX},
    [NC_L_E] = {KC_X, KC_E, XXXXXXX},
    [NC_L_O] = {KC_X, KC_O, XXXXXXX},
    [NC_VU] = {KC_V, KC_U, XXXXXXX},
    [NC_KA] = {KC_K, KC_A, XXXXXXX},
    [NC_KI] = {KC_K, KC_I, XXXXXXX},
    [NC_KU] = {KC_K, KC_U, XXXXXXX},
    [NC_KE] = {KC_K, KC_E, XXXXXXX},
    [NC_KO] = {KC_K, KC_O, XXXXXXX},
    [NC_GA] = {KC_G, KC_A, XXXXXXX},
    [NC_GI] = {KC_G, KC_I, XXXXXXX},
    [NC_GU] = {KC_G, KC_U, XXXXXXX},
    [NC_GE] = {KC_G, KC_E, XXXXXXX},
    [NC_GO] = {KC_G, KC_O, XXXXXXX},
    [NC_SA] = {KC_S, KC_A, XXXXXXX},
    [NC_SI] = {KC_S, KC_I, XXXXXXX},
    [NC_SU] = {KC_S, KC_U, XXXXXXX},
    [NC_SE] = {KC_S, KC_E, XXXXXXX},
    [NC_SO] = {KC_S, KC_O, XXXXXXX},
    [NC_ZA] = {KC_Z, KC_A, XXXXXXX},
    [NC_ZI] = {KC_Z, KC_I, XXXXXXX},
    [NC_ZU] = {KC_Z, KC_U, XXXXXXX},
    [NC_ZE] = {KC_Z, KC_E, XXXXXXX},
    [NC_ZO] = {KC_Z, KC_O, XXXXXXX},
    [NC_TA] = {KC_T, KC_A, XXXXXXX},
    [NC_TI] = {KC_T, KC_I, XXXXXXX},
    [NC_TU] = {KC_T, KC_U, XXXXXXX},
    [NC_TE] = {KC_T, KC_E, XXXXXXX},
    [NC_TO] = {KC_T, KC_O, XXXXXXX},
    [NC_DA] = {KC_D, KC_A, XXXXXXX},
    [NC_DI] = {KC_D, KC_I, XXXXXXX},
    [NC_DU] = {KC_D, KC_U, XXXXXXX},
    [NC_DE] = {KC_D, KC_E, XXXXXXX},
    [NC_DO] = {KC_D, KC_O, XXXXXXX},
    [NC_L_TU] = {KC_X, KC_T, KC_U},
    [NC_NA] = {KC_N, KC_A, XXXXXXX},
    [NC_NI] = {KC_N, KC_I, XXXXXXX},
    [NC_NU] = {KC_N, KC_U, XXXXXXX},
    [NC_NE] = {KC_N, KC_E, XXXXXXX},
    [NC_NO] = {KC_N, KC_O, XXXXXXX},
    [NC_HA] = {KC_H, KC_A, XXXXXXX},
    [NC_HI] = {KC_H, KC_I, XXXXXXX},
    [NC_HU] = {KC_H, KC_U, XXXXXXX},
    [NC_HE] = {KC_H, KC_E, XXXXXXX},
    [NC_HO] = {KC_H, KC_O, XXXXXXX},
    [NC_BA] = {KC_B, KC_A, XXXXXXX},
    [NC_BI] = {KC_B, KC_I, XXXXXXX},
    [NC_BU] = {KC_B, KC_U, XXXXXXX},
    [NC_BE] = {KC_B, KC_E, XXXXXXX},
    [NC_BO] = {KC_B, KC_O, XXXXXXX},
    [NC_PA] = {KC_P, KC_A, XXXXXXX},
    [NC_PI] = {KC_P, KC_I, XXXXXXX},
    [NC_PU] = {KC_P, KC_U, XXXXXXX},
    [NC_PE] = {KC_P, KC_E, XXXXXXX},
    [NC_PO] = {KC_P, KC_O, XXXXXXX},
    [NC_MA] = {KC_M, KC_A, XXXXXXX},
    [NC_MI] = {KC_M, KC_I, XXXXXXX},
    [NC_MU] = {KC_M, KC_U, XXXXXXX},
    [NC_ME] = {KC_M, KC_E, XXXXXXX},
    [NC_MO] = {KC_M, KC_O, XXXXXXX},
    [NC_YA] = {KC_Y, KC_A, XXXXXXX},
    [NC_YU] = {KC_Y, KC_U, XXXXXXX},
    [NC_YO] = {KC_Y, KC_O, XXXXXXX},
    [NC_L_YA] = {KC_X, KC_Y, KC_A},
    [NC_L_YU] = {KC_X, KC_Y, KC_U},
    [NC_L_YO] = {KC_X, KC_Y, KC_O},
    [NC_RA] = {KC_R, KC_A, XXXXXXX},
    [NC_RI] = {KC_R, KC_I, XXXXXXX},
    [NC_RU] = {KC_R, KC_U, XXXXXXX},
    [NC_RE] = {KC_R, KC_E, XXXXXXX},
    [NC_RO] = {KC_R, KC_O, XXXXXXX},
    [NC_WA] = {KC_W, KC_A, XXXXXXX},
    [NC_WO] = {KC_W, KC_O, XXXXXXX},
    [NC_N] = {KC_N, KC_N, XXXXXXX},
    [NC_CHOUON] = {KC_MINUS, XXXXXXX, XXXXXXX},
    [NC_DAKU] = {XXXXXXX, XXXXXXX, XXXXXXX},
    [NC_HDAKU] = {XXXXXXX, XXXXXXX, XXXXXXX},
    [NC_KUTEN] = {KC_DOT, XXXXXXX, XXXXXXX},
    [NC_TOUTEN] = {KC_COMMA, XXXXXXX, XXXXXXX},
    [NC_CHUUTEN] = {KC_SLASH, XXXXXXX, XXXXXXX},
    [NC_QUES] = {LSFT(KC_SLASH), XXXXXXX, XXXXXXX},
    [NC_DOT] = {XXXXXXX, XXXXXXX, XXXXXXX},
    [NC_COMMA] = {XXXXXXX, XXXXXXX, XXXXXXX},
    [NC_SLASH] = {XXXXXXX, XXXXXXX, XXXXXXX},
    [NC_LKAGI] = {KC_LBRC, XXXXXXX, XXXXXXX},
    [NC_RKAGI] = {KC_RBRC, XXXXXXX, XXXXXXX},
    [NC_LBRC] = {XXXXXXX, XXXXXXX, XXXXXXX},
    [NC_RBRC] = {XXXXXXX, XXXXXXX, XXXXXXX},
    [NC_LPRN] = {LSFT(KC_9), XXXXXXX, XXXXXXX},
    [NC_RPRN] = {LSFT(KC_0), XXXXXXX, XXXXXXX},
};

static enum press_state press_state = NONE;
static enum shift_state shift_state = NO_SHIFT;
#ifdef THUMB_HOLD
static bool is_hold = false;
#endif
static uint16_t shift_timer = 0;
static uint16_t text_timer = 0;
static keypos_t buffer;

static inline enum combo_code combo_keymap(enum shift_state shift, keypos_t pos) {
    return pgm_read_byte(&thumb_shift_keymaps[shift][pos.row][pos.col]);
}

static inline uint16_t combo_output(enum combo_code code, uint8_t index) {
    return pgm_read_word(&thumb_shift_outputs[code][index]);
}

static inline void combo_send(enum combo_code code) {
    uint8_t i;
    uint16_t keycode;
    for (i = 0; i < OUTPUT_LEN; i++) {
        keycode = combo_output(code, i);
        if (keycode == KC_NO) {
            break;
        }
        tap_code16(keycode);
    }
}

static inline void shift_send(enum shift_state shift) {
    #ifdef THUMB_HOLD
        if (is_hold) {
            return;
        }
    #endif
    switch (shift) {
        case NO_SHIFT:
            break;
        case LEFT_SHIFT:
            tap_code(KC_ENTER); /* OS-independant muhenkan OS全般適用無変換 */
            break;
        case RIGHT_SHIFT:
            tap_code(KC_SPACE); /* OS-independant henkan OS全般適用変換 */
            break;
    }
}

/* Initialization */
/* ja: 初期化 */
void thumb_shift_init(void) {
    switch (press_state) {
        case NONE:
            break;
        case SHIFT_ONLY:
            shift_send(shift_state);
            break;
        case TEXT_ONLY:
        case BOTH:
            combo_send(combo_keymap(shift_state, buffer));
    }
    press_state = NONE;
    shift_state = NO_SHIFT;
    #ifdef THUMB_HOLD
        is_hold = false;
    #endif
}

static inline void process_thumb_shift_timeout(uint16_t now) {
    switch (press_state) {
        case NONE:
            break;
        case TEXT_ONLY:
            if (now - text_timer > COMBO_TERM) {
                combo_send(combo_keymap(shift_state, buffer));
                press_state = NONE;
                shift_state = NO_SHIFT;
            }
            break;
        case SHIFT_ONLY:
            #ifndef THUMB_HOLD
                if (now - shift_timer > COMBO_TERM) {
                    thumb_shift_init();
                }
            #endif
            break;
        case BOTH:
            #ifdef THUMB_HOLD
                if (now - text_timer > COMBO_TERM) {
                    combo_send(combo_keymap(shift_state, buffer));
                    press_state = SHIFT_ONLY;
                    is_hold = true;
                }
            #else
                if (now - shift_timer > COMBO_TERM || now - text_timer > COMBO_TERM) {
                    combo_send(combo_keymap(shift_state, buffer));
                    press_state = NONE;
                    shift_state = NO_SHIFT;
                }
            #endif
    }
}

static inline bool process_none_pressed(uint16_t keycode, keypos_t pos, uint16_t now) {
    enum combo_code code;
    if (keycode == THUMB_L) {
        press_state = SHIFT_ONLY;
        shift_state = LEFT_SHIFT;
        shift_timer = now;
    } else if (keycode == THUMB_R) {
        press_state = SHIFT_ONLY;
        shift_state = RIGHT_SHIFT;
        shift_timer = now;
    } else {
        code = combo_keymap(NO_SHIFT, pos);
        if (code == NC_____) {
            return true;
        }
        press_state = TEXT_ONLY;
        buffer = pos;
        text_timer = now;
    }
    return false;
}

static inline bool process_none_released(uint16_t keycode, keypos_t pos) {
    enum combo_code code = combo_keymap(NO_SHIFT, pos);
    return code == NC_____;
}

static inline bool process_text_only_pressed(uint16_t keycode, keypos_t pos, uint16_t now) {
    enum combo_code code;
    if (keycode == THUMB_L) {
        press_state = BOTH;
        shift_state = LEFT_SHIFT;
        shift_timer = now;
        #ifdef THUMB_HOLD
            is_hold = true;
        #endif
    } else if (keycode == THUMB_R) {
        press_state = BOTH;
        shift_state = RIGHT_SHIFT;
        shift_timer = now;
        #ifdef THUMB_HOLD
            is_hold = true;
        #endif
    } else {
        combo_send(combo_keymap(NO_SHIFT, buffer));
        code = combo_keymap(NO_SHIFT, pos);
        if (code == NC_____) {
            return true;
        }
        buffer = pos;
        text_timer = now;
    }
    return false;
}

static inline bool process_text_only_released(keypos_t pos) {
    enum combo_code code;
    if (buffer.row == pos.row && buffer.col == pos.col) {
        combo_send(combo_keymap(NO_SHIFT, buffer));
        press_state = NONE;
        // shift_state = NO_SHIFT;
    } else {
        code = combo_keymap(NO_SHIFT, pos);
        return code == NC_____;
    }
    return false;
}

static inline bool process_shift_only_pressed(uint16_t keycode, keypos_t pos, uint16_t now) {
    enum combo_code code;
    if (keycode == THUMB_L) {
        shift_send(shift_state);
        shift_state = LEFT_SHIFT;
        shift_timer = now;
        #ifdef THUMB_HOLD
            is_hold = false;
        #endif
    } else if (keycode == THUMB_R) {
        shift_send(shift_state);
        shift_state = RIGHT_SHIFT;
        shift_timer = now;
        #ifdef THUMB_HOLD
            is_hold = false;
        #endif
    } else {
        code = combo_keymap(shift_state, pos);
        if (code == NC_____) {
            return true;
        }
        press_state = BOTH;
        buffer = pos;
        text_timer = now;
        #ifdef THUMB_HOLD
            is_hold = true;
        #endif
    }
    return false;
}

static inline bool process_shift_only_released(uint16_t keycode, keypos_t pos) {
    enum combo_code code;
    if (shift_state == LEFT_SHIFT && keycode == THUMB_L) {
        shift_send(LEFT_SHIFT);
        press_state = NONE;
        shift_state = NO_SHIFT;
        #ifdef THUMB_HOLD
            is_hold = false;
        #endif
    } else if (shift_state == RIGHT_SHIFT && keycode == THUMB_R) {
        shift_send(RIGHT_SHIFT);
        press_state = NONE;
        shift_state = NO_SHIFT;
        #ifdef THUMB_HOLD
            is_hold = false;
        #endif
    } else {
        code = combo_keymap(shift_state, pos);
        return code == NC_____;
    }
    return false;
}

/* Sandwich evaluation: text1 -> shift -> text2 */
/* ja: 挟み打ち判定：文字１ → シフト → 文字２ */
static inline void sandwich_text(keypos_t pos, uint16_t now) {
    uint16_t time_after_shift = now - shift_timer;
    uint16_t time_before_shift = shift_timer - text_timer;
    if (time_before_shift < time_after_shift) {
        combo_send(combo_keymap(shift_state, buffer));
        #ifdef THUMB_HOLD
            press_state = BOTH;
        #else
            press_state = TEXT_ONLY;
            shift_state = NO_SHIFT;
        #endif
    } else {
        combo_send(combo_keymap(NO_SHIFT, buffer));
        press_state = BOTH;
    }
    buffer = pos;
    text_timer = now;
    #ifdef THUMB_HOLD
        is_hold = true;
    #endif
}

/* Sandwich evaluation: shift1 -> text -> shift2 */
/* ja: 挟み打ち判定：シフト１ → 文字 → シフト２ */
static inline void sandwich_shift(enum shift_state next_state, uint16_t now) {
    uint16_t time_after_text = now - text_timer;
    uint16_t time_before_text = text_timer - shift_timer;
    if (time_before_text < time_after_text) {
        combo_send(combo_keymap(shift_state, buffer));
        press_state = SHIFT_ONLY;
        // buffer.row = 0;
        // buffer.col = 0;
        #ifdef THUMB_HOLD
            is_hold = false;
        #endif
    } else {
        shift_send(shift_state);
        press_state = BOTH;
        #ifdef THUMB_HOLD
            is_hold = true;
        #endif
    }
    shift_state = next_state;
    shift_timer = now;
}

static inline bool process_both_pressed(uint16_t keycode, keypos_t pos, uint16_t now) {
    enum combo_code code;
    if (shift_timer < text_timer) {
        /* shift -> text */ /* シフト → 文字 */
        if (keycode == THUMB_L) {
            sandwich_shift(LEFT_SHIFT, now);
        } else if (keycode == THUMB_R) {
            sandwich_shift(RIGHT_SHIFT, now);
        } else {
            code = combo_keymap(shift_state, pos);
            if (code == NC_____) {
                return true;
            }
            combo_send(combo_keymap(shift_state, buffer));
            press_state = TEXT_ONLY;
            shift_state = NO_SHIFT;
            buffer = pos;
            text_timer = now;
            #ifdef THUMB_HOLD
                is_hold = false;
            #endif
        }
    } else {
        /* text -> shift */ /* 文字 → シフト */
        if (keycode == THUMB_L) {
            combo_send(combo_keymap(shift_state, buffer));
            press_state = SHIFT_ONLY;
            shift_state = LEFT_SHIFT;
            shift_timer = now;
            #ifdef THUMB_HOLD
                is_hold = false;
            #endif
        } else if (keycode == THUMB_R) {
            combo_send(combo_keymap(shift_state, buffer));
            press_state = SHIFT_ONLY;
            shift_state = RIGHT_SHIFT;
            shift_timer = now;
            #ifdef THUMB_HOLD
                is_hold = false;
            #endif
        } else {
            code = combo_keymap(shift_state, buffer);
            if (code == NC_____) {
                return true;
            }
            sandwich_text(pos, now);
        }
    }
    return false;
}

/* Overlap evaluation: shift down -> text down -> shift up */
/* ja: 重なり判定：シフト押す → 文字押す → シフト離す */
static inline void overlap_shift(uint16_t now) {
    uint16_t time_before_release = now - text_timer;
    uint16_t time_before_text = text_timer - shift_timer;
    if (time_before_text >= time_before_release && time_before_release < OVERLAP_TERM) {
        shift_send(shift_state);
        press_state = TEXT_ONLY;
    } else {
        combo_send(combo_keymap(shift_state, buffer));
        press_state = NONE;
    }
    shift_state = NO_SHIFT;
    #ifdef THUMB_HOLD
        is_hold = false;
    #endif
}

/* Overlap evaluation: text down -> shift down -> text up */
/* ja: 重なり判定：文字押す → シフト押す → 文字離す */
static inline void overlap_text(uint16_t now) {
    uint16_t time_before_release = now - shift_timer;
    uint16_t time_before_shift = shift_timer - text_timer;
    if (time_before_shift >= time_before_release && time_before_release < OVERLAP_TERM) {
        combo_send(combo_keymap(NO_SHIFT, buffer));
        press_state = SHIFT_ONLY;
        #ifdef THUMB_HOLD
            is_hold = false;
        #endif
    } else {
        combo_send(combo_keymap(shift_state, buffer));
        #ifdef THUMB_HOLD
            press_state = SHIFT_ONLY;
            is_hold = true;
        #else
            press_state = NONE;
            shift_state = NO_SHIFT;
        #endif
    }
}

static inline bool process_both_released(uint16_t keycode, keypos_t pos, uint16_t now) {
    if (shift_state == LEFT_SHIFT && keycode == THUMB_L) {
        overlap_shift(now);
    } else if (shift_state == RIGHT_SHIFT && keycode == THUMB_R) {
        overlap_shift(now);
    } else if (buffer.row == pos.row && buffer.col == pos.col) {
        overlap_text(now);
    }
    return false;
}

bool process_thumb_shift(uint16_t keycode, keyevent_t *event) {
    process_thumb_shift_timeout(event->time);
    if (IS_MOD(keycode)) {
        return true;
    }
    switch (press_state) {
        case NONE:
            if (event->pressed) {
                return process_none_pressed(keycode, event->key, event->time);
            } else {
                return process_none_released(keycode, event->key);
            }
        case TEXT_ONLY:
            if (event->pressed) {
                return process_text_only_pressed(keycode, event->key, event->time);
            } else {
                return process_text_only_released(event->key);
            }
        case SHIFT_ONLY:
            if (event->pressed) {
                return process_shift_only_pressed(keycode, event->key, event->time);
            } else {
                return process_shift_only_released(keycode, event->key);
            }
        case BOTH:
            if (event->pressed) {
                return process_both_pressed(keycode, event->key, event->time);
            } else {
                return process_both_released(keycode, event->key, event->time);
            }
    }
    return false;
}
