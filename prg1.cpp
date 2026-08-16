#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];

    // Taking input
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        s[i].input();
    }

    // Displaying records
    cout << "\n===== STUDENT RECORDS =====\n";

    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    return 0;
}