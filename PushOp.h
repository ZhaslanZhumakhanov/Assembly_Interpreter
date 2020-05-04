#pragma once

#include "IValue.h"
#include "IOperation.h"

class PushOp : public IOperation {
    const IValue *const op1_;

public:
    explicit PushOp(IValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
};