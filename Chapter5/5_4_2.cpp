#include <iostream>

class Test {
public:
    Test() {std::cout << "Test()" << std::endl;}
    Test(int a) {std::cout << "Text(int a)" << std::endl;}
    
private:

};

int main(){
    Test* test_array = new Test[2]{
        Test(10),
    };

    delete [] test_array;
}