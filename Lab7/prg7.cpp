#include <iostream>
using namespace std;

class Car {
    int carNo;
    string model;
    float rent;

    static int totalCars;

public:
    Car(int no, string m, float r) {
        carNo = no;
        model = m;
        rent = r;
        totalCars++;
    }

    void display() {
        cout << "Car No: " << carNo << endl;
        cout << "Model: " << model << endl;
        cout << "Rent per day: " << rent << endl;
    }

    static void showTotalCars() {
        cout << "Total Cars: " << totalCars << endl;
    }

    friend void showRent(Car);
};

int Car::totalCars = 0;

void showRent(Car c) {
    cout << "Rental cost of " << c.model << ": Rs. " << c.rent << endl;
}

int main() {
    Car c1(101, "Swift", 1500);
    Car c2(102, "Creta", 2500);

    c1.display();
    cout << endl;

    c2.display();
    cout << endl;

    Car::showTotalCars();
    showRent(c1);

    return 0;
}