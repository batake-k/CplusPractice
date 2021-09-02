#include <iostream>

using namespace std;

int main(){
    auto a = 1 + 2 * 3 - 4;
    cout << a << endl;

    auto b = (1 + 2) * 3 - 4;
    cout << b << endl;

    int i = 0;
    i = i * (2 + 4);
    i = i % 3;
    cout << i << endl;
}