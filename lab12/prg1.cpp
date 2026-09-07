#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x{x}, y{y} {}
    friend Point operator+(Point, Point);
    void show()
    {
        cout << x << "," << y << endl;
    }
};
Point operator+(Point t1, Point t2)
{
    return Point(t1.x + t2.x, t1.y + t2.y);
}

int main()
{
    Point p1(10, 5);
    Point p2(-9, 16);
    p1.show();
    p2.show();
    Point p3 = p1 + p2;
    p3.show();
    return 0;
}