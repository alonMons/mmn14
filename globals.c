#include "globals.h"

/* The allowed operands for each instruction in the assembly language */
InstructionRule instructionRules[] = {
    {MOV, /* source */ OPERAND_TYPE_IMMEDIATE | OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 2},
    {CMP, /* source */ OPERAND_TYPE_IMMEDIATE | OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* destination */ OPERAND_TYPE_IMMEDIATE | OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER, 
    /* nop */ 2},
    {ADD, /* source */ OPERAND_TYPE_IMMEDIATE | OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 2},
    {SUB, /* source */ OPERAND_TYPE_IMMEDIATE | OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 2},
    {NOT, /* source */ 0, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 1},
    {CLR, 
    /* source */ 0, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 1},
    {LEA, /* source */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 2},
    {INC, 
    /* source */ 0, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 1},
    {DEC, 
    /* source */ 0, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 1},
    {JMP, 
    /* source */ 0, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_REGISTER,
    /* nop */ 1},
    {BNE, 
    /* source */ 0, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_REGISTER,
    /* nop */ 1},
    {RED, 
    /* source */ 0, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 1},
    {PRN, 
    /* source */ 0,
    /* destination */ OPERAND_TYPE_IMMEDIATE | OPERAND_TYPE_DIRECT | OPERAND_TYPE_INDEXED | OPERAND_TYPE_REGISTER,
    /* nop */ 1},
    {JSR, 
    /* source */ 0, 
    /* destination */ OPERAND_TYPE_DIRECT | OPERAND_TYPE_REGISTER,
    /* nop */ 1},
    {RTS, 
    /* source */ 0, 
    /* destination */ 0,
    /* nop */ 0},
    {HLT, 
    /* source */ 0, 
    /* destination */ 0,
    /* nop */ 0}
};

node* symbolNames;