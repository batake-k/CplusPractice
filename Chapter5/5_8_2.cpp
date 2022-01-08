#include <iostream>

class Test {
public:
    Test() {};
    Test(const Test& other){
        std::cout << "copy" << std::endl;
    }
    Test(Test&& other){
        std::cout << "move" << std::endl;
    }

private:

};

int main() {
    Test test;
    Test test2(test);
    Test test3(std::move(test));
}