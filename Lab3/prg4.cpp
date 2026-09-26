// implement function overloading as given specifications
// area(double radius)
// area(double length, double width)
// area(int side)
// area(double base, double height, bool triangle)
// calculate area of:
// Circle
// Rectangle
// Square
// Triangle

// 12 = 
#include <iostream>
using namespace std;
class Area {
public:
    double area(double radius) {
        return 3.14 * radius * radius;
    }
    double area(double length, double width) {
        return length * width;
    }
    int area(int side) {
        return side * side;
    }
    double area(double base, double height, bool triangle) {
        return 0.5 * base * height;
    }
};
int main() {
    Area a;
    double radius, length, width, base, height;
    int side;
    cout << "Enter radius : ";
    cin >> radius;
    cout << "Circle Area : " << a.area(radius) << endl;
    cout << "Enter length and width : ";
    cin >> length >> width;
    cout << "Rectangle Area : " << a.area(length, width) << endl;
    cout << "Enter side : ";
    cin >> side;
    cout << "Square Area : " << a.area(side) << endl;
    cout << "Enter base and height(triangle ki ) : ";
    cin >> base >> height;
    cout << "Triangle Area : " << a.area(base, height, true) << endl;
    return 0;
}