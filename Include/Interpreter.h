#pragma once

#include "Memory.h"

class Interpreter {
public:
    static void Run(Memory &mem, int maxIterations = 100);
};
