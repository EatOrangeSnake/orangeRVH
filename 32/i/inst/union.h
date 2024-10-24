#include "field.h"
#include "type.h"

#define RV32I_INST_TYPES \
    RV_R_TYPE r_type; \
    RV_I_TYPE i_type; \
    RV_S_TYPE s_type; \
    RV_B_TYPE b_type; \
    RV_U_TYPE u_type; \
    RV_J_TYPE j_type;

typedef union {
    RV_INST_RAW raw;
    RV_OPCODE_D;
    RV32I_INST_TYPES
} RV32I_INST;
