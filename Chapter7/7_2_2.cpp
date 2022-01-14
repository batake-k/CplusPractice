#include <iostream>

class A {
public:
    A() { std::cout << "class A constructor" << std::endl; };
    A(int i) { std::cout << "class A constructor with int " << i << std::endl; };
    ~A() { std::cout << "class A destructor" << std::endl; };
private:
};

class B : public A {
public:
    B(int i) : A(i) { std::cout << "class B constructor" << std::endl; };
    ~B() { std::cout << "class B destructor" << std::endl; };
private:
};

int main() {
    B b{10};
}