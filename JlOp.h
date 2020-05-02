#pragma once


#include "IOperation.h"
#include "Value.h"

class JlOp : public IOperation {
    const Value *const op1_;

public:
    explicit JlOp(Value *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
};
