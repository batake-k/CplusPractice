#include <iostream>

class Float {
public:
    Float(float _value):value(_value){};

    Float operator+(const Float& other) const {
        return value + other.value;
    }
    Float operator-(const Float& other) const {
        return value - other.value;
    }

    float getValue() { return value; }

private:
    float value;
};

int main() {
    Float f1{1.0f};
    Float f2{2.0f};

    std::cout << (f1 - f2).getValue() << std::endl;
}