#ifndef MASTER_CONFIG_H_
#define MASTER_CONFIG_H_

#include "custom_board.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 11

#define THIS_DEVICE_ROWS 4
#define THIS_DEVICE_COLS 11

#define MATRIX_ROW_PINS { PIN15, PIN11, PIN14, PIN12 }
#define MATRIX_COL_PINS { PIN5, PIN20, PIN6, PIN19, PIN7, PIN18, PIN8, PIN17, PIN9, PIN16, PIN10 }
#define IS_LEFT_HAND  true
#define ENABLE_STARTUP_ADV_NOLIST

#define LAYOUT( \
       K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A,      \
  K20, K21, K22, K23, K24, K25, K26, K27, K28,	              \
            J00, J01, J02,      J10, J11, J12                 \
) \
{ \
  { K01,   K02,   K03, K04, K05, K06,   K07, K08, K09, K0A,   K0B,   }, \
  { K10,   K11,   K12, K13, K14, K15,   K16, K17, K18, K19,   K1A,   }, \
  { K20,   K21,   K22, K23, K24, K25,   K26, K27, K28, KC_NO, KC_NO, }, \
  { KC_NO, KC_NO, J00, J01, J02, KC_NO, J10, J11, J12, KC_NO, KC_NO, }, \
}

#define LAYOUT_kc( \
       K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A,      \
  K20, K21, K22, K23, K24, K25, K26, K27, K28,	              \
            J00, J01, J02,      J10, J11, J12                 \
) \
LAYOUT( \
            KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06, KC_##K07, KC_##K08, KC_##K09, KC_##K0A, KC_##K0B, \
  KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17, KC_##K18, KC_##K19, KC_##K1A,           \
  KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27, KC_##K28,                               \
                      KC_##J00, KC_##J01, KC_##J02,           KC_##J10, KC_##J11, KC_##J12                                \
)

#endif /* MASTER_CONFIG_H_ */
