class A {
public:
    explicit A(int v) : m_v(v) {};
    int v() const { return m_v; };

private:
    int m_v;
};

int main() {
    A y(42);
    y.v() == 42;
}