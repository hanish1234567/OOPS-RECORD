#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char str[100];
public:
    MyString() { str[0] = '\0'; }
    MyString(const char* s) { strcpy(str, s); }

    MyString operator+(const MyString& ms) {
        MyString temp;
        strcpy(temp.str, str);     
        strcat(temp.str, ms.str);   
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("World!");

    MyString s3 = s1 + s2;

    cout << "First string: ";
    s1.display();
    cout << "Second string: ";
    s2.display();
    cout << "Concatenated string: ";
    s3.display();

    return 0;
}
