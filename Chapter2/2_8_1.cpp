#include <iostream>

using namespace std;

int main(){
    auto show_value = [](int a){
        cout << a << endl;
    };

    show_value(42);
}