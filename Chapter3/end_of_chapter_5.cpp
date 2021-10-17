#include <iostream>

class Test {
public:
    void add(int i) const {a += i;};
    static int getA() {return a;};

private:
    static int a;
};

int Test::a = 0;

int main(){
    std::cout << Test::getA() << std::endl;

    Test test;
    test.add(10);

    std::cout << Test::getA() << std::endl;
}