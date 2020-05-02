#pragma once


#include "Value.h"
#include "IOperation.h"

class JeOp : public IOperation {
    const Value *const op1_;

public:
    explicit JeOp(Value *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
};
