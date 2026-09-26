#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }

    Time add(Time t) {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }
};

int main() {
    Time t1(2, 45);
    Time t2(3, 30);

    cout << "First Duration: ";
    t1.display();

    cout << "Second Duration: ";
    t2.display();

    Time total = t1.add(t2);

    cout << "Total Duration: ";
    total.display();

    return 0;
}