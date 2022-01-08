#include <iostream>
#include <utility>

void test(int& i){
    std::cout << "ref " << i << std::endl;
}

void test(int&& i){
    std::cout << "rref " << i << std::endl;
}

int main() {
    int i = 10;
    test(i);
    test(std::move(i));
}