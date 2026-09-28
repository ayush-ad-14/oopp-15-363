// Develop a program to demonstrate parameter passing techniques (call by value, reference, andaddress) and analyze their effects on
// variable modification.

#include <iostream>
using namespace std;

class Demo {
public:
    void callByValue(float x) {
        x = x + (x * 10 / 100);
    }

    void callByReference(float &x) {
        x = x + (x * 10 / 100);
    }

    void callByAddress(float *x) {
        *x = *x + (*x * 10 / 100);
    }
};

int main() {
    Demo d;

    float a = 1000;
    float b = 1000;
    float c = 1000;

    d.callByValue(a);
    cout << "After Call by Value: " << a << endl;

    d.callByReference(b);
    cout << "After Call by Reference: " << b << endl;

    d.callByAddress(&c);
    cout << "After Call by Address: " << c << endl;

    return 0;
}