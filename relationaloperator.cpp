#include <iostream>
using namespace std;

class Student {
    int feet, inches;
public:
    Student(int f = 0, int i = 0) : feet(f), inches(i) {}

    void getHeight() {
        cout << "Enter height (feet and inches): ";
        cin >> feet >> inches;
    }

    bool operator==(const Student& s) const {
        return (feet == s.feet && inches == s.inches);
    }

    bool operator<(const Student& s) const {
        if (feet < s.feet) return true;
        else if (feet == s.feet && inches < s.inches) return true;
        return false;
    }

    bool operator>(const Student& s) const {
        if (feet > s.feet) return true;
        else if (feet == s.feet && inches > s.inches) return true;
        return false;
    }

    void showHeight() const {
        cout << feet << " feet " << inches << " inches";
    }
};

int main() {
    Student s1, s2;
    cout << "Enter height of Student 1\n";
    s1.getHeight();
    cout << "Enter height of Student 2\n";
    s2.getHeight();

    cout << "\nStudent 1: "; s1.showHeight(); cout << endl;
    cout << "Student 2: "; s2.showHeight(); cout << endl;

    if (s1 == s2)
        cout << "Both students have equal height." << endl;
    else if (s1 > s2)
        cout << "Student 1 is taller." << endl;
    else
        cout << "Student 2 is taller." << endl;

    return 0;
}
