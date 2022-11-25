#include<iostream>
using namespace std;

class Base {
    public:
    virtual ~Base() = 0;
    virtual void hello(int a = 0) {
        cout << "B::hello\n";
    }
};

Base::~Base() {}

class Derived : public Base {
    public:
    ~Derived() {
        cout << "~Derived\n";
    }
    void hello(int a = 0) override {
        cout << "D::hello\n";
    }
};

int main() {
    Base* p = new Derived;
    p->hello();
    delete p;
}