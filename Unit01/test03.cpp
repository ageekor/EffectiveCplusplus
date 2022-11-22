#include<iostream>
#include<string.h>
using namespace std;

namespace Private {
    int cout = 12;
    int dul = 2;
}

class CTextBlock {
private:
    char* pText;
    mutable size_t textLength;
    mutable bool isValue;
public:
    size_t length() const {
        if (!isValue) {
            textLength = strlen(pText); // const成员函数内不可以修改数据成员
            isValue = true;
        }
        return textLength;
    }

};
int main() {  
    std::cout << Private::cout << endl;
    using Private::dul;
    std::cout << dul << std::endl;
    
}
