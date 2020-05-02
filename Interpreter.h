#pragma once

#include "Memory.h"

class Interpreter {
public:
    void Run(Memory &mem, int maxIterations = 100) const;
};
