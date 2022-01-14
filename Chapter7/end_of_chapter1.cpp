#include <iostream>

class A {
public:
    virtual void func() { std::cout << "A::func()" << std::endl; };
private:
};

class B : public A {
public:
    void func() override { std::cout << "B::func()" << std::endl; };
private:
};

int main() {
    B b{};
    A& a = b;
    a.func();
}