#include <iostream>

void test(){
    std::cout << "test" << std::endl;
}

int main() {
    void (*fp)() = test;
    fp();
}