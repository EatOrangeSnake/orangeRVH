#ifndef _RV32I_REG_ALIA_H
#define _RV32I_REG_ALIA_H

typedef char* RV_REG_ALIA;
typedef RV_REG_ALIA RV_REG_ALIA_LIST[];
typedef RV_REG_ALIA_LIST* RV_REG_ALIA_TABLE[];

#define RV_REG_ALIA_X0 (RV_REG_ALIA_LIST){"x0", "zero"}
#define RV_REG_ALIA_X1 (RV_REG_ALIA_LIST){"x1", "ra"}
#define RV_REG_ALIA_X2 (RV_REG_ALIA_LIST){"x2", "sp"}
#define RV_REG_ALIA_X3 (RV_REG_ALIA_LIST){"x3", "gp"}
#define RV_REG_ALIA_X4 (RV_REG_ALIA_LIST){"x4", "tp"}
#define RV_REG_ALIA_X5 (RV_REG_ALIA_LIST){"x5", "t0"}
#define RV_REG_ALIA_X6 (RV_REG_ALIA_LIST){"x6", "t1"}
#define RV_REG_ALIA_X7 (RV_REG_ALIA_LIST){"x7", "t2"}
#define RV_REG_ALIA_X8 (RV_REG_ALIA_LIST){"x8", "fp", "s0"}
#define RV_REG_ALIA_X9 (RV_REG_ALIA_LIST){"x9", "s1"}
#define RV_REG_ALIA_X10 (RV_REG_ALIA_LIST){"x10", "a0"}
#define RV_REG_ALIA_X11 (RV_REG_ALIA_LIST){"x11", "a1"}
#define RV_REG_ALIA_X12 (RV_REG_ALIA_LIST){"x12", "a2"}
#define RV_REG_ALIA_X13 (RV_REG_ALIA_LIST){"x13", "a3"}
#define RV_REG_ALIA_X14 (RV_REG_ALIA_LIST){"x14", "a4"}
#define RV_REG_ALIA_X15 (RV_REG_ALIA_LIST){"x15", "a5"}
#define RV_REG_ALIA_X16 (RV_REG_ALIA_LIST){"x16", "a6"}
#define RV_REG_ALIA_X17 (RV_REG_ALIA_LIST){"x17", "a7"}
#define RV_REG_ALIA_X18 (RV_REG_ALIA_LIST){"x18", "s2"}
#define RV_REG_ALIA_X19 (RV_REG_ALIA_LIST){"x19", "s3"}
#define RV_REG_ALIA_X20 (RV_REG_ALIA_LIST){"x20", "s4"}
#define RV_REG_ALIA_X21 (RV_REG_ALIA_LIST){"x21", "s5"}
#define RV_REG_ALIA_X22 (RV_REG_ALIA_LIST){"x22", "s6"}
#define RV_REG_ALIA_X23 (RV_REG_ALIA_LIST){"x23", "s7"}
#define RV_REG_ALIA_X24 (RV_REG_ALIA_LIST){"x24", "s8"}
#define RV_REG_ALIA_X25 (RV_REG_ALIA_LIST){"x25", "s9"}
#define RV_REG_ALIA_X26 (RV_REG_ALIA_LIST){"x26", "s10"}
#define RV_REG_ALIA_X27 (RV_REG_ALIA_LIST){"x27", "s11"}
#define RV_REG_ALIA_X28 (RV_REG_ALIA_LIST){"x28", "t3"}
#define RV_REG_ALIA_X29 (RV_REG_ALIA_LIST){"x29", "t4"}
#define RV_REG_ALIA_X30 (RV_REG_ALIA_LIST){"x30", "t5"}
#define RV_REG_ALIA_X31 (RV_REG_ALIA_LIST){"x31", "t6"}

#define RV_REG_ALIA_TABLE_CORE \
    RV_REG_ALIA_X0, \
    RV_REG_ALIA_X1, \
    RV_REG_ALIA_X2, \
    RV_REG_ALIA_X3, \
    RV_REG_ALIA_X4, \
    RV_REG_ALIA_X5, \
    RV_REG_ALIA_X6, \
    RV_REG_ALIA_X7, \
    RV_REG_ALIA_X8, \
    RV_REG_ALIA_X9, \
    RV_REG_ALIA_X10, \
    RV_REG_ALIA_X11, \
    RV_REG_ALIA_X12, \
    RV_REG_ALIA_X13, \
    RV_REG_ALIA_X14, \
    RV_REG_ALIA_X15, \
    RV_REG_ALIA_X16, \
    RV_REG_ALIA_X17, \
    RV_REG_ALIA_X18, \
    RV_REG_ALIA_X19, \
    RV_REG_ALIA_X20, \
    RV_REG_ALIA_X21, \
    RV_REG_ALIA_X22, \
    RV_REG_ALIA_X23, \
    RV_REG_ALIA_X24, \
    RV_REG_ALIA_X25, \
    RV_REG_ALIA_X26, \
    RV_REG_ALIA_X27, \
    RV_REG_ALIA_X28, \
    RV_REG_ALIA_X29, \
    RV_REG_ALIA_X30, \
    RV_REG_ALIA_X31

#define RV_REG_ALIA_TABLE_STD (RV_REG_ALIA_TABLE){RV_REG_ALIA_TABLE_CORE}

#define RV_REG_ALIA_GET(table, num) (*(table)[num])

#endif /* _RV_REG_ALIA_H */
