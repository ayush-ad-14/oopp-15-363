// write a program, to create a variable as salary, assign some value into this, create another reference variable as newSalary that will
// store the reference of salary and update the salary by 10%. Show the value of salary from old variable.

#include <iostream>
using namespace std;

class Salary {
public:
    float salary;

    void update(float &newSalary) {
        newSalary = newSalary + (newSalary * 10 / 100);
    }
};

int main() {
    Salary s;

    s.salary = 50000;

    float &newSalary = s.salary;

    s.update(newSalary);

    cout << "Salary after 10% increase: " << s.salary << endl;

    return 0;
}