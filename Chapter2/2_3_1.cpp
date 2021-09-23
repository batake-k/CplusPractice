#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int& j = i;
    j = 42;
    cout << i << endl;
}