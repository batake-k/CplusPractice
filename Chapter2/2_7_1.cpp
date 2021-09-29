#include <iostream>

using namespace std;

void show_value(int a){
    cout << a << endl;
}

int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

int sum(int a, int b, int c, int d){
    return a + b + c + d;
}

int main(){
    int x = sum(1, 2);
    show_value(x);

    x = sum(1, 2, 3);
    show_value(x);

    x = sum(1, 2, 3, 4);
    show_value(x);
}