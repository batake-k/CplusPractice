#include <string>
#include <iostream>

using namespace std;

int main(){
    string s;

    do {
        cout << "please input text > ";
        getline(cin, s);
        cout << s << endl;
    } while(s != "");
}