#pragma once

#include "Memory.h"

class Memory;
class IOperation {
public:
    virtual void Apply(Memory &mem) = 0;
    virtual ~IOperation() = default;
};
