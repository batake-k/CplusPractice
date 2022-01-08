#include <iostream>

class A {
public:
    void set(int value) {this->value = value;}
    void foo();

private:
    int value = 0;
};

void A::foo() {
    auto lambda = [this]() {
        std::cout << value << std::endl;
    };

    lambda();
}

int main() {
    A a;
    a.set(42);
    a.foo();
}