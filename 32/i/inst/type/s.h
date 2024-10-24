#ifndef _RV32I_INST_TYPE_S_H
#define _RV32I_INST_TYPE_S_H

#include "../field.h"

typedef struct {
    RV_OPCODE_D;
    RV_IMM imm5_: 5;
    RV_FUNCT3_D;
    RV_REG_RS1;
    RV_REG_RS2;
    RV_IMM imm_5: 7;
} RV_S_TYPE;

#endif /* _RV32I_INST_TYPE_S_H */
