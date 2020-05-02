#pragma once


#include "Value.h"
#include "IOperation.h"

class JgOp : public IOperation {
    const Value *const op1_;

public:
    explicit JgOp(Value *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
};



