#ifndef _RV32I_INST_TYPE_U_H
#define _RV32I_INST_TYPE_U_H

#include "../field.h"

typedef struct {
    RV_OPCODE_D;
    RV_REG_RD;
    RV_IMM imm_12: 20;
} RV_U_TYPE;

#endif /* _RV32I_INST_TYPE_U_H */
