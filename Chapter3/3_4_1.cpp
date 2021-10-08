#include <iostream>

using namespace std;

class Vector3d {
public:
    Vector3d(){};

    void writeStatus() {
        cout << x << "," << y << "," << z << endl;
    }

private:
    float x = 0;
    float y = 0;
    float z = 0;
};

int main() {
    Vector3d vec;
    vec.writeStatus();
}