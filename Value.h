#pragma once

#include "Memory.h"

class Value {
public:
    virtual int Get(const Memory &mem) const = 0;
    virtual ~Value() = default;
};
