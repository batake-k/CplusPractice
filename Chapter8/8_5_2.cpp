#include <string>
#include <fstream>
#include <iostream>

int main() {
    std::ifstream ifs;
    ifs.open("8_5_2.cpp", std::ios::in);

    std::string line;

    while (!ifs.eof()) {
        std::getline(ifs, line);
        std::cout << line << std::endl;
    }

    ifs.close();
}