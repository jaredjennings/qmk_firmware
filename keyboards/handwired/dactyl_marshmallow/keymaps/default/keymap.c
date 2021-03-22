#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _COLEMAK_DHM 0
#define _COLEMAK_DH_ANSI 1
#define _QWERTY 2
#define _FN1 3
#define _FN2 4
#define _FN3 5
#define _NAV 6

// Fillers to make layering more clear

#define ____ KC_TRNS

#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_FN1 MO(_FN1)
#define KC_FN2 MO(_FN2)
#define KC_FN3 OSL(_FN3)
#define KC_NAV TT(_NAV)
#define KC_SPFN1 LT(_FN1, KC_SPACE)
#define KC_BSFN2 LT(_FN2, KC_BSPC)
#define KC_BSFN1 LT(_FN1, KC_BSPC)
#define KC_SPFN2 LT(_FN2, KC_SPACE)
#define KC_LCHO LCTL_T(KC_HOME)
#define KC_RCBS RCTL_T(KC_BSLS)
#define DF_CDHM DF(_COLEMAK_DHM)
#define DF_CDHA DF(_COLEMAK_DH_ANSI)
#define DF_QWER DF(_QWERTY)
#define KC_CT_L LCTL(KC_LEFT)
#define KC_CT_R LCTL(KC_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Keyboard shape
 * +-----------------------------------------+                             +-----------------------------------------+
 * |      |   1  |   2  |   3  |   4  |   5  |                             |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
 * |      |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |      |
 * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
 * |      |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |      |
 * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
 * |      |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   /  |      |
 * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
 *        |      |  [   |   ]  |                                                         |      |      |      |
 *        +------+------+------+-------------+------+               +------+-------------+-------------+------+
 *                             |      |      |      |               |      |      |      |
 *                             |------+------+------+               +------+------+------|
 *                             |      |      |      |               |      |      |      |
 *                             +-------------+------+               +------+-------------+
 */

[_COLEMAK_DHM] =
LAYOUT(
       KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,               KC_6,  KC_7,  KC_8,  KC_9, KC_0, KC_NO, \
       KC_ESC,  KC_Q,  KC_W,  KC_F,  KC_P,  KC_B,               KC_J,  KC_L,  KC_U,  KC_Y, MT(MOD_RGUI, KC_SCLN), KC_QUOT, \
       MT(MOD_LCTL, KC_TAB),  KC_A,  KC_R,  KC_S,  KC_T,  KC_G,               KC_M,  KC_N,  KC_E,  KC_I,   KC_O,  KC_ENT, \
       KC_HOME, KC_Z,  KC_X,  KC_C,  KC_D,  KC_V,               KC_K,  KC_H,  KC_COMM, KC_DOT, MT(MOD_RSFT, KC_SLSH), LT(_FN3, KC_BSLS), \
       KC_NO, KC_LPRN, KC_RPRN,              MT(MOD_LALT, KC_MINS), MT(MOD_LCTL, KC_EQL), KC_NO, \
\
       KC_BSFN1, OSM(MOD_LSFT), KC_LGUI,                            OSM(MOD_LALT), KC_NAV, KC_SPFN2, \
       OSM(MOD_LCTL), KC_NO, KC_NO,                                 KC_FN3, KC_NO, KC_NO \
       ),

[_COLEMAK_DH_ANSI] =
LAYOUT(
       KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,               KC_6,  KC_7,  KC_8,  KC_9, KC_0, KC_NO, \
       KC_ESC,  KC_Q,  KC_W,  KC_F,  KC_P,  KC_B,               KC_J,  KC_L,  KC_U,  KC_Y, MT(MOD_RGUI, KC_SCLN), KC_QUOT, \
       MT(MOD_LCTL, KC_TAB),  KC_A,  KC_R,  KC_S,  KC_T,  KC_G,               KC_K,  KC_N,  KC_E,  KC_I,   KC_O,  KC_ENT, \
       KC_HOME, KC_X,  KC_C,  KC_D,  KC_V,  KC_Z,               KC_M,  KC_H,  KC_COMM, KC_DOT, MT(MOD_RSFT, KC_SLSH), LT(_FN3, KC_BSLS), \
       KC_NO, KC_LPRN, KC_RPRN,              MT(MOD_LALT, KC_MINS), MT(MOD_LCTL, KC_EQL), KC_NO, \
\
       KC_BSFN1, OSM(MOD_LSFT), KC_LGUI,                            OSM(MOD_LALT), KC_NAV, KC_SPFN2, \
       OSM(MOD_LCTL), KC_NO, KC_NO,                                 KC_FN3, KC_NO, KC_NO \
       ),

[_QWERTY] =
LAYOUT(
       KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,               KC_6,  KC_7,  KC_8,  KC_9, KC_0, KC_NO, \
       KC_ESC,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,               KC_Y,  KC_U,  KC_I,  KC_O, KC_P, KC_QUOT, \
       MT(MOD_LCTL, KC_TAB),  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,               KC_H,  KC_J,  KC_K,  KC_L,   KC_SCLN,  KC_ENT, \
       KC_HOME, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,               KC_N,  KC_M,  KC_COMM, KC_DOT, MT(MOD_RSFT, KC_SLSH), LT(_FN3, KC_BSLS), \
       KC_NO, KC_LPRN, KC_RPRN,              MT(MOD_LALT, KC_MINS), MT(MOD_LCTL, KC_EQL), KC_NO, \
\
       KC_BSFN1, OSM(MOD_LSFT), KC_LGUI,                            OSM(MOD_LALT), KC_NAV, KC_SPFN2, \
       OSM(MOD_LCTL), KC_NO, KC_NO,                                 KC_FN3, KC_NO, KC_NO \
       ),

[_FN1] =
LAYOUT(
       ____, ____, ____, ____, ____, ____,                     ____, ____, ____, ____, ____, ____, \
       KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,       /**/        KC_6, KC_7, KC_8, KC_9, KC_0, _______, \
       ____, ____, ____, ____, ____, ____,         /**/        ____, KC_4, KC_5, KC_6, KC_QUOT, ____, \
       ____, ____, ____, ____, ____, ____,         /**/        ____, KC_1, KC_2, KC_3, ____, ____, \
       ____, KC_LBRC, KC_RBRC, /**/ KC_0, KC_DOT, ____, \
       ____, ____, ____, /**/ ____, ____, ____, \
       ____, ____, ____, /**/ ____, ____, ____ \
       ),

[_FN2] =
LAYOUT(
       ____, ____, ____, ____, ____, ____,                     ____, ____, ____, ____, ____, ____, \
       KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,       /**/        KC_CIRC, KC_AMPR, KC_ASTR, ____, ____, ____, \
       RESET, ____, KC_PSCR, KC_INS, KC_DEL, ____,         /**/        ____, ____, ____, ____, KC_DQUO, ____, \
       ____, ____, ____, ____, ____, ____,         /**/        ____, ____, ____, ____, ____, ____, \
       ____, KC_LCBR, KC_RCBR, /**/ ____, ____, ____, \
       ____, ____, ____, /**/ ____, ____, ____, \
       ____, ____, ____, /**/ ____, ____, ____ \
       ),

[_FN3] =
LAYOUT(
       ____, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,       /**/        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, \
       ____, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,       /**/        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, \
       ____, DF_CDHM, DF_QWER, DF_CDHA, ____, ____,         /**/        ____, ____, ____, ____, ____, KC_F12, \
       ____, ____, ____, ____, ____, ____,         /**/        ____, ____, ____, ____, ____, ____, \
       ____, ____, ____, /**/ ____, ____, ____, \
       ____, ____, ____, /**/ ____, ____, ____, \
       ____, ____, ____, /**/ ____, ____, ____ \
       ),

[_NAV] =
LAYOUT(
       ____, ____, ____, ____, ____, ____,                     ____, ____, ____, ____, ____, ____, \
       ____, ____, ____, KC_MS_U, ____, KC_ACL2,     /**/        ____, KC_HOME, KC_UP, KC_DOWN, KC_END, ____, \
       ____, ____, KC_MS_L, KC_MS_D, KC_MS_R, KC_ACL1, /**/      ____, KC_CT_L, KC_LEFT, KC_RIGHT, KC_CT_R, ____, \
       ____, ____, KC_WH_U, KC_WH_D, ____, KC_ACL0,    /**/      ____, ____, KC_PGUP, KC_PGDN, ____, ____, \
       ____, ____, ____, /**/ ____, ____, ____, \
       KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, /**/ ____, ____, ____, \
       ____, ____, ____, /**/ ____, ____, ____ \
       ),
};


const uint16_t PROGMEM colon_combo[] = { KC_4, KC_6, COMBO_END };
/* underscore */
const uint16_t PROGMEM und_combo[] = { KC_U, KC_E, COMBO_END };
const uint16_t PROGMEM num_und_combo[] = { KC_8, KC_5, COMBO_END };

combo_t key_combos[COMBO_COUNT] =
  {
   COMBO(colon_combo, S(KC_SCLN)),
   COMBO(und_combo, S(KC_MINS)),
   COMBO(num_und_combo, S(KC_MINS))
  };                                   
                                        

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

