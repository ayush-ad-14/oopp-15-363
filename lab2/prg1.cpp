// Develop a program to demonstrate parameter passing techniques (call by value, reference, and 
// address) and analyze their effects on variable modification.

#include <iostream>
using namespace std;

class Demo {
public:
    void value(int x) {
        x = x + 10;
    }

    void reference(int &x) {
        x = x + 10;
    }

    void address(int *x) {
        *x = *x + 10;
    }
};

int main() {
    Demo d;

    int a = 10, b = 10, c = 10;

    d.value(a);
    cout << "Call by Value: " << a << endl;

    d.reference(b);
    cout << "Call by Reference: " << b << endl;

    d.address(&c);
    cout << "Call by Address: " << c << endl;

    return 0;
}