#include <iostream>

void test() {
    std::cout << "global" << std::endl;
}

namespace module {
    void test() {
        std::cout << "module" << std::endl;
    }
}

int main(){
    test();
    module::test();
}