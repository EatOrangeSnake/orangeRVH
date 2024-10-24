#ifndef _RV32I_INST_TYPE_J_H
#define _RV32I_INST_TYPE_J_H

#include "../field.h"

typedef struct {
    RV_OPCODE_D;
    RV_REG_F(rd);
    RV_IMM imm20_12: 8;
    RV_IMM imm11: 1;
    RV_IMM imm11_1: 10;
    RV_IMM imm20: 1;
} RV_J_TYPE;

#endif /* _RV32I_INST_TYPE_J_H */
