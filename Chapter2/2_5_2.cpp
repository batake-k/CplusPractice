#include <iostream>

using namespace std;

class Test {
public:
    using test_name = int;

    void setA(test_name _a) {a = _a;};
    test_name getA() {return a;};

private:
    test_name a;
};

int main() {
    Test test;
    test.setA(10);
    cout << test.getA() << endl;
}