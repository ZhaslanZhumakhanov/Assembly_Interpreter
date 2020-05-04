#pragma once


#include "IValue.h"
#include "IOperation.h"

class JgOp : public IOperation {
    const IValue *const op1_;

public:
    explicit JgOp(IValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
};



