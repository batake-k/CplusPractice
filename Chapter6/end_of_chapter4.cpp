class A {};

class Sp {
public:
    explicit Sp(A* p) : p(p) {};
    ~Sp() {
        delete p;
    }

    A* operator->() const {
        return p;
    }

    A& operator*() const {
        return *p;
    }

private:
    A* p = nullptr;
};