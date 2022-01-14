#include <iostream>

class A {
public:
    A() { std::cout << "class A constructor" << std::endl; };
    ~A() { std::cout << "class A destructor" << std::endl; };
private:
};

class B : public A {
public:
    B() { std::cout << "class B constructor" << std::endl; };
    ~B() { std::cout << "class B destructor" << std::endl; };
private:
};

class C : public B {
public:
    C() { std::cout << "class C constructor" << std::endl; };
    ~C() { std::cout << "class C destructor" << std::endl; };
private:
};

int main() {
    C c{};
}