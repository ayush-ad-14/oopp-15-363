// write a program to create a class for Point having x and y, create two method as input and show. Input method should take value of
// x and y from keyboard and show will print the value of x and y. create any two objects in main and call input and show method
// respectively.

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    void input() {
        cout << "Enter x: ";
        cin >> x;

        cout << "Enter y: ";
        cin >> y;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Point p1, p2;

    cout << "Enter coordinates of Point 1:\n";
    p1.input();

    cout << "\nEnter coordinates of Point 2:\n";
    p2.input();

    cout << "\nPoint 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}