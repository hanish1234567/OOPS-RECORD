#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v = 0) {
        value = v;
    }
    Number operator-() {
        return Number(-value);
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Number n1(10), n2;
    cout << "Original number: ";
    n1.display();
    n2 = -n1;
    cout << "After applying unary minus: ";
    n2.display();
    return 0;
}
