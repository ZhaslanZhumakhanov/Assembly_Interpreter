#pragma once


#include "IOperation.h"
#include "Value.h"

class CmpOp : public IOperation {
    const Value *const op1_;
    const Value *const op2_;

public:
    CmpOp(const Value *op1, const Value *op2) : op1_(op1), op2_(op2) {}
    void Apply(Memory &mem) override;
};
