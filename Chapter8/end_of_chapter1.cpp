#include <iomanip>
#include <iostream>

int main() {
    std::cout << std::hex << std::setw(16) << std::left << std::setfill('=')
        << 12345678 << std::endl;
}