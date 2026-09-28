#include <iostream>
using namespace std;
class Point {
    int x, y;

public:
    void setPoint(int a, int b) {
        x = a;
        y = b;
    }
    void show() {
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
};

int main() {
    Point p;

    p.setPoint(10, 20);
    p.show();

    return 0;
}