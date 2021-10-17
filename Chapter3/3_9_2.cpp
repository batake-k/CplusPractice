#include <iostream>

using namespace std;

class Test {
private:
    static int count;

public:
    Test() { ++count; };
    static int getCount() { return count; };
};

int Test::count = 0;

int main() {
    cout << Test::getCount() << endl;

    for(int i=0; i<10; ++i){
        Test test;
    }

    cout << Test::getCount() << endl;
}