#include <string>
#include <iostream>

using namespace std;

int main(){
    // 1
    cout << "hello. message" << endl;

    // 2
    // 浮動小数点数とは元の実数の小数点を動かした桁数を指数部、動かした後の小数を仮数部として保持することで、実数を一定の誤差以内で表現する手法
    // c++で浮動小数点を扱う型はfloat, doubleなどがある

    // 3
    // else ifによって前文のif文の条件以外の場合を明示的に表現できる。ifの多重入れ子構造を改善させる。

    // 4
    string s = "abcdefg";
    for(const auto& ss : s){
        cout << ss << endl;
    }
}