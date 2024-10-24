#ifndef _RV32I_INST_TYPE_I_H
#define _RV32I_INST_TYPE_I_H

#include "../field.h"

typedef struct {
    RV_OPCODE_D;
    RV_REG_RD;
    RV_FUNCT3_D;
    RV_REG_RS1;
    RV_IMM imm: 12;
} RV_I_TYPE;

#endif /* _RV32I_INST_TYPE_I_H */
