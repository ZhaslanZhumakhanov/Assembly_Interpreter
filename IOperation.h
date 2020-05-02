#pragma once

#include "Memory.h"

class IOperation {
public:
    virtual void Apply(Memory &mem) = 0;
    virtual ~IOperation() = default;
};
