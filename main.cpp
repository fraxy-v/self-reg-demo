#include "factory.h"
#include <iostream>


int main() {
    auto& c = factory::container();

    for (const auto& [name, _] : c) {
        std::cout << name << '\n';
    }

    return 0;
}