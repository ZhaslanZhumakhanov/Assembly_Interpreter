#include <iostream>
#include "../Include/JgOp.h"

void JgOp::Apply(Memory &mem) {
    if (mem.GetReg(cmp)==1){
            mem.SetReg(line,mem.GetReg(line)+op1_->Get(mem));
    }
}

JgOp::~JgOp() {
    delete op1_;
    std::cout << "~JgOP" << std::endl;
}
