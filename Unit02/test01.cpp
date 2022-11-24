#include<iostream>
using namespace std;

template<typename T>
class NameObject {
    public:
    NameObject(string& name, const T& value):name(name), value(value) {}
    private:
    string& name;
    const T& value;
};
int main() {
    string s1 = "olddog";
    string s2 = "newdog";
    NameObject<int> p(s1, 1);
    NameObject<int> q(s2, 2);
    // p = q;
}