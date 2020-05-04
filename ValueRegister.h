#pragma once

#include "IMutableValue.h"

class ValueRegister : public IMutableValue {
    const Register reg_;

public:
    explicit ValueRegister(Register reg) : reg_(reg) {}
    void Set(Memory &mem, int value) override;
    int Get(const Memory &mem) const override;
    ~ValueRegister() override;
};
