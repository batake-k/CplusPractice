#include <iostream>

class A {
public:
    A(int i) { std::cout << i << std::endl; };
private:
};

class B : virtual public A {
public:
    B() : A(1) {};
private:
};

class C : virtual public A {
public:
    C() : A(2) {};
private:
};

class D : public B, public C {
public:
    D() : A(3) {};
private:
};

int main() {
    D d{};
}