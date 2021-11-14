#include <iostream>

void funcA() {
    std::cout << "func A" << std::endl;
}

void funcB() {
    std::cout << "func B" << std::endl;
}

int main() {
    funcA();

#define funcA funcB

    funcA();
}