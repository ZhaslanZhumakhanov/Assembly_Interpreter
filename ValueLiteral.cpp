#include <iostream>
#include "ValueLiteral.h"

int ValueLiteral::Get(const Memory &mem) const {
    return value_;
}

ValueLiteral::~ValueLiteral() {
    std::cout<<"~ValueLiteral"<<std::endl;
}
