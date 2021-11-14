#include <iostream>

namespace A {
    namespace B {
        namespace C {
            void test() {
                std::cout << "test" << std::endl;
            }
        }
    }
}

int main() {
    namespace ABC = A::B::C;
    ABC::test();
}