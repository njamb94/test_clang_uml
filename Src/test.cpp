#include "Interface/test.hpp"
#include <iostream>

void Test::print() {
    x.a = 3;
    x.b = 3;
    std::cout << x.a << std::endl;
}