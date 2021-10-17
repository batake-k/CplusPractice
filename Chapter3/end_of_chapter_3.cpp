#include <iostream>

class Base {
public:
    void test();
};

void Base::test() {
    std::cout << "Base" << std::endl;
}

class Derived : public Base {
public:
    using Base::test;
    void test(int i);
};

void Derived::test(int i){
    std::cout << "Derived" << std::endl;
}

int main() {
    Derived derived;
    derived.test();
    derived.test(1);
}