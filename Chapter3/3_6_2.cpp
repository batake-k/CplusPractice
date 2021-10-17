#include <iostream>

class Test {
private:
    int a = 0;

public:
    void useThisPointer(int a) { this->a = a; };
    void notUseThisPointer(int a) { a = a; };

    int getA() const { return a; };
};

int main(){
    Test test1;
    test1.useThisPointer(1);
    std::cout << "use this pointer: " << test1.getA() << std::endl;

    Test test2;
    test2.notUseThisPointer(1);
    std::cout << "not use this pointer: " << test2.getA() << std::endl;
}