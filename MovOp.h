#pragma once

#include "MutableValue.h"
#include "IOperation.h"

class MovOp : public IOperation {
    MutableValue *const op1_;
    const Value *const op2_;

public:
    MovOp(MutableValue *op1, const Value *op2) : op1_(op1), op2_(op2) {}
    void Apply(Memory &mem) override;
};
