#ifndef _RV32I_INST_TYPE_B_H
#define _RV32I_INST_TYPE_B_H

#include "../field.h"

typedef struct {
    RV_OPCODE_D;
    RV_IMM imm11: 1;
    RV_IMM imm5_1: 5;
    RV_FUNCT3_D;
    RV_REG_RS1;
    RV_REG_RS2;
    RV_IMM imm11_5: 6;
    RV_IMM imm4_: 5;
} RV_B_TYPE;

#endif /* _RV32I_INST_TYPE_B_H */
