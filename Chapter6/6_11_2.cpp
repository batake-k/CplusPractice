class A {
public:
    void foo() const {};
};

class B {
public:
    operator const A&() { return a; }
private:
    A a;
};

int main() {
    B b;
    static_cast<const A&>(b).foo();
}