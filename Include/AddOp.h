#pragma once


#include "IMutableValue.h"
#include "IOperation.h"

class AddOp : public IOperation {
    IMutableValue *const op1_;
    const IValue *const op2_;

public:
    AddOp(IMutableValue *op1, const IValue *op2) : op1_(op1), op2_(op2) {}
    void Apply(Memory &mem) override;
    ~AddOp() override;
};