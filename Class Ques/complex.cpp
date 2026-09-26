#include <iostream>
using namespace std;

class complex {
    int real, img;

public:
    complex(int r = 0, int i = 0) : real(r), img(i) {}

    void show() {
        cout << real << "," << img << endl;
    }
};

int main() {
    complex c1(44, 3);
    complex c2;

    c1.show();
    c2.show();

    return 0;
}