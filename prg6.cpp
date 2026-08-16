#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy constructor called" << endl;
    }

    // Display student details
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {

    // Default constructor
    Student s1;
    s1.display();

    cout << endl;

    // Parameterized constructor
    Student s2(101, "Ayush");
    s2.display();

    cout << endl;

    // Copy constructor
    Student s3 = s2;
    s3.display();

    cout << "\nEnd of main()" << endl;

    return 0;
}