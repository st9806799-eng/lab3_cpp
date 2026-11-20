#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a three-digit positive number: ";
    cin >> n;

    if (n < 100 || n > 999) {
        cout << "Error: the number must be three-digit!" << endl;
        return 1;
    }

    int d1 = n / 100;
    int d2 = (n / 10) % 10;
    int d3 = n % 10;

    int evenProduct = 1;
    bool hasEven = false;

    if (d1 % 2 == 0) {
        evenProduct *= d1;
        hasEven = true;
    }
    if (d2 % 2 == 0) {
        evenProduct *= d2;
        hasEven = true;
    }
    if (d3 % 2 == 0) {
        evenProduct *= d3;
        hasEven = true;
    }

    cout << "Digits: " << d1 << ", " << d2 << ", " << d3 << endl;

    if (hasEven) {
        cout << "Product of even digits: " << evenProduct << endl;
    } else {
        cout << "There are no even digits in the number." << endl;
    }

    return 0;
}
