#include <iostream>
#include "../Include/JmpOp.h"

void JmpOp::Apply(Memory &mem) {
    mem.SetReg(line,mem.GetReg(line)+op1_->Get(mem));
}

JmpOp::~JmpOp() {
    delete op1_;
    std::cout << "~JmpOp" << std::endl;
}
