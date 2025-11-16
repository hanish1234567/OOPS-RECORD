#include <iostream>
using namespace std;
class Counter {
    int value;
public:
    void setValue(int v) {
        value = v;
    }
    void display() {
        cout << "Current value: " << value << endl;
    }
    void operator++() {
        value++;
    }
    void operator--() {
        value--;
    }
};
int main() {
    Counter c;
    c.setValue(10);
    cout << "Initial value:" << endl;
    c.display();
    ++c; 
    cout << "After increment:" << endl;
    c.display();
    --c; 
    cout << "After decrement:" << endl;
    c.display();
    return 0;
}