#include <iomanip>
#include <iostream>

int main() {
    std::cout << std::setw(8) << std::right << std::setfill('0') << 1234 << std::endl;
}