#include <iostream>

class Test {
public:
    Test () { std::cout << "constructor" << std::endl; };
    ~Test () { std::cout << "destructor" << std::endl; };
};

int main() {
    std::cout << "1" << std::endl;
    Test* test = new Test;
    std::cout << "2" << std::endl;
    // 動的確保したインスタンスが破棄されずメモリリークが起こる。
    // delete test;
    std::cout << "3" << std::endl;
}