class A {
public:
    virtual void func() {};
private:
};

class B : public A {
public:
    void func() final {};
private:
};