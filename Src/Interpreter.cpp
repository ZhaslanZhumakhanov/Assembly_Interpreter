#include "../Include/Interpreter.h"
#include "../Include/IOperation.h"

void Interpreter::Run(Memory &mem, int maxIterations) {
    for (mem.GetReg(line); mem.GetOpsCount()>mem.GetReg(line) && maxIterations>0; ){
        auto a=mem.GetCurrentOp();
        a->Apply(mem);
        auto b=mem.GetReg(line)+1;
        mem.SetReg(line,b);
        maxIterations--;
    }
}
