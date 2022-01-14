#include <iostream>

class A {
public:
    void funcA() { std::cout << "A::func()" << std::endl; };
private:

};

class B {
public:
    void funcB() { std::cout << "B::func()" << std::endl; };
private:

};

class C : public A, public B {
public:
private:
};

int main() {
    C c{};
    c.funcA();
    c.funcB();
}