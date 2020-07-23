/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Lanai {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_LABEL	= 14,
    REG_SEQUENCE	= 15,
    COPY	= 16,
    BUNDLE	= 17,
    LIFETIME_START	= 18,
    LIFETIME_END	= 19,
    STACKMAP	= 20,
    FENTRY_CALL	= 21,
    PATCHPOINT	= 22,
    LOAD_STACK_GUARD	= 23,
    PREALLOCATED_SETUP	= 24,
    PREALLOCATED_ARG	= 25,
    STATEPOINT	= 26,
    LOCAL_ESCAPE	= 27,
    FAULTING_OP	= 28,
    PATCHABLE_OP	= 29,
    PATCHABLE_FUNCTION_ENTER	= 30,
    PATCHABLE_RET	= 31,
    PATCHABLE_FUNCTION_EXIT	= 32,
    PATCHABLE_TAIL_CALL	= 33,
    PATCHABLE_EVENT_CALL	= 34,
    PATCHABLE_TYPED_EVENT_CALL	= 35,
    ICALL_BRANCH_FUNNEL	= 36,
    G_ADD	= 37,
    G_SUB	= 38,
    G_MUL	= 39,
    G_SDIV	= 40,
    G_UDIV	= 41,
    G_SREM	= 42,
    G_UREM	= 43,
    G_AND	= 44,
    G_OR	= 45,
    G_XOR	= 46,
    G_IMPLICIT_DEF	= 47,
    G_PHI	= 48,
    G_FRAME_INDEX	= 49,
    G_GLOBAL_VALUE	= 50,
    G_EXTRACT	= 51,
    G_UNMERGE_VALUES	= 52,
    G_INSERT	= 53,
    G_MERGE_VALUES	= 54,
    G_BUILD_VECTOR	= 55,
    G_BUILD_VECTOR_TRUNC	= 56,
    G_CONCAT_VECTORS	= 57,
    G_PTRTOINT	= 58,
    G_INTTOPTR	= 59,
    G_BITCAST	= 60,
    G_FREEZE	= 61,
    G_INTRINSIC_TRUNC	= 62,
    G_INTRINSIC_ROUND	= 63,
    G_READCYCLECOUNTER	= 64,
    G_LOAD	= 65,
    G_SEXTLOAD	= 66,
    G_ZEXTLOAD	= 67,
    G_INDEXED_LOAD	= 68,
    G_INDEXED_SEXTLOAD	= 69,
    G_INDEXED_ZEXTLOAD	= 70,
    G_STORE	= 71,
    G_INDEXED_STORE	= 72,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 73,
    G_ATOMIC_CMPXCHG	= 74,
    G_ATOMICRMW_XCHG	= 75,
    G_ATOMICRMW_ADD	= 76,
    G_ATOMICRMW_SUB	= 77,
    G_ATOMICRMW_AND	= 78,
    G_ATOMICRMW_NAND	= 79,
    G_ATOMICRMW_OR	= 80,
    G_ATOMICRMW_XOR	= 81,
    G_ATOMICRMW_MAX	= 82,
    G_ATOMICRMW_MIN	= 83,
    G_ATOMICRMW_UMAX	= 84,
    G_ATOMICRMW_UMIN	= 85,
    G_ATOMICRMW_FADD	= 86,
    G_ATOMICRMW_FSUB	= 87,
    G_FENCE	= 88,
    G_BRCOND	= 89,
    G_BRINDIRECT	= 90,
    G_INTRINSIC	= 91,
    G_INTRINSIC_W_SIDE_EFFECTS	= 92,
    G_ANYEXT	= 93,
    G_TRUNC	= 94,
    G_CONSTANT	= 95,
    G_FCONSTANT	= 96,
    G_VASTART	= 97,
    G_VAARG	= 98,
    G_SEXT	= 99,
    G_SEXT_INREG	= 100,
    G_ZEXT	= 101,
    G_SHL	= 102,
    G_LSHR	= 103,
    G_ASHR	= 104,
    G_FSHL	= 105,
    G_FSHR	= 106,
    G_ICMP	= 107,
    G_FCMP	= 108,
    G_SELECT	= 109,
    G_UADDO	= 110,
    G_UADDE	= 111,
    G_USUBO	= 112,
    G_USUBE	= 113,
    G_SADDO	= 114,
    G_SADDE	= 115,
    G_SSUBO	= 116,
    G_SSUBE	= 117,
    G_UMULO	= 118,
    G_SMULO	= 119,
    G_UMULH	= 120,
    G_SMULH	= 121,
    G_UADDSAT	= 122,
    G_SADDSAT	= 123,
    G_USUBSAT	= 124,
    G_SSUBSAT	= 125,
    G_FADD	= 126,
    G_FSUB	= 127,
    G_FMUL	= 128,
    G_FMA	= 129,
    G_FMAD	= 130,
    G_FDIV	= 131,
    G_FREM	= 132,
    G_FPOW	= 133,
    G_FEXP	= 134,
    G_FEXP2	= 135,
    G_FLOG	= 136,
    G_FLOG2	= 137,
    G_FLOG10	= 138,
    G_FNEG	= 139,
    G_FPEXT	= 140,
    G_FPTRUNC	= 141,
    G_FPTOSI	= 142,
    G_FPTOUI	= 143,
    G_SITOFP	= 144,
    G_UITOFP	= 145,
    G_FABS	= 146,
    G_FCOPYSIGN	= 147,
    G_FCANONICALIZE	= 148,
    G_FMINNUM	= 149,
    G_FMAXNUM	= 150,
    G_FMINNUM_IEEE	= 151,
    G_FMAXNUM_IEEE	= 152,
    G_FMINIMUM	= 153,
    G_FMAXIMUM	= 154,
    G_PTR_ADD	= 155,
    G_PTRMASK	= 156,
    G_SMIN	= 157,
    G_SMAX	= 158,
    G_UMIN	= 159,
    G_UMAX	= 160,
    G_BR	= 161,
    G_BRJT	= 162,
    G_INSERT_VECTOR_ELT	= 163,
    G_EXTRACT_VECTOR_ELT	= 164,
    G_SHUFFLE_VECTOR	= 165,
    G_CTTZ	= 166,
    G_CTTZ_ZERO_UNDEF	= 167,
    G_CTLZ	= 168,
    G_CTLZ_ZERO_UNDEF	= 169,
    G_CTPOP	= 170,
    G_BSWAP	= 171,
    G_BITREVERSE	= 172,
    G_FCEIL	= 173,
    G_FCOS	= 174,
    G_FSIN	= 175,
    G_FSQRT	= 176,
    G_FFLOOR	= 177,
    G_FRINT	= 178,
    G_FNEARBYINT	= 179,
    G_ADDRSPACE_CAST	= 180,
    G_BLOCK_ADDR	= 181,
    G_JUMP_TABLE	= 182,
    G_DYN_STACKALLOC	= 183,
    G_STRICT_FADD	= 184,
    G_STRICT_FSUB	= 185,
    G_STRICT_FMUL	= 186,
    G_STRICT_FDIV	= 187,
    G_STRICT_FREM	= 188,
    G_STRICT_FMA	= 189,
    G_STRICT_FSQRT	= 190,
    G_READ_REGISTER	= 191,
    G_WRITE_REGISTER	= 192,
    ADJCALLSTACKDOWN	= 193,
    ADJCALLSTACKUP	= 194,
    ADJDYNALLOC	= 195,
    CALL	= 196,
    CALLR	= 197,
    ADDC_F_I_HI	= 198,
    ADDC_F_I_LO	= 199,
    ADDC_F_R	= 200,
    ADDC_I_HI	= 201,
    ADDC_I_LO	= 202,
    ADDC_R	= 203,
    ADD_F_I_HI	= 204,
    ADD_F_I_LO	= 205,
    ADD_F_R	= 206,
    ADD_I_HI	= 207,
    ADD_I_LO	= 208,
    ADD_R	= 209,
    AND_F_I_HI	= 210,
    AND_F_I_LO	= 211,
    AND_F_R	= 212,
    AND_I_HI	= 213,
    AND_I_LO	= 214,
    AND_R	= 215,
    BRCC	= 216,
    BRIND_CC	= 217,
    BRIND_CCA	= 218,
    BRR	= 219,
    BT	= 220,
    JR	= 221,
    LDADDR	= 222,
    LDBs_RI	= 223,
    LDBs_RR	= 224,
    LDBz_RI	= 225,
    LDBz_RR	= 226,
    LDHs_RI	= 227,
    LDHs_RR	= 228,
    LDHz_RI	= 229,
    LDHz_RR	= 230,
    LDW_RI	= 231,
    LDW_RR	= 232,
    LDWz_RR	= 233,
    LEADZ	= 234,
    LOG0	= 235,
    LOG1	= 236,
    LOG2	= 237,
    LOG3	= 238,
    LOG4	= 239,
    MOVHI	= 240,
    NOP	= 241,
    OR_F_I_HI	= 242,
    OR_F_I_LO	= 243,
    OR_F_R	= 244,
    OR_I_HI	= 245,
    OR_I_LO	= 246,
    OR_R	= 247,
    POPC	= 248,
    RET	= 249,
    SA_F_I	= 250,
    SA_I	= 251,
    SCC	= 252,
    SELECT	= 253,
    SFSUB_F_RI_HI	= 254,
    SFSUB_F_RI_LO	= 255,
    SFSUB_F_RR	= 256,
    SHL_F_R	= 257,
    SHL_R	= 258,
    SLI	= 259,
    SL_F_I	= 260,
    SL_I	= 261,
    SRA_F_R	= 262,
    SRA_R	= 263,
    SRL_F_R	= 264,
    SRL_R	= 265,
    STADDR	= 266,
    STB_RI	= 267,
    STB_RR	= 268,
    STH_RI	= 269,
    STH_RR	= 270,
    SUBB_F_I_HI	= 271,
    SUBB_F_I_LO	= 272,
    SUBB_F_R	= 273,
    SUBB_I_HI	= 274,
    SUBB_I_LO	= 275,
    SUBB_R	= 276,
    SUB_F_I_HI	= 277,
    SUB_F_I_LO	= 278,
    SUB_F_R	= 279,
    SUB_I_HI	= 280,
    SUB_I_LO	= 281,
    SUB_R	= 282,
    SW_RI	= 283,
    SW_RR	= 284,
    TRAILZ	= 285,
    XOR_F_I_HI	= 286,
    XOR_F_I_LO	= 287,
    XOR_F_R	= 288,
    XOR_I_HI	= 289,
    XOR_I_LO	= 290,
    XOR_R	= 291,
    INSTRUCTION_LIST_END = 292
  };

} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace Lanai {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_ALU_WriteALU	= 1,
    IIC_ALU	= 2,
    IIC_LD_WriteLD	= 3,
    IIC_LDSW_WriteLDSW	= 4,
    WriteLD	= 5,
    IIC_ST_WriteST	= 6,
    IIC_STSW_WriteSTSW	= 7,
    SCHED_LIST_END = 8
  };
} // end namespace Sched
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { Lanai::SP, 0 };
static const MCPhysReg ImplicitList2[] = { Lanai::RCA, 0 };
static const MCPhysReg ImplicitList3[] = { Lanai::SR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_IMM_0, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Lanai::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc LanaiInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo5 },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo6 },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo4 },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #13 = DBG_VALUE
  { 14,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #14 = DBG_LABEL
  { 15,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #15 = REG_SEQUENCE
  { 16,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo7 },  // Inst #16 = COPY
  { 17,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #17 = BUNDLE
  { 18,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #18 = LIFETIME_START
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #19 = LIFETIME_END
  { 20,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo8 },  // Inst #20 = STACKMAP
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #21 = FENTRY_CALL
  { 22,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo9 },  // Inst #22 = PATCHPOINT
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo10 },  // Inst #23 = LOAD_STACK_GUARD
  { 24,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo3 },  // Inst #24 = PREALLOCATED_SETUP
  { 25,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo11 },  // Inst #25 = PREALLOCATED_ARG
  { 26,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #26 = STATEPOINT
  { 27,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo12 },  // Inst #27 = LOCAL_ESCAPE
  { 28,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #28 = FAULTING_OP
  { 29,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #29 = PATCHABLE_OP
  { 30,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #30 = PATCHABLE_FUNCTION_ENTER
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #31 = PATCHABLE_RET
  { 32,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #32 = PATCHABLE_FUNCTION_EXIT
  { 33,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #33 = PATCHABLE_TAIL_CALL
  { 34,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo13 },  // Inst #34 = PATCHABLE_EVENT_CALL
  { 35,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo14 },  // Inst #35 = PATCHABLE_TYPED_EVENT_CALL
  { 36,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #36 = ICALL_BRANCH_FUNNEL
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #37 = G_ADD
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #38 = G_SUB
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #39 = G_MUL
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #40 = G_SDIV
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #41 = G_UDIV
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #42 = G_SREM
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #43 = G_UREM
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #44 = G_AND
  { 45,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #45 = G_OR
  { 46,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #46 = G_XOR
  { 47,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #47 = G_IMPLICIT_DEF
  { 48,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #48 = G_PHI
  { 49,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #49 = G_FRAME_INDEX
  { 50,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #50 = G_GLOBAL_VALUE
  { 51,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo18 },  // Inst #51 = G_EXTRACT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #52 = G_UNMERGE_VALUES
  { 53,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo20 },  // Inst #53 = G_INSERT
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #54 = G_MERGE_VALUES
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #55 = G_BUILD_VECTOR
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #56 = G_BUILD_VECTOR_TRUNC
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #57 = G_CONCAT_VECTORS
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #58 = G_PTRTOINT
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #59 = G_INTTOPTR
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #60 = G_BITCAST
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #61 = G_FREEZE
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #62 = G_INTRINSIC_TRUNC
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #63 = G_INTRINSIC_ROUND
  { 64,	1,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #64 = G_READCYCLECOUNTER
  { 65,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #65 = G_LOAD
  { 66,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #66 = G_SEXTLOAD
  { 67,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #67 = G_ZEXTLOAD
  { 68,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #68 = G_INDEXED_LOAD
  { 69,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #69 = G_INDEXED_SEXTLOAD
  { 70,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo22 },  // Inst #70 = G_INDEXED_ZEXTLOAD
  { 71,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #71 = G_STORE
  { 72,	5,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo23 },  // Inst #72 = G_INDEXED_STORE
  { 73,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo24 },  // Inst #73 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 74,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #74 = G_ATOMIC_CMPXCHG
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #75 = G_ATOMICRMW_XCHG
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #76 = G_ATOMICRMW_ADD
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #77 = G_ATOMICRMW_SUB
  { 78,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #78 = G_ATOMICRMW_AND
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #79 = G_ATOMICRMW_NAND
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #80 = G_ATOMICRMW_OR
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #81 = G_ATOMICRMW_XOR
  { 82,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #82 = G_ATOMICRMW_MAX
  { 83,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #83 = G_ATOMICRMW_MIN
  { 84,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #84 = G_ATOMICRMW_UMAX
  { 85,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #85 = G_ATOMICRMW_UMIN
  { 86,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #86 = G_ATOMICRMW_FADD
  { 87,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo26 },  // Inst #87 = G_ATOMICRMW_FSUB
  { 88,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo8 },  // Inst #88 = G_FENCE
  { 89,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #89 = G_BRCOND
  { 90,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #90 = G_BRINDIRECT
  { 91,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #91 = G_INTRINSIC
  { 92,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #92 = G_INTRINSIC_W_SIDE_EFFECTS
  { 93,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #93 = G_ANYEXT
  { 94,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #94 = G_TRUNC
  { 95,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #95 = G_CONSTANT
  { 96,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #96 = G_FCONSTANT
  { 97,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo16 },  // Inst #97 = G_VASTART
  { 98,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo27 },  // Inst #98 = G_VAARG
  { 99,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #99 = G_SEXT
  { 100,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo28 },  // Inst #100 = G_SEXT_INREG
  { 101,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #101 = G_ZEXT
  { 102,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #102 = G_SHL
  { 103,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #103 = G_LSHR
  { 104,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #104 = G_ASHR
  { 105,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #105 = G_FSHL
  { 106,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo30 },  // Inst #106 = G_FSHR
  { 107,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #107 = G_ICMP
  { 108,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo31 },  // Inst #108 = G_FCMP
  { 109,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #109 = G_SELECT
  { 110,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #110 = G_UADDO
  { 111,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #111 = G_UADDE
  { 112,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #112 = G_USUBO
  { 113,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #113 = G_USUBE
  { 114,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #114 = G_SADDO
  { 115,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #115 = G_SADDE
  { 116,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #116 = G_SSUBO
  { 117,	5,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo32 },  // Inst #117 = G_SSUBE
  { 118,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #118 = G_UMULO
  { 119,	4,	2,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo25 },  // Inst #119 = G_SMULO
  { 120,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #120 = G_UMULH
  { 121,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #121 = G_SMULH
  { 122,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #122 = G_UADDSAT
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #123 = G_SADDSAT
  { 124,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #124 = G_USUBSAT
  { 125,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #125 = G_SSUBSAT
  { 126,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #126 = G_FADD
  { 127,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #127 = G_FSUB
  { 128,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #128 = G_FMUL
  { 129,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #129 = G_FMA
  { 130,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #130 = G_FMAD
  { 131,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #131 = G_FDIV
  { 132,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #132 = G_FREM
  { 133,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #133 = G_FPOW
  { 134,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #134 = G_FEXP
  { 135,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #135 = G_FEXP2
  { 136,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #136 = G_FLOG
  { 137,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #137 = G_FLOG2
  { 138,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #138 = G_FLOG10
  { 139,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #139 = G_FNEG
  { 140,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #140 = G_FPEXT
  { 141,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #141 = G_FPTRUNC
  { 142,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #142 = G_FPTOSI
  { 143,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #143 = G_FPTOUI
  { 144,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #144 = G_SITOFP
  { 145,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #145 = G_UITOFP
  { 146,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #146 = G_FABS
  { 147,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #147 = G_FCOPYSIGN
  { 148,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #148 = G_FCANONICALIZE
  { 149,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #149 = G_FMINNUM
  { 150,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #150 = G_FMAXNUM
  { 151,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #151 = G_FMINNUM_IEEE
  { 152,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #152 = G_FMAXNUM_IEEE
  { 153,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #153 = G_FMINIMUM
  { 154,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #154 = G_FMAXIMUM
  { 155,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #155 = G_PTR_ADD
  { 156,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo29 },  // Inst #156 = G_PTRMASK
  { 157,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #157 = G_SMIN
  { 158,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #158 = G_SMAX
  { 159,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #159 = G_UMIN
  { 160,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #160 = G_UMAX
  { 161,	1,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #161 = G_BR
  { 162,	3,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo34 },  // Inst #162 = G_BRJT
  { 163,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo35 },  // Inst #163 = G_INSERT_VECTOR_ELT
  { 164,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo36 },  // Inst #164 = G_EXTRACT_VECTOR_ELT
  { 165,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo37 },  // Inst #165 = G_SHUFFLE_VECTOR
  { 166,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #166 = G_CTTZ
  { 167,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #167 = G_CTTZ_ZERO_UNDEF
  { 168,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #168 = G_CTLZ
  { 169,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #169 = G_CTLZ_ZERO_UNDEF
  { 170,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #170 = G_CTPOP
  { 171,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #171 = G_BSWAP
  { 172,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #172 = G_BITREVERSE
  { 173,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #173 = G_FCEIL
  { 174,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #174 = G_FCOS
  { 175,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #175 = G_FSIN
  { 176,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #176 = G_FSQRT
  { 177,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #177 = G_FFLOOR
  { 178,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #178 = G_FRINT
  { 179,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #179 = G_FNEARBYINT
  { 180,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo19 },  // Inst #180 = G_ADDRSPACE_CAST
  { 181,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #181 = G_BLOCK_ADDR
  { 182,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #182 = G_JUMP_TABLE
  { 183,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo38 },  // Inst #183 = G_DYN_STACKALLOC
  { 184,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #184 = G_STRICT_FADD
  { 185,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #185 = G_STRICT_FSUB
  { 186,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #186 = G_STRICT_FMUL
  { 187,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #187 = G_STRICT_FDIV
  { 188,	3,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo15 },  // Inst #188 = G_STRICT_FREM
  { 189,	4,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo33 },  // Inst #189 = G_STRICT_FMA
  { 190,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayRaiseFPException)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo21 },  // Inst #190 = G_STRICT_FSQRT
  { 191,	2,	1,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo17 },  // Inst #191 = G_READ_REGISTER
  { 192,	2,	0,	0,	0,	0|(1ULL<<MCID::PreISelOpcode)|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq)|(1ULL<<MCID::Convergent), 0x0ULL, nullptr, nullptr, OperandInfo39 },  // Inst #192 = G_WRITE_REGISTER
  { 193,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #193 = ADJCALLSTACKDOWN
  { 194,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #194 = ADJCALLSTACKUP
  { 195,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo40 },  // Inst #195 = ADJDYNALLOC
  { 196,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo2 },  // Inst #196 = CALL
  { 197,	1,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo41 },  // Inst #197 = CALLR
  { 198,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo42 },  // Inst #198 = ADDC_F_I_HI
  { 199,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo42 },  // Inst #199 = ADDC_F_I_LO
  { 200,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo43 },  // Inst #200 = ADDC_F_R
  { 201,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo42 },  // Inst #201 = ADDC_I_HI
  { 202,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo42 },  // Inst #202 = ADDC_I_LO
  { 203,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo43 },  // Inst #203 = ADDC_R
  { 204,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #204 = ADD_F_I_HI
  { 205,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #205 = ADD_F_I_LO
  { 206,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #206 = ADD_F_R
  { 207,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #207 = ADD_I_HI
  { 208,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #208 = ADD_I_LO
  { 209,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #209 = ADD_R
  { 210,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #210 = AND_F_I_HI
  { 211,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #211 = AND_F_I_LO
  { 212,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #212 = AND_F_R
  { 213,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #213 = AND_I_HI
  { 214,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #214 = AND_I_LO
  { 215,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #215 = AND_R
  { 216,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo7 },  // Inst #216 = BRCC
  { 217,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo44 },  // Inst #217 = BRIND_CC
  { 218,	3,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo42 },  // Inst #218 = BRIND_CCA
  { 219,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo45 },  // Inst #219 = BRR
  { 220,	1,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo2 },  // Inst #220 = BT
  { 221,	1,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo41 },  // Inst #221 = JR
  { 222,	2,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #222 = LDADDR
  { 223,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #223 = LDBs_RI
  { 224,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #224 = LDBs_RR
  { 225,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #225 = LDBz_RI
  { 226,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #226 = LDBz_RR
  { 227,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #227 = LDHs_RI
  { 228,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #228 = LDHs_RR
  { 229,	4,	1,	4,	4,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #229 = LDHz_RI
  { 230,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #230 = LDHz_RR
  { 231,	4,	1,	4,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #231 = LDW_RI
  { 232,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #232 = LDW_RR
  { 233,	4,	1,	4,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #233 = LDWz_RR
  { 234,	2,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo40 },  // Inst #234 = LEADZ
  { 235,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #235 = LOG0
  { 236,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #236 = LOG1
  { 237,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #237 = LOG2
  { 238,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #238 = LOG3
  { 239,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #239 = LOG4
  { 240,	2,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #240 = MOVHI
  { 241,	0,	0,	4,	0,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr },  // Inst #241 = NOP
  { 242,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #242 = OR_F_I_HI
  { 243,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #243 = OR_F_I_LO
  { 244,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #244 = OR_F_R
  { 245,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #245 = OR_I_HI
  { 246,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #246 = OR_I_LO
  { 247,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #247 = OR_R
  { 248,	2,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo40 },  // Inst #248 = POPC
  { 249,	0,	0,	4,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList2, nullptr, nullptr },  // Inst #249 = RET
  { 250,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #250 = SA_F_I
  { 251,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #251 = SA_I
  { 252,	2,	1,	4,	2,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo44 },  // Inst #252 = SCC
  { 253,	4,	1,	4,	1,	0|(1ULL<<MCID::Select)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo48 },  // Inst #253 = SELECT
  { 254,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo44 },  // Inst #254 = SFSUB_F_RI_HI
  { 255,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo44 },  // Inst #255 = SFSUB_F_RI_LO
  { 256,	2,	0,	4,	1,	0|(1ULL<<MCID::Compare)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo40 },  // Inst #256 = SFSUB_F_RR
  { 257,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #257 = SHL_F_R
  { 258,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #258 = SHL_R
  { 259,	2,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #259 = SLI
  { 260,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #260 = SL_F_I
  { 261,	3,	1,	4,	1,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #261 = SL_I
  { 262,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #262 = SRA_F_R
  { 263,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #263 = SRA_R
  { 264,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #264 = SRL_F_R
  { 265,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #265 = SRL_R
  { 266,	2,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo44 },  // Inst #266 = STADDR
  { 267,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #267 = STB_RI
  { 268,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #268 = STB_RR
  { 269,	4,	0,	4,	7,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #269 = STH_RI
  { 270,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #270 = STH_RR
  { 271,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo42 },  // Inst #271 = SUBB_F_I_HI
  { 272,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo42 },  // Inst #272 = SUBB_F_I_LO
  { 273,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo43 },  // Inst #273 = SUBB_F_R
  { 274,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo42 },  // Inst #274 = SUBB_I_HI
  { 275,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo42 },  // Inst #275 = SUBB_I_LO
  { 276,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, nullptr, OperandInfo43 },  // Inst #276 = SUBB_R
  { 277,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #277 = SUB_F_I_HI
  { 278,	3,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #278 = SUB_F_I_LO
  { 279,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #279 = SUB_F_R
  { 280,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #280 = SUB_I_HI
  { 281,	3,	1,	4,	1,	0|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #281 = SUB_I_LO
  { 282,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #282 = SUB_R
  { 283,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo46 },  // Inst #283 = SW_RI
  { 284,	4,	0,	4,	6,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo47 },  // Inst #284 = SW_RR
  { 285,	2,	1,	4,	1,	0|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo40 },  // Inst #285 = TRAILZ
  { 286,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #286 = XOR_F_I_HI
  { 287,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo42 },  // Inst #287 = XOR_F_I_LO
  { 288,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, ImplicitList3, OperandInfo43 },  // Inst #288 = XOR_F_R
  { 289,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #289 = XOR_I_HI
  { 290,	3,	1,	4,	1,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo42 },  // Inst #290 = XOR_I_LO
  { 291,	4,	1,	4,	1,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::CheapAsAMove)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo43 },  // Inst #291 = XOR_R
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char LanaiInstrNameData[] = {
  /* 0 */ "G_FLOG10\0"
  /* 9 */ "LOG0\0"
  /* 14 */ "LOG1\0"
  /* 19 */ "G_FLOG2\0"
  /* 27 */ "G_FEXP2\0"
  /* 35 */ "LOG3\0"
  /* 40 */ "LOG4\0"
  /* 45 */ "BRIND_CCA\0"
  /* 55 */ "G_FMA\0"
  /* 61 */ "G_STRICT_FMA\0"
  /* 74 */ "G_FSUB\0"
  /* 81 */ "G_STRICT_FSUB\0"
  /* 95 */ "G_ATOMICRMW_FSUB\0"
  /* 112 */ "G_SUB\0"
  /* 118 */ "G_ATOMICRMW_SUB\0"
  /* 134 */ "BRCC\0"
  /* 139 */ "SCC\0"
  /* 143 */ "BRIND_CC\0"
  /* 152 */ "G_INTRINSIC\0"
  /* 164 */ "G_FPTRUNC\0"
  /* 174 */ "G_INTRINSIC_TRUNC\0"
  /* 192 */ "G_TRUNC\0"
  /* 200 */ "G_BUILD_VECTOR_TRUNC\0"
  /* 221 */ "G_DYN_STACKALLOC\0"
  /* 238 */ "ADJDYNALLOC\0"
  /* 250 */ "POPC\0"
  /* 255 */ "G_FMAD\0"
  /* 262 */ "G_INDEXED_SEXTLOAD\0"
  /* 281 */ "G_SEXTLOAD\0"
  /* 292 */ "G_INDEXED_ZEXTLOAD\0"
  /* 311 */ "G_ZEXTLOAD\0"
  /* 322 */ "G_INDEXED_LOAD\0"
  /* 337 */ "G_LOAD\0"
  /* 344 */ "G_FADD\0"
  /* 351 */ "G_STRICT_FADD\0"
  /* 365 */ "G_ATOMICRMW_FADD\0"
  /* 382 */ "G_ADD\0"
  /* 388 */ "G_PTR_ADD\0"
  /* 398 */ "G_ATOMICRMW_ADD\0"
  /* 414 */ "G_ATOMICRMW_NAND\0"
  /* 431 */ "G_AND\0"
  /* 437 */ "G_ATOMICRMW_AND\0"
  /* 453 */ "LIFETIME_END\0"
  /* 466 */ "G_BRCOND\0"
  /* 475 */ "G_INTRINSIC_ROUND\0"
  /* 493 */ "LOAD_STACK_GUARD\0"
  /* 510 */ "G_SSUBE\0"
  /* 518 */ "G_USUBE\0"
  /* 526 */ "G_FENCE\0"
  /* 534 */ "REG_SEQUENCE\0"
  /* 547 */ "G_SADDE\0"
  /* 555 */ "G_UADDE\0"
  /* 563 */ "G_FMINNUM_IEEE\0"
  /* 578 */ "G_FMAXNUM_IEEE\0"
  /* 593 */ "G_JUMP_TABLE\0"
  /* 606 */ "BUNDLE\0"
  /* 613 */ "LOCAL_ESCAPE\0"
  /* 626 */ "G_INDEXED_STORE\0"
  /* 642 */ "G_STORE\0"
  /* 650 */ "G_BITREVERSE\0"
  /* 663 */ "DBG_VALUE\0"
  /* 673 */ "G_GLOBAL_VALUE\0"
  /* 688 */ "G_FREEZE\0"
  /* 697 */ "G_FCANONICALIZE\0"
  /* 713 */ "G_CTLZ_ZERO_UNDEF\0"
  /* 731 */ "G_CTTZ_ZERO_UNDEF\0"
  /* 749 */ "G_IMPLICIT_DEF\0"
  /* 764 */ "G_FNEG\0"
  /* 771 */ "EXTRACT_SUBREG\0"
  /* 786 */ "INSERT_SUBREG\0"
  /* 800 */ "G_SEXT_INREG\0"
  /* 813 */ "SUBREG_TO_REG\0"
  /* 827 */ "G_ATOMIC_CMPXCHG\0"
  /* 844 */ "G_ATOMICRMW_XCHG\0"
  /* 861 */ "G_FLOG\0"
  /* 868 */ "G_VAARG\0"
  /* 876 */ "PREALLOCATED_ARG\0"
  /* 893 */ "G_SMULH\0"
  /* 901 */ "G_UMULH\0"
  /* 909 */ "G_PHI\0"
  /* 915 */ "MOVHI\0"
  /* 921 */ "SFSUB_F_RI_HI\0"
  /* 935 */ "SUBB_I_HI\0"
  /* 945 */ "SUB_I_HI\0"
  /* 954 */ "ADDC_I_HI\0"
  /* 964 */ "ADD_I_HI\0"
  /* 973 */ "AND_I_HI\0"
  /* 982 */ "SUBB_F_I_HI\0"
  /* 994 */ "SUB_F_I_HI\0"
  /* 1005 */ "ADDC_F_I_HI\0"
  /* 1017 */ "ADD_F_I_HI\0"
  /* 1028 */ "AND_F_I_HI\0"
  /* 1039 */ "XOR_F_I_HI\0"
  /* 1050 */ "XOR_I_HI\0"
  /* 1059 */ "SLI\0"
  /* 1063 */ "STB_RI\0"
  /* 1070 */ "STH_RI\0"
  /* 1077 */ "LDW_RI\0"
  /* 1084 */ "SW_RI\0"
  /* 1090 */ "LDBs_RI\0"
  /* 1098 */ "LDHs_RI\0"
  /* 1106 */ "LDBz_RI\0"
  /* 1114 */ "LDHz_RI\0"
  /* 1122 */ "G_FPTOSI\0"
  /* 1131 */ "G_FPTOUI\0"
  /* 1140 */ "SA_I\0"
  /* 1145 */ "SA_F_I\0"
  /* 1152 */ "SL_F_I\0"
  /* 1159 */ "SL_I\0"
  /* 1164 */ "G_PTRMASK\0"
  /* 1174 */ "GC_LABEL\0"
  /* 1183 */ "DBG_LABEL\0"
  /* 1193 */ "EH_LABEL\0"
  /* 1202 */ "ANNOTATION_LABEL\0"
  /* 1219 */ "ICALL_BRANCH_FUNNEL\0"
  /* 1239 */ "G_FSHL\0"
  /* 1246 */ "G_SHL\0"
  /* 1252 */ "G_FCEIL\0"
  /* 1260 */ "PATCHABLE_TAIL_CALL\0"
  /* 1280 */ "PATCHABLE_TYPED_EVENT_CALL\0"
  /* 1307 */ "PATCHABLE_EVENT_CALL\0"
  /* 1328 */ "FENTRY_CALL\0"
  /* 1340 */ "KILL\0"
  /* 1345 */ "G_FMUL\0"
  /* 1352 */ "G_STRICT_FMUL\0"
  /* 1366 */ "G_MUL\0"
  /* 1372 */ "G_FREM\0"
  /* 1379 */ "G_STRICT_FREM\0"
  /* 1393 */ "G_SREM\0"
  /* 1400 */ "G_UREM\0"
  /* 1407 */ "INLINEASM\0"
  /* 1417 */ "G_FMINIMUM\0"
  /* 1428 */ "G_FMAXIMUM\0"
  /* 1439 */ "G_FMINNUM\0"
  /* 1449 */ "G_FMAXNUM\0"
  /* 1459 */ "G_FCOPYSIGN\0"
  /* 1471 */ "G_SMIN\0"
  /* 1478 */ "G_UMIN\0"
  /* 1485 */ "G_ATOMICRMW_UMIN\0"
  /* 1502 */ "G_ATOMICRMW_MIN\0"
  /* 1518 */ "G_FSIN\0"
  /* 1525 */ "CFI_INSTRUCTION\0"
  /* 1541 */ "ADJCALLSTACKDOWN\0"
  /* 1558 */ "G_SSUBO\0"
  /* 1566 */ "G_USUBO\0"
  /* 1574 */ "G_SADDO\0"
  /* 1582 */ "G_UADDO\0"
  /* 1590 */ "G_SMULO\0"
  /* 1598 */ "G_UMULO\0"
  /* 1606 */ "SFSUB_F_RI_LO\0"
  /* 1620 */ "SUBB_I_LO\0"
  /* 1630 */ "SUB_I_LO\0"
  /* 1639 */ "ADDC_I_LO\0"
  /* 1649 */ "ADD_I_LO\0"
  /* 1658 */ "AND_I_LO\0"
  /* 1667 */ "SUBB_F_I_LO\0"
  /* 1679 */ "SUB_F_I_LO\0"
  /* 1690 */ "ADDC_F_I_LO\0"
  /* 1702 */ "ADD_F_I_LO\0"
  /* 1713 */ "AND_F_I_LO\0"
  /* 1724 */ "XOR_F_I_LO\0"
  /* 1735 */ "XOR_I_LO\0"
  /* 1744 */ "STACKMAP\0"
  /* 1753 */ "G_BSWAP\0"
  /* 1761 */ "G_SITOFP\0"
  /* 1770 */ "G_UITOFP\0"
  /* 1779 */ "G_FCMP\0"
  /* 1786 */ "G_ICMP\0"
  /* 1793 */ "NOP\0"
  /* 1797 */ "G_CTPOP\0"
  /* 1805 */ "PATCHABLE_OP\0"
  /* 1818 */ "FAULTING_OP\0"
  /* 1830 */ "ADJCALLSTACKUP\0"
  /* 1845 */ "PREALLOCATED_SETUP\0"
  /* 1864 */ "G_FEXP\0"
  /* 1871 */ "G_BR\0"
  /* 1876 */ "INLINEASM_BR\0"
  /* 1889 */ "LDADDR\0"
  /* 1896 */ "STADDR\0"
  /* 1903 */ "G_BLOCK_ADDR\0"
  /* 1916 */ "PATCHABLE_FUNCTION_ENTER\0"
  /* 1941 */ "G_READCYCLECOUNTER\0"
  /* 1960 */ "G_READ_REGISTER\0"
  /* 1976 */ "G_WRITE_REGISTER\0"
  /* 1993 */ "G_ASHR\0"
  /* 2000 */ "G_FSHR\0"
  /* 2007 */ "G_LSHR\0"
  /* 2014 */ "JR\0"
  /* 2017 */ "CALLR\0"
  /* 2023 */ "G_FFLOOR\0"
  /* 2032 */ "G_BUILD_VECTOR\0"
  /* 2047 */ "G_SHUFFLE_VECTOR\0"
  /* 2064 */ "G_XOR\0"
  /* 2070 */ "G_ATOMICRMW_XOR\0"
  /* 2086 */ "G_OR\0"
  /* 2091 */ "G_ATOMICRMW_OR\0"
  /* 2106 */ "BRR\0"
  /* 2110 */ "STB_RR\0"
  /* 2117 */ "SFSUB_F_RR\0"
  /* 2128 */ "STH_RR\0"
  /* 2135 */ "LDW_RR\0"
  /* 2142 */ "SW_RR\0"
  /* 2148 */ "LDBs_RR\0"
  /* 2156 */ "LDHs_RR\0"
  /* 2164 */ "LDBz_RR\0"
  /* 2172 */ "LDHz_RR\0"
  /* 2180 */ "LDWz_RR\0"
  /* 2188 */ "G_INTTOPTR\0"
  /* 2199 */ "SRA_R\0"
  /* 2205 */ "SUBB_R\0"
  /* 2212 */ "SUB_R\0"
  /* 2218 */ "ADDC_R\0"
  /* 2225 */ "ADD_R\0"
  /* 2231 */ "AND_R\0"
  /* 2237 */ "SRA_F_R\0"
  /* 2245 */ "SUBB_F_R\0"
  /* 2254 */ "SUB_F_R\0"
  /* 2262 */ "ADDC_F_R\0"
  /* 2271 */ "ADD_F_R\0"
  /* 2279 */ "AND_F_R\0"
  /* 2287 */ "SHL_F_R\0"
  /* 2295 */ "SRL_F_R\0"
  /* 2303 */ "XOR_F_R\0"
  /* 2311 */ "SHL_R\0"
  /* 2317 */ "SRL_R\0"
  /* 2323 */ "XOR_R\0"
  /* 2329 */ "G_FABS\0"
  /* 2336 */ "G_UNMERGE_VALUES\0"
  /* 2353 */ "G_MERGE_VALUES\0"
  /* 2368 */ "G_FCOS\0"
  /* 2375 */ "G_CONCAT_VECTORS\0"
  /* 2392 */ "COPY_TO_REGCLASS\0"
  /* 2409 */ "G_ATOMIC_CMPXCHG_WITH_SUCCESS\0"
  /* 2439 */ "G_INTRINSIC_W_SIDE_EFFECTS\0"
  /* 2466 */ "G_SSUBSAT\0"
  /* 2476 */ "G_USUBSAT\0"
  /* 2486 */ "G_SADDSAT\0"
  /* 2496 */ "G_UADDSAT\0"
  /* 2506 */ "BT\0"
  /* 2509 */ "G_EXTRACT\0"
  /* 2519 */ "G_SELECT\0"
  /* 2528 */ "G_BRINDIRECT\0"
  /* 2541 */ "PATCHABLE_RET\0"
  /* 2555 */ "PATCHABLE_FUNCTION_EXIT\0"
  /* 2579 */ "G_BRJT\0"
  /* 2586 */ "G_EXTRACT_VECTOR_ELT\0"
  /* 2607 */ "G_INSERT_VECTOR_ELT\0"
  /* 2627 */ "G_FCONSTANT\0"
  /* 2639 */ "G_CONSTANT\0"
  /* 2650 */ "STATEPOINT\0"
  /* 2661 */ "PATCHPOINT\0"
  /* 2672 */ "G_PTRTOINT\0"
  /* 2683 */ "G_FRINT\0"
  /* 2691 */ "G_FNEARBYINT\0"
  /* 2704 */ "G_VASTART\0"
  /* 2714 */ "LIFETIME_START\0"
  /* 2729 */ "G_INSERT\0"
  /* 2738 */ "G_FSQRT\0"
  /* 2746 */ "G_STRICT_FSQRT\0"
  /* 2761 */ "G_BITCAST\0"
  /* 2771 */ "G_ADDRSPACE_CAST\0"
  /* 2788 */ "G_FPEXT\0"
  /* 2796 */ "G_SEXT\0"
  /* 2803 */ "G_ANYEXT\0"
  /* 2812 */ "G_ZEXT\0"
  /* 2819 */ "G_FDIV\0"
  /* 2826 */ "G_STRICT_FDIV\0"
  /* 2840 */ "G_SDIV\0"
  /* 2847 */ "G_UDIV\0"
  /* 2854 */ "G_FPOW\0"
  /* 2861 */ "G_SMAX\0"
  /* 2868 */ "G_UMAX\0"
  /* 2875 */ "G_ATOMICRMW_UMAX\0"
  /* 2892 */ "G_ATOMICRMW_MAX\0"
  /* 2908 */ "G_FRAME_INDEX\0"
  /* 2922 */ "COPY\0"
  /* 2927 */ "LEADZ\0"
  /* 2933 */ "TRAILZ\0"
  /* 2940 */ "G_CTLZ\0"
  /* 2947 */ "G_CTTZ\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const unsigned LanaiInstrNameIndices[] = {
    911U, 1407U, 1876U, 1525U, 1193U, 1174U, 1202U, 1340U, 
    771U, 786U, 751U, 813U, 2392U, 663U, 1183U, 534U, 
    2922U, 606U, 2714U, 453U, 1744U, 1328U, 2661U, 493U, 
    1845U, 876U, 2650U, 613U, 1818U, 1805U, 1916U, 2541U, 
    2555U, 1260U, 1307U, 1280U, 1219U, 382U, 112U, 1366U, 
    2840U, 2847U, 1393U, 1400U, 431U, 2086U, 2064U, 749U, 
    909U, 2908U, 673U, 2509U, 2336U, 2729U, 2353U, 2032U, 
    200U, 2375U, 2672U, 2188U, 2761U, 688U, 174U, 475U, 
    1941U, 337U, 281U, 311U, 322U, 262U, 292U, 642U, 
    626U, 2409U, 827U, 844U, 398U, 118U, 437U, 414U, 
    2091U, 2070U, 2892U, 1502U, 2875U, 1485U, 365U, 95U, 
    526U, 466U, 2528U, 152U, 2439U, 2803U, 192U, 2639U, 
    2627U, 2704U, 868U, 2796U, 800U, 2812U, 1246U, 2007U, 
    1993U, 1239U, 2000U, 1786U, 1779U, 2519U, 1582U, 555U, 
    1566U, 518U, 1574U, 547U, 1558U, 510U, 1598U, 1590U, 
    901U, 893U, 2496U, 2486U, 2476U, 2466U, 344U, 74U, 
    1345U, 55U, 255U, 2819U, 1372U, 2854U, 1864U, 27U, 
    861U, 19U, 0U, 764U, 2788U, 164U, 1122U, 1131U, 
    1761U, 1770U, 2329U, 1459U, 697U, 1439U, 1449U, 563U, 
    578U, 1417U, 1428U, 388U, 1164U, 1471U, 2861U, 1478U, 
    2868U, 1871U, 2579U, 2607U, 2586U, 2047U, 2947U, 731U, 
    2940U, 713U, 1797U, 1753U, 650U, 1252U, 2368U, 1518U, 
    2738U, 2023U, 2683U, 2691U, 2771U, 1903U, 593U, 221U, 
    351U, 81U, 1352U, 2826U, 1379U, 61U, 2746U, 1960U, 
    1976U, 1541U, 1830U, 238U, 1275U, 2017U, 1005U, 1690U, 
    2262U, 954U, 1639U, 2218U, 1017U, 1702U, 2271U, 964U, 
    1649U, 2225U, 1028U, 1713U, 2279U, 973U, 1658U, 2231U, 
    134U, 143U, 45U, 2106U, 2506U, 2014U, 1889U, 1090U, 
    2148U, 1106U, 2164U, 1098U, 2156U, 1114U, 2172U, 1077U, 
    2135U, 2180U, 2927U, 9U, 14U, 22U, 35U, 40U, 
    915U, 1793U, 1040U, 1725U, 2304U, 1051U, 1736U, 2324U, 
    250U, 2551U, 1145U, 1140U, 139U, 2521U, 921U, 1606U, 
    2117U, 2287U, 2311U, 1059U, 1152U, 1159U, 2237U, 2199U, 
    2295U, 2317U, 1896U, 1063U, 2110U, 1070U, 2128U, 982U, 
    1667U, 2245U, 935U, 1620U, 2205U, 994U, 1679U, 2254U, 
    945U, 1630U, 2212U, 1084U, 2142U, 2933U, 1039U, 1724U, 
    2303U, 1050U, 1735U, 2323U, 
};

static inline void InitLanaiMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, nullptr, nullptr, 292);
}

} // end namespace llvm
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct LanaiGenInstrInfo : public TargetInstrInfo {
  explicit LanaiGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~LanaiGenInstrInfo() override = default;

};
} // end namespace llvm
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc LanaiInsts[];
extern const unsigned LanaiInstrNameIndices[];
extern const char LanaiInstrNameData[];
LanaiGenInstrInfo::LanaiGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(LanaiInsts, LanaiInstrNameIndices, LanaiInstrNameData, nullptr, nullptr, 292);
}
} // end namespace llvm
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Lanai {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Lanai {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Lanai
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Lanai {
namespace OpTypes {
enum OperandType {
  AluOp = 0,
  BrTarget = 1,
  CCOp = 2,
  CallTarget = 3,
  MEMi = 4,
  MEMri = 5,
  MEMrr = 6,
  MEMspls = 7,
  f32imm = 8,
  f64imm = 9,
  i16imm = 10,
  i1imm = 11,
  i32hi16 = 12,
  i32hi16and = 13,
  i32imm = 14,
  i32lo16and = 15,
  i32lo16s = 16,
  i32lo16z = 17,
  i32lo21 = 18,
  i32neg16 = 19,
  i64imm = 20,
  i8imm = 21,
  imm10 = 22,
  immShift = 23,
  pred = 24,
  ptype0 = 25,
  ptype1 = 26,
  ptype2 = 27,
  ptype3 = 28,
  ptype4 = 29,
  ptype5 = 30,
  type0 = 31,
  type1 = 32,
  type2 = 33,
  type3 = 34,
  type4 = 35,
  type5 = 36,
  untyped_imm_0 = 37,
  CCR = 38,
  GPR = 39,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace Lanai {
LLVM_READONLY
static int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  const int Offsets[] = {
    0,
    1,
    1,
    1,
    2,
    3,
    4,
    5,
    5,
    8,
    12,
    13,
    17,
    20,
    20,
    21,
    23,
    25,
    25,
    26,
    27,
    29,
    29,
    35,
    36,
    37,
    40,
    40,
    42,
    43,
    43,
    43,
    43,
    43,
    43,
    45,
    48,
    48,
    51,
    54,
    57,
    60,
    63,
    66,
    69,
    72,
    75,
    78,
    79,
    80,
    82,
    84,
    87,
    89,
    93,
    95,
    97,
    99,
    101,
    103,
    105,
    107,
    109,
    111,
    113,
    114,
    116,
    118,
    120,
    125,
    130,
    135,
    137,
    142,
    147,
    151,
    154,
    157,
    160,
    163,
    166,
    169,
    172,
    175,
    178,
    181,
    184,
    187,
    190,
    192,
    194,
    195,
    196,
    197,
    199,
    201,
    203,
    205,
    206,
    209,
    211,
    214,
    216,
    219,
    222,
    225,
    229,
    233,
    237,
    241,
    245,
    249,
    254,
    258,
    263,
    267,
    272,
    276,
    281,
    285,
    289,
    292,
    295,
    298,
    301,
    304,
    307,
    310,
    313,
    316,
    320,
    324,
    327,
    330,
    333,
    335,
    337,
    339,
    341,
    343,
    345,
    347,
    349,
    351,
    353,
    355,
    357,
    359,
    362,
    364,
    367,
    370,
    373,
    376,
    379,
    382,
    385,
    388,
    391,
    394,
    397,
    400,
    401,
    404,
    408,
    411,
    415,
    417,
    419,
    421,
    423,
    425,
    427,
    429,
    431,
    433,
    435,
    437,
    439,
    441,
    443,
    445,
    447,
    449,
    452,
    455,
    458,
    461,
    464,
    467,
    471,
    473,
    475,
    477,
    479,
    481,
    483,
    484,
    485,
    488,
    491,
    495,
    498,
    501,
    505,
    508,
    511,
    515,
    518,
    521,
    525,
    528,
    531,
    535,
    538,
    541,
    545,
    547,
    549,
    552,
    554,
    555,
    556,
    558,
    562,
    566,
    570,
    574,
    578,
    582,
    586,
    590,
    594,
    598,
    602,
    604,
    604,
    604,
    604,
    604,
    604,
    606,
    606,
    609,
    612,
    616,
    619,
    622,
    626,
    628,
    628,
    631,
    634,
    636,
    640,
    642,
    644,
    646,
    650,
    654,
    656,
    659,
    662,
    666,
    670,
    674,
    678,
    680,
    684,
    688,
    692,
    696,
    699,
    702,
    706,
    709,
    712,
    716,
    719,
    722,
    726,
    729,
    732,
    736,
    740,
    744,
    746,
    749,
    752,
    756,
    759,
    762,
  };
  const int OpcodeOperandTypes[] = {
    -1, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    /**/
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, 
    /**/
    -1, 
    -1, -1, 
    -1, -1, 
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i64imm, OpTypes::i32imm, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, 
    OpTypes::i32imm, 
    -1, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i32imm, 
    -1, 
    /**/
    /**/
    /**/
    /**/
    /**/
    -1, -1, 
    -1, -1, -1, 
    /**/
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type1, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::ptype1, OpTypes::type2, -1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::ptype0, OpTypes::ptype2, -1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    -1, 
    -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::untyped_imm_0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::ptype0, OpTypes::ptype0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    -1, 
    OpTypes::ptype0, -1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::ptype0, OpTypes::type1, OpTypes::i32imm, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, -1, 
    -1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::CallTarget, 
    OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16and, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16and, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16and, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16and, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::BrTarget, OpTypes::CCOp, 
    OpTypes::GPR, OpTypes::CCOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::CCOp, 
    OpTypes::i16imm, OpTypes::CCOp, 
    OpTypes::BrTarget, 
    OpTypes::GPR, 
    OpTypes::GPR, OpTypes::i32lo21, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16s, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, 
    /**/
    /**/
    /**/
    /**/
    /**/
    OpTypes::GPR, OpTypes::i32hi16, 
    /**/
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, 
    /**/
    OpTypes::GPR, OpTypes::GPR, OpTypes::immShift, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::immShift, 
    OpTypes::GPR, OpTypes::CCOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::CCOp, 
    OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::i32lo21, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::immShift, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::immShift, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::i32lo21, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::imm10, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16s, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::AluOp, 
    OpTypes::GPR, OpTypes::GPR, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32hi16, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::i32lo16z, 
    OpTypes::GPR, OpTypes::GPR, OpTypes::GPR, OpTypes::i32imm, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Lanai {

enum PostEncoderMethod {
	PostEncoderMethod_adjustPqBitsSpls
};

// splsIdempotent
LLVM_READONLY
int splsIdempotent(uint16_t Opcode) {
static const uint16_t splsIdempotentTable[][2] = {
  { Lanai::LDBs_RI, Lanai::LDBs_RI },
  { Lanai::LDBz_RI, Lanai::LDBz_RI },
  { Lanai::LDHs_RI, Lanai::LDHs_RI },
  { Lanai::LDHz_RI, Lanai::LDHz_RI },
  { Lanai::STB_RI, Lanai::STB_RI },
  { Lanai::STH_RI, Lanai::STH_RI },
}; // End of splsIdempotentTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 6;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == splsIdempotentTable[mid][0]) {
      break;
    }
    if (Opcode < splsIdempotentTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return splsIdempotentTable[mid][1];
}

} // end namespace Lanai
} // end namespace llvm
#endif // GET_INSTRMAP_INFO

