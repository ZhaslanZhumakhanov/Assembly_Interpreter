#include <iostream>
#include <cassert>
#include "Include/Interpreter.h"
#include "Include/MovOp.h"
#include "Include/ValueRegister.h"
#include "Include/MulOp.h"
#include "Include/AddOp.h"
#include "Include/CmpOp.h"
#include "Include/JgOp.h"
#include "Include/ValueLiteral.h"

int main() {
    // Это тот самый код, который считает факториал числа в регистре r0
    Interpreter interpreter;
    Memory mem;

// "вставляем" код в память нашего fantasy-компьютера
// обратите внимание, что все операторы принимают на вход интерфейсы операндов.
    mem.PushOp(new MovOp(new ValueRegister(r0), new ValueLiteral(5))); // первый операнд обязан быть IMutableValue, а второй может быть просто IValue
    mem.PushOp(new MovOp(new ValueRegister(r1), new ValueLiteral(1)));
    mem.PushOp(new MulOp(new ValueRegister(r1), new ValueRegister(r0)));
    mem.PushOp(new AddOp(new ValueRegister(r0), new ValueLiteral(-1)));
    mem.PushOp(new CmpOp(new ValueRegister(r0), new ValueLiteral(0)));
    mem.PushOp(new JgOp(new ValueLiteral(-4))); // например тут сказано, что можно подавать IValue

    Interpreter::Run(mem);

    assert(mem.GetReg(r1) == 1 * 2 * 3 * 4 * 5);
    assert(mem.GetReg(r0) == 0);
    return 0;
}