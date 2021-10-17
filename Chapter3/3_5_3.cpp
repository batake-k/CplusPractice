#include <string>
#include <iostream>

class Base {
public:
    virtual std::string name() const { return "Base"; };
    virtual std::string most_name() const = 0;
};

class Derived : public Base {
public:
    std::string name() const override { return "Derived"; };
};

class MoreDerived : public Derived {
public:
    std::string name() const override { return "MoreDerived"; };
    std::string most_name() const override { return "MoreDerived"; };
};

int main(){
    // Derivedクラスは純粋仮想関数most_nameをoverrideしていないので、インスタンスを作成できない
    // Derived derived;

    MoreDerived more_derived;
    std::cout << more_derived.most_name() << std::endl;
}