# cmake_minimum_required(VERSION <specify CMake version here>)
project(Assembly_Intepreter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assembly_Intepreter main.cpp Memory.cpp Memory.h IOperation.h IValue.h IMutableValue.h ValueLiteral.cpp ValueLiteral.h ValueRegister.cpp ValueRegister.h Interpreter.cpp Interpreter.h AddOp.cpp AddOp.h CmpOp.cpp CmpOp.h JeOp.cpp JeOp.h JgOp.cpp JgOp.h JlOp.cpp JlOp.h JmpOp.cpp JmpOp.h MovOp.cpp MovOp.h MulOp.cpp MulOp.h PopOp.cpp PopOp.h PushOp.cpp PushOp.h)