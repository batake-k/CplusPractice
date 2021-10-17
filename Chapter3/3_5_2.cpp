#include <string>
#include <iostream>

class Base {
public:
    virtual std::string name() const { return "Base"; };
};

class Derived : public Base {
public:
    std::string name() const override { return "Derived"; };
};

class MoreDerived : public Derived {
public:
    std::string name() const override { return "MoreDerived"; };
};

int main(){
    Base base;
    std::cout << base.name() << std::endl;

    Derived derived;
    std::cout << derived.name() << std::endl;

    MoreDerived more_derived;
    std::cout << more_derived.name() << std::endl;
}