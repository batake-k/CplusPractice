#include <iostream>

class Float {
public:
    Float(float _value):value(_value){};

    friend Float operator+(const Float& l, const Float& r) {
        return Float{l.value + r.value};
    }
    friend Float operator-(const Float& l, const Float& r) {
        return Float{l.value - r.value};
    }
    friend Float operator*(const Float& l, const Float& r) {
        return Float{l.value * r.value};
    }
    friend Float operator/(const Float& l, const Float& r) {
        return Float{l.value / r.value};
    }

    float getValue() { return value; }

private:
    float value;
};

int main() {
    Float f1{1.0f};
    Float f2{2.0f};

    std::cout << "1.0 + 2.0 = " << (f1 + f2).getValue() << std::endl;
    std::cout << "1.0 - 2.0 = " << (f1 - f2).getValue() << std::endl;
    std::cout << "1.0 * 2.0 = " << (f1 * f2).getValue() << std::endl;
    std::cout << "1.0 / 2.0 = " << (f1 / f2).getValue() << std::endl;
}