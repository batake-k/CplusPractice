#include <iostream>

class Test {
public:
    Test();
    Test(int _i) : i(_i) {};

    friend int add(const Test& test1, const Test& test2);
private:
    int i;
};

int add(const Test& test1, const Test& test2){
    return test1.i + test2.i;
}

int main() {
    Test t1(1), t2(2);
    std::cout << add(t1, t2) << std::endl;
}