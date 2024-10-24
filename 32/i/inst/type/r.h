#ifndef _RV32I_INST_TYPE_R_H
#define _RV32I_INST_TYPE_R_H

#include "../field.h"

typedef struct {
    RV_OPCODE_D;
    RV_REG_RD;
    RV_FUNCT3_D;
    RV_REG_RS1;
    RV_REG_RS2;
    RV_FUNCT7_D;
} RV_R_TYPE;

#endif /* _RV32I_INST_TYPE_R_H */
