#include <iostream>

using namespace std;

class Vector3d {
private:
    float x, y, z;

public:
    Vector3d() : Vector3d(0, 0, 0) {};
    explicit Vector3d(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {};

    friend Vector3d add(const Vector3d& lhs, const Vector3d& rhs);
    friend Vector3d sub(const Vector3d& lhs, const Vector3d& rhs);
    void dump() const;
};

Vector3d add(const Vector3d& lhs, const Vector3d& rhs) {
    Vector3d result;
    result.x = lhs.x + rhs.x;
    result.y = lhs.y + rhs.y;
    result.z = lhs.x + rhs.z;
    return result;
}

Vector3d sub(const Vector3d& lhs, const Vector3d& rhs) {
    Vector3d result;
    result.x = lhs.x - rhs.x;
    result.y = lhs.y - rhs.y;
    result.z = lhs.x - rhs.z;
    return result;
}

void Vector3d::dump() const {
    std::cout << x << ", " << y << ", " << z << std::endl;
}

int main() {
    Vector3d a(1, 1, 1), b(1, 2, 3);
    Vector3d c = add(a, b);
    c.dump();

    Vector3d d = sub(a, b);
    d.dump();
}