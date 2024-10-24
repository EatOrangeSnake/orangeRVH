#ifndef _RV32I_INST_FIELD_H
#define _RV32I_INST_FIELD_H

typedef unsigned long RV_INST_RAW, RV_OPCODE, RV_REG, RV_IMM, RV_FUNCT3, RV_FUNCT7;

#define RV_OPCODE_BITS 7
#define RV_FUNCT3_BITS 3
#define RV_FUNCT7_BITS 7
#define RV_REG_BITS 5

#define RV_OPCODE_F(field) RV_OPCODE field: RV_OPCODE_BITS
#define RV_FUNCT3_F(field) RV_FUNCT3 field: RV_FUNCT3_BITS
#define RV_FUNCT7_F(field) RV_FUNCT7 field: RV_FUNCT7_BITS
#define RV_REG_F(field) RV_REG field: RV_REG_BITS

#define RV_OPCODE_D RV_OPCODE_F(opcode)
#define RV_FUNCT3_D RV_FUNCT3_F(funct3)
#define RV_FUNCT7_D RV_FUNCT7_F(funct7)
#define RV_REG_RD RV_REG_F(rd)
#define RV_REG_RS1 RV_REG_F(rs1)
#define RV_REG_RS2 RV_REG_F(rs2)

#endif /* _RV32I_INST_FIELD_H */
