#include <iostream>

void show(int v) {
    std::cout << v << std::endl;
}

void enumerate(int* f, int* e, void (*func)(int)) {
    for(auto iter=f; iter!=e; ++iter) {
        func(*iter);
    }
}

int main() {
    int array[] = {1,2,3,5,7,11,13};

    std::size_t length = sizeof(array) / sizeof(array[0]);
    enumerate(array, array+length, show);
}