// write program no 5,6 with the help of function. The functions will update the value and print should be in main method  

#include <iostream>
using namespace std;

class Salary {
public:
    float salary;

    void updateReference(float &newSalary) {
        newSalary = newSalary + (newSalary * 10 / 100);
    }

    void updatePointer(float *newSalary) {
        *newSalary = *newSalary + (*newSalary * 10 / 100);
    }
};

int main() {
    Salary s1, s2;

    s1.salary = 50000;
    float &newSalary1 = s1.salary;
    s1.updateReference(newSalary1);

    cout << "Salary using reference: " << s1.salary << endl;

    s2.salary = 60000;
    float *newSalary2 = &s2.salary;
    s2.updatePointer(newSalary2);

    cout << "Salary using pointer: " << s2.salary << endl;

    return 0;
}