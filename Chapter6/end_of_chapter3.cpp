class Integer {
public:
    Integer() : value(0) {};
    Integer(int v) : value(v) {};

    friend Integer operator+(const Integer& l, const Integer& r) {
        return Integer{l.value + r.value};
    }
    friend Integer operator-(const Integer& l, const Integer& r) {
        return Integer{l.value - r.value};
    }
    friend Integer operator*(const Integer& l, const Integer& r) {
        return Integer{l.value * r.value};
    }
    friend Integer operator/(const Integer& l, const Integer& r) {
        return Integer{l.value / r.value};
    }

private:
    int value;
};