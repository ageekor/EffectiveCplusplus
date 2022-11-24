#include<iostream>
using namespace std;

class Uncopyable {
    protected:
    Uncopyable() {}
    ~Uncopyable() {}
    private:
    Uncopyable(const Uncopyable&);
    Uncopyable& operator=(const Uncopyable&);
};

class A : private Uncopyable{
    int a;
    public:
    A(int a = 0):a(a) {}
};

int main() {
    A a(3);
    // A b(a);
    // b = a;
}