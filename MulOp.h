#pragma once

#include "MutableValue.h"
#include "IOperation.h"

class MulOp : public IOperation {
    MutableValue *const op1_;
    const Value *const op2_;

public:
    MulOp(MutableValue *op1, const Value *op2) : op1_(op1), op2_(op2) {}
    void Apply(Memory &mem) override;
};
