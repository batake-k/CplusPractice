#include <iostream>

class Test {
public:
    Test() {std::cout << "Test()" << std::endl;}
    Test(int a) {std::cout << "Text(int a)" << std::endl;}
    
private:

};

int main(){
    Test* test1 = new Test();
    Test* test2 = new Test(10);

    delete test1;
    delete test2;
}