#include <iostream>
using namespace std;

class BankAccount {
private:
    // Private data members for data hiding
    int accountNo;
    float balance;

public:
    // Function to take account details
    void input() {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit money
    void deposit(float amount) {
        balance += amount;
        cout << "Amount deposited successfully." << endl;
    }

    // Withdraw money
    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\nAccount Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    float amount;

    account.input();

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);
    account.display();
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    account.display();

    return 0;
}