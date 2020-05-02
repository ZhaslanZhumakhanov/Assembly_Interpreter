#pragma once

#include "Value.h"

class ValueLiteral : public Value {
    const int value_;

public:
    explicit ValueLiteral(int value) : value_(value) {}
    int Get(const Memory &mem) const override;
};
