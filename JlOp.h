#pragma once


#include "IOperation.h"
#include "IValue.h"

class JlOp : public IOperation {
    const IValue *const op1_;

public:
    explicit JlOp(IValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
};
