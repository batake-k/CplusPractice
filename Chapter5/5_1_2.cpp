#include <iostream>

int main(){
    int array[] = {0, 1, 2, 3, 4};

    for(int* p = array; p != (array+5); ++p){
        std::cout << *p << std::endl;
    }
}