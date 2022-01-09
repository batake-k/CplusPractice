/*
    std::unique_ptrはスマートポインタの一種で、スコープから抜けるとオブジェクトと共に、
    動的確保したメモリを自動的に破棄してくれる。
*/

#include <iostream>
#include <memory>

class Test {
public:
    Test () {
        std::cout << "constructor" << std::endl;
    }
    ~Test () {
        std::cout << "destructor" << std::endl;
    }

private:

};

int main() {
    auto p = std::make_unique<Test>();
}