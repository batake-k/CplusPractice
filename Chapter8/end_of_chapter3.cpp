#include <fstream>

int main() {
    char data[100];

    std::ofstream ofs("end_of_chapter3.bin", std::ios::binary);
    ofs.write(data, sizeof(data));

    ofs.close();

    char data2[100];
    std::ifstream ifs("end_of_chapter3.bin", std::ios::binary);
    ifs.read(data2, sizeof(data2));

    ifs.close();
}