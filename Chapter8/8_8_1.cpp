#include <fstream>
#include <iostream>

int main() {
    std::ifstream ifs("8_7_1.txt");
    ifs.seekg(0, std::ios::end);

    std::cout << ifs.rdstate() << std::endl;

    ifs.get();

    std::cout << ifs.rdstate() << std::endl;
    ifs.close();
}