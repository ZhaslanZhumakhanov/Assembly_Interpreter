# cmake_minimum_required(VERSION <specify CMake version here>)
project(Assembly_Intepreter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assembly_Intepreter Src/main.cpp Src/Memory.cpp Include/Memory.h Include/IOperation.h Include/IValue.h Include/IMutableValue.h Src/ValueLiteral.cpp Include/ValueLiteral.h Src/ValueRegister.cpp Include/ValueRegister.h Src/Interpreter.cpp Include/Interpreter.h Src/AddOp.cpp Include/AddOp.h Src/CmpOp.cpp Include/CmpOp.h Src/JeOp.cpp Include/JeOp.h Src/JgOp.cpp Include/JgOp.h Src/JlOp.cpp Include/JlOp.h Src/JmpOp.cpp Include/JmpOp.h Src/MovOp.cpp Include/MovOp.h Src/MulOp.cpp Include/MulOp.h)