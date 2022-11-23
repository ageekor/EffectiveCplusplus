#include<iostream>
using namespace std;

class A {
    public:
    static const int x = 1;
    static void hello() {
        cout << "hello" << endl;
    }
    int operator()(int a, int b) {
        return a > b ? a : b;
    }
};
const int A::x;

void exam() {
    static int a = 2;
    cout << "hi" << endl;
    if (--a) exam();
}

int main() {
    A* p = new(A);
    cout << p->x << endl;
    cout << (*p)(3, 5) << endl;
    delete(p);
    cout << A::x << endl;
    A::hello();
    
    exam();
}