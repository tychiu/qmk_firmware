#ifndef __NICOLA_H
#define __NICOLA_H

// #include QMK_KEYBOARD_H
#include "quantum.h"
#include "keyboards/ml67/ml67.h"
#include "keyboards/ml67/config.h"
#include "keyboards/ml67/keymaps/thumb_shift/config.h"

// clang-format off

#ifndef COMBO_TERM
#define COMBO_TERM 100
#endif

#ifndef OVERLAP_TERM
#define OVERLAP_TERM (2 * DEBOUNCE)
#endif

enum custom_keycode {
    NICOLA_TOG = SAFE_RANGE,
    THUMB_L,
    THUMB_R,
    NEW_SAFE_RANGE
};

enum press_state {
    NONE = 0,
    SHIFT_ONLY,
    TEXT_ONLY,
    BOTH,
};

enum shift_state {
    NO_SHIFT = 0,
    LEFT_SHIFT,
    RIGHT_SHIFT,
};

enum combo_code {
    NC_XXXX = 0, /* Disabled 無効 */
    NC_____, /* Transparent 通過 */
    /* Kanas 仮名 */
            /* Sei'on 清音 */               /* Daku'on/Handaku'on 濁音／半濁音 */                  /* Sutegana 捨て仮名 */
    NC_A,  NC_I,  NC_U,  NC_E,  NC_O,                     NC_VU,                     NC_L_A,  NC_L_I,  NC_L_U,  NC_L_E,  NC_L_O,
    NC_KA, NC_KI, NC_KU, NC_KE, NC_KO,      NC_GA, NC_GI, NC_GU, NC_GE, NC_GO,
    NC_SA, NC_SI, NC_SU, NC_SE, NC_SO,      NC_ZA, NC_ZI, NC_ZU, NC_ZE, NC_ZO,
    NC_TA, NC_TI, NC_TU, NC_TE, NC_TO,      NC_DA, NC_DI, NC_DU, NC_DE, NC_DO,                         NC_L_TU,
    NC_NA, NC_NI, NC_NU, NC_NE, NC_NO,
    NC_HA, NC_HI, NC_HU, NC_HE, NC_HO,      NC_BA, NC_BI, NC_BU, NC_BE, NC_BO,
                                            NC_PA, NC_PI, NC_PU, NC_PE, NC_PO,
    NC_MA, NC_MI, NC_MU, NC_ME, NC_MO,
    NC_YA,        NC_YU,        NC_YO,                                               NC_L_YA,          NC_L_YU,          NC_L_YO,
    NC_RA, NC_RI, NC_RU, NC_RE, NC_RO,
    NC_WA,                      NC_WO,
    NC_N,
    /* Symbols 記号 */
    NC_CHOUON, /* ー Hiragana-katakana prolonged sound mark 長音符 */
    NC_DAKU, /* ゛Dakuten 濁点 */
    NC_HDAKU, /* ゜Handakuten 半濁点 */
    NC_KUTEN, /* 。Full-stop (small circle) 句点 */
    NC_TOUTEN, /* 、 Ideographic comma 読点 */
    NC_CHUUTEN, /* ・ Middle dot 中点 */
    NC_QUES, /* ？ Question mark 疑問符 */
    NC_DOT, /* ．Full-stop (solid dot) 終止符・ピリオド */
    NC_COMMA, /* ，Comma コンマ */
    NC_SLASH, /* ／ Slash スラッシュ */
    NC_LKAGI, NC_RKAGI, /* 「　」Corner brackets 鉤括弧 */
    NC_LBRC, NC_RBRC, /* ［　］Square brackets 角括弧 */
    NC_LPRN, NC_RPRN, /* （　）Parentheses 丸括弧 */
    NICOLA_CODE_COUNT
};

extern void thumb_shift_init(void);
extern bool process_thumb_shift(uint16_t keycode, keypos_t pos, bool pressed);

#endif
