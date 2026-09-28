// Implement a program to demonstrate inline functions, default arguments, and function overloading for performing arithmetic operations.

// 11 = 
#include <iostream>
using namespace std;
class Calculator {
public:
    inline int add(int a, int b = 0) {
        return a + b;
    }
    inline double add(double a, double b) {
        return a + b;
    }
    inline int multiply(int a, int b = 1) {
        return a * b;
    }
};
int main() {
    Calculator c;
    cout << "Addition: " << c.add(10, 20) << endl;
    cout << "Default Addition: " << c.add(10) << endl;
    cout << "Double Addition: " << c.add(5.5, 2.5) << endl;
    cout << "Multiplication: " << c.multiply(5, 4) << endl;
    cout << "Default Multiplication: " << c.multiply(5) << endl;
    return 0;
}