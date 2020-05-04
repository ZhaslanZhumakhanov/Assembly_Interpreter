#pragma once

#include "Memory.h"
#include "IValue.h"

class IMutableValue : public IValue {
public:
    virtual void Set(Memory &mem, int value) = 0;
    ~IMutableValue() override = default;
};
