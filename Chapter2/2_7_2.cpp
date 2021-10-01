#include <iostream>

using namespace std;

struct vector2d{
    float x, y;
};

int sub(int a, int b){
    return a - b;
}

vector2d sub(vector2d a, vector2d b){
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

int main(){
    cout << "10 - 20 = " << sub(10, 20) << endl;

    vector2d a = {-10, 30};
    vector2d b = {5, 10};
    auto v = sub(a, b);

    cout << "(" << a.x << ", " << a.y << ") - (" << b.x << ", " << b.y << ") = (" << v.x << ", " << v.y << ")" << endl; 
}