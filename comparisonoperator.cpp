#include <iostream>
using namespace std;

class Time {
    int hour, min, sec;
public:
    Time(): hour(0), min(0), sec(0) {}

    Time(int h, int m, int s) : hour(h), min(m), sec(s) {}
    bool operator==(const Time& t) const {
        return (hour == t.hour && min == t.min && sec == t.sec);
    }

    bool operator<(const Time& t) const {
        if (hour < t.hour) return true;
        else if (hour == t.hour && min < t.min) return true;
        else if (hour == t.hour && min == t.min && sec < t.sec) return true;
        return false;
    }

    bool operator>(const Time& t) const {
        if (hour > t.hour) return true;
        else if (hour == t.hour && min > t.min) return true;
        else if (hour == t.hour && min == t.min && sec > t.sec) return true;
        return false;
    }

    void display() const {
        cout << hour << ":" << min << ":" << sec << endl;
    }
};

int main() {
    Time t1(10, 20, 30);
    Time t2(10, 20, 25);

    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();

    if (t1 == t2)
        cout << "Both times are equal" << endl;
    else if (t1 > t2)
        cout << "Time 1 is greater than Time 2" << endl;
    else
        cout << "Time 1 is less than Time 2" << endl;

    return 0;
}

