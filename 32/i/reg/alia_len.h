#ifndef _RV32I_REG_ALIA_LEN_H
#define _RV32I_REG_ALIA_LEN_H

#include <stddef.h>
#include "alia.h"

#define RV_REG_ALIA_LEN_CORE \
    (size_t)sizeof(RV_REG_ALIA_X0) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X1) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X2) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X3) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X4) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X5) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X6) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X7) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X8) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X9) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X10) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X11) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X12) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X13) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X14) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X15) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X16) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X17) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X18) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X19) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X20) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X21) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X22) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X23) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X24) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X25) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X26) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X27) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X28) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X29) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X30) / sizeof(RV_REG_ALIA), \
    (size_t)sizeof(RV_REG_ALIA_X31) / sizeof(RV_REG_ALIA)

#define RV_REG_ALIA_LEN_STD (size_t[]){RV_REG_ALIA_LEN_CORE}

#endif /* _RV_REG_ALIA_LEN_H */
