#include <iomanip>
#include <iostream>

using namespace std;

void show_value(float f){
    cout << f << endl;
}

int main(){
    // 1.5.1 int型に暗黙的にキャストされる際、小数点以下の情報を失ってしまうため、float型に変更
    float i = 42.195f;
    show_value(i);

    // 1.5.2 32bitに収めるために丸めを行うため、100.001を格納する時点で誤差が生じている。
    float f = 100.001f;
    cout << f << endl;
    cout << fixed << setprecision(10) << f << endl;

    // 小数点以下は同じでも、coutの表示桁数の関係で、-100することで誤差が目に見えるようになる。
    cout << defaultfloat << 100.0009f << endl; // 出力: 100.001
    cout << 0.0009f << endl; // 出力: 0.0009

    // 1.5.3
    int j = 0;
    *(&j) = 42;
    cout << j << endl;
}