#include <iostream>

using namespace std;

void hello_world(){
    cout << "hello, world" << endl;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    hello_world();
    cout << "sum(1, 2, 3): " << sum(1, 2, 3) << endl;
}