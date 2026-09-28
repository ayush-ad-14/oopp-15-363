// update the program no 3. the input and show function should be defined outside of class as inline function.\

// 10 = 
#include <iostream>
using namespace std;
class Point {
    int x, y;
public:
    inline void input();
    inline void show();
};
inline void Point::input() {
    cout << "Enter x and y: ";
    cin >> x >> y;
}
inline void Point::show() {
    cout << "x = " << x << ", y = " << y << endl;
}
int main() {
    Point p1, p2;
    cout << "Point 1:" << endl;
    p1.input();
    p1.show();
    cout << "Point 2:" << endl;
    p2.input();
    p2.show();
    return 0;
}