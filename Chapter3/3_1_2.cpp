#include <iostream>

class A {
private:
    int v;

public:
    void set(int value);
    int& get();
    const int& get() const;
};

void A::set(int value){
    v = value;
}

int& A::get() {
    return v;
}

const int& A::get() const{
    return v;
}

int main(){
    A a;
    a.set(42);

    const A& ca = a;
    std::cout << ca.get() << std::endl;
}