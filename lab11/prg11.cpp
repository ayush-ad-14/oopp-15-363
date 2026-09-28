#include <iostream>
using namespace std;

class Billing {
public:
    int calculate(int price, int quantity) {
        return price * quantity;
    }

    float calculate(float price, float discount) {
        return price - (price * discount / 100);
    }

    string calculate(string item, string category) {
        return item + " - " + category;
    }
};

int main() {
    Billing bill;

    int total = bill.calculate(500, 3);
    float finalPrice = bill.calculate(2000.0f, 10.0f);
    string details = bill.calculate("Laptop", "Electronics");

    cout << "Total for 3 items: Rs. " << total << endl;
    cout << "Price after discount: Rs. " << finalPrice << endl;
    cout << "Item Details: " << details << endl;

    return 0;
}