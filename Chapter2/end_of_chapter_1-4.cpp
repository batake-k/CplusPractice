#include <iostream>
#include <typeinfo>

using namespace std;

class Vector3d{
public:
    using var_type = int;

    void setX(var_type a) {x = a;};
    void setY(var_type a) {y = a;};
    void setZ(var_type a) {z = a;};

    var_type getX() {return x;};
    var_type getY() {return y;};
    var_type getZ() {return z;};
private:
    var_type x, y, z;
};

Vector3d set(Vector3d::var_type x, Vector3d::var_type y, Vector3d::var_type z = 0.){
    Vector3d vec3d;
    vec3d.setX(x);
    vec3d.setY(y);
    vec3d.setZ(z);
    return vec3d;
}

int main(){
    cout << "please input 3 int like [1 2 3]" << endl << "> ";
    Vector3d::var_type x, y, z;
    cin >> x >> y >> z;

    auto vec3d = set(x, y, z);
    cout << "vec3d = (" << vec3d.getX() << ", " << vec3d.getY() << ", " << vec3d.getZ() << ")" << endl;
}
