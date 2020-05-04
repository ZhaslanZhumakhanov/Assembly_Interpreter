#pragma once

#include "IValue.h"
#include "IOperation.h"

class JmpOp : public IOperation {
    const IValue *const op1_;

public:
    explicit JmpOp(IValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
};
