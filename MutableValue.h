#pragma once

#include "Memory.h"
#include "Value.h"

class MutableValue : public Value {
public:
    virtual void Set(Memory &mem, int value) = 0;
    ~MutableValue() override = default;
};
