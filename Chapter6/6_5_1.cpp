#include <iostream>

class Test {
public:
    Test(int v):value(v){};
    bool operator<(const Test& other) const {
        return value < other.value;
    }
    bool operator==(const Test& other) const {
        return !(*this < other) && !(other < *this);
    }
    bool operator!=(const Test& other) const {
        return (*this < other) || (other < *this);
    }
    bool operator<=(const Test& other) const {
        return !(other < *this);
    }
    bool operator>(const Test& other) const {
        return other < *this;
    }
    bool operator>=(const Test& other) const {
        return !(*this < other);
    }
private:
    int value;
};

int main() {
    Test t1{1};
    Test t2{2};

    std::cout << "1 < 2 : " << (t1 < t2) << std::endl;
    std::cout << "1 == 2 : " << (t1 == t2) << std::endl;
    std::cout << "1 != 2 : " << (t1 != t2) << std::endl;
    std::cout << "1 <= 2 : " << (t1 <= t2) << std::endl;
    std::cout << "1 > 2 : " << (t1 > t2) << std::endl;
    std::cout << "1 >= 2 : " << (t1 >= t2) << std::endl;
}