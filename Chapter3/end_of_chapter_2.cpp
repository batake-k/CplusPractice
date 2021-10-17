class Vector3d {
private:
    float x = 0, y = 0, z = 0;

public:
    Vector3d();
    Vector3d(float _x, float _y) : x(_x), y(_y) {};
    Vector3d(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {};
};