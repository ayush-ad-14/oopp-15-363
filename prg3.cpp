#include <iostream>
using namespace std;

// Inline function
inline int square(int n) {
    return n * n;
}

// Default argument
int add(int a, int b = 10) {
    return a + b;
}

// Function overloading
int multiply(int a, int b) {
    return a * b;
}

float multiply(float a, float b) {
    return a * b;
}

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    // Calling inline function
    cout << "Square of first number: " << square(a) << endl;

    // Calling function with default argument
    cout << "Addition: " << add(a, b) << endl;
    cout << "Addition with default value: " << add(a) << endl;

    // Calling overloaded integer function
    cout << "Integer multiplication: " << multiply(a, b) << endl;

    float x, y;
    cout << "Enter two decimal numbers: ";
    cin >> x >> y;

    // Calling overloaded float function
    cout << "Float multiplication: " << multiply(x, y) << endl;

    return 0;
}