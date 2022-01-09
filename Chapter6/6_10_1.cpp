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

    Float& operator=(const Float& other) {
        value = other.value;
        return *this;
    }

    float getValue() { return value; }

private:
    float value;
};

int main() {
    Float f1{1.0f};
    Float f2 = f1;

    std::cout << f2.getValue() << std::endl;
}