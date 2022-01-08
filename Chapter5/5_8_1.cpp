#include <iostream>
#include <utility>

void test(int&& rr){
    std::cout << rr << std::endl;
}

int main(){
    int i = 10;
    test(std::move(i));
}