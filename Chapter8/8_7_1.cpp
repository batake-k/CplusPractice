#include <fstream>
#include <iostream>

int main() {
    std::ofstream ofs("8_7_1.txt");
    ofs << "Hello, world" << std::endl;

    ofs.seekp(7);

    ofs << "file seek" << std::endl;
    ofs.close();
}