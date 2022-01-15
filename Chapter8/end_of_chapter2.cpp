#include <string>
#include <fstream>
#include <iostream>

int main() {
    std::string file;
    std::getline(std::cin, file);

    std::ifstream ifs(file);

    if (ifs.is_open()) {
        std::string line;
        std::getline(ifs, line);
        std::cout << line << std::endl;
    }

    ifs.close();
}