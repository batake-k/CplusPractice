#include <iostream>

using namespace std;

int main(){
    int array[] = {4, 2, 1, 9, 5};

    int i = 4;

    // 1.7.1
    while(i >= 0){
        cout << array[i] << endl;
        --i;
    }
    cout << endl;

    // 1.7.2
    for(i=4; i>=0; --i){
        cout << array[i] << endl;
    }
    cout << endl;

    // 1.7.3
    i = 4;
    do{
        cout << array[i] << endl;
        --i;
    }while(i >= 0);
}