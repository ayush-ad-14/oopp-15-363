#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    // Taking input
    cout << "Enter the elements: ";
    for (auto &num : numbers) {
        cin >> num;
    }

    // Displaying elements
    cout << "Elements of the collection: ";
    for (auto num : numbers) {
        cout << num << " ";
    }

    return 0;
}