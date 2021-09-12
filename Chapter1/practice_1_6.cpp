#include <string>
#include <iostream>

using namespace std;

int main(){
    int array[] = {4,2,1,9,5};
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl;

    // null文字で文字列が終了したことを意味する
    char s[] = "aa\0aa";
    cout << s << endl;

    std::string s2 = "aa\0aa";
    cout << s2 << endl;
}