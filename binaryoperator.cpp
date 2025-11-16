#include <iostream>
using namespace std;
class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(4, 5);
    Complex c2(6, 7);
    Complex c3;
    c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}
