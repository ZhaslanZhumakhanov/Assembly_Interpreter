#include <iostream>
#include "../Include/JlOp.h"

void JlOp::Apply(Memory &mem) {
    if (mem.GetReg(cmp)==-1){
        mem.SetReg(line,mem.GetReg(line)+op1_->Get(mem));
    }
}

JlOp::~JlOp() {
    delete op1_;
    std::cout << "~JlOp" << std::endl;
}
