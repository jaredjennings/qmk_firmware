#pragma once

#include "dactyl_marshmallow.h"
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT(\
  L00, L01, L02, L03, L04, L05,                          R00, R01, R02, R03, R04, R05, \
  L10, L11, L12, L13, L14, L15,                          R10, R11, R12, R13, R14, R15, \
  L20, L21, L22, L23, L24, L25,                          R20, R21, R22, R23, R24, R25, \
  L30, L31, L32, L33, L34, L35,                          R30, R31, R32, R33, R34, R35, \
       L41, L42, L43,                                              R42, R43, R44, \
                      L44, L45, L46,                R46, R40, R41, \
                      L54, L55, L56,                R56, R50, R51  \
  ) \
  { \
    { KC_NO, L05,   L04,   L03,   L02,   L01, L00 },  \
    { KC_NO, L15,   L14,   L13,   L12,   L11, L10 },   \
    { KC_NO, L25,   L24,   L23,   L22,   L21, L20 },  \
    { KC_NO, L35,   L34,   L33,   L32,   L31, L30 },   \
    { L46,   L45,   L44,   L43,   L42,   L41, KC_NO },       \
    { L56,   L55,   L54, KC_NO, KC_NO, KC_NO, KC_NO },     \
                                          \
    { KC_NO, R00, R01, R02, R03,   R04,   R05  }, \
    { KC_NO, R10, R11, R12, R13,   R14,   R15  }, \
    { KC_NO, R20, R21, R22, R23,   R24,   R25  }, \
    { KC_NO, R30, R31, R32, R33,   R34,   R35  }, \
    { R46,   R40, R41, R42, R43,   R44,   KC_NO }, \
    { R56,   R50, R51, KC_NO, KC_NO, KC_NO }       \
}
 
     
