#pragma once

#include "Value.h"
#include "IOperation.h"

class PushOp : public IOperation {
    const Value *const op1_;

public:
    explicit PushOp(Value *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
};