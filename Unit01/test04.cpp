#include<iostream>
using namespace std;

class TextBlock {
    private:
    string text;
    public:
    TextBlock(string t):text(t){}
    const char& operator[](size_t pos) const {
        if (pos >= text.size()) {
            throw "index invalue";
        }
        return text[pos];
    }
    char& operator[](size_t pos) {
        return
        const_cast<char&> (
            static_cast<const TextBlock&>(*this)[pos]
        );
    }
};

int main() {
    TextBlock t("hello");
    cout << t[3];
}