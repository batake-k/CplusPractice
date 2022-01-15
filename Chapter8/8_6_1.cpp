#include <fstream>
#include <iostream>

int main() {
    char message[] = "Hello world";

    std::ofstream ofs("8_6_1.bin", std::ios::binary);
    ofs.write(message, sizeof(message));
    ofs.close();

    char buff[256];

    std::ifstream ifs("8_6_1.bin", std::ios::binary);
    ifs.read(buff, sizeof(buff));

    for (size_t i=0; i<sizeof(message); ++i){
        if (message[i] != buff[i]) {
            std::cout << "diff" << std::endl;
            break;
        }
    }

    ifs.close();
}