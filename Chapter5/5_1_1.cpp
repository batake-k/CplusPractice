#include <iostream>

void reverse(int* arr, int length) {
    for(int i=0; i<length/2; ++i){
        int temp = arr[i];
        arr[i] = arr[length -i -1];
        arr[length -i -1] = temp;
    }
}

int main() {
    int array[] = {0, 1, 2, 3, 4};
    reverse(array, 5);

    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;
}