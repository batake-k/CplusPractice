#include <iostream>

using namespace std;

void show_message(int value){
    if(10 > value || value >= 20){
        cout << "10以上20未満ではありません" << endl;
    }else{
        cout << "10以上20未満です" << endl;
    }
}

int main(){
    show_message(9);
    show_message(15);
    show_message(20);

    int a = 2;
    switch (a + 1)
    {
    case 1:
        cout << "a + 1は1です" << endl;
        break;

    case 2:
        cout << "a + 1は2です" << endl;
        break;

    case 3:
        cout << "a + 1は3です" << endl;
        break;
    }
}