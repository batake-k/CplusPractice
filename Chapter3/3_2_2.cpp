#include <iostream>

using namespace std;

class Test {
public:
    Test();
    ~Test();
private:
};

Test::Test() {
    cout << "call constructor" << endl;
}

Test::~Test() {
    cout << "call destructor" << endl;
}

int main() {
    Test test;
}