#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r, double i):real(r), imag(i){}
    void display() {
        cout << this->real << " + " << this->imag << "i" << endl;
        count++;
    }
    const Complex operator+(const Complex& rhs) {
        return Complex(this->real + rhs.real, imag + rhs.imag);
    }
    const Complex operator-() {
        return Complex(real, -imag);
    }
    friend ostream& operator<<(ostream& output, const Complex& c) {
        output << c.real << " , " << c.imag << "i" << endl;
        return output;
    }
    static int count;
};
int Complex::count = 0;

int main() {
    Complex c1(1, 2), c2(1, 2);
    auto c3 = c1 + c2;
    cout << c3;
    c3 = -c3;
    cout << c3;
}