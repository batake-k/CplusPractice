#include <iostream>

class Test {
public:
    int & refX() {return x;};
    const int & cRefX() const {return x;};
    void printX() {std::cout << x << std::endl;};
private:
    int x = 0;
};

int main() {
    Test test{};

    auto& x = test.refX();
    x = 10;
    test.printX();

    const auto& x2 = test.cRefX();
    // constのためエラー
    //x2 = 5;
    //test.printX();
}