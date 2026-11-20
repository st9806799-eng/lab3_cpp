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

    int evenCount = 0;
    if (d1 % 2 == 0) evenCount++;
    if (d2 % 2 == 0) evenCount++;
    if (d3 % 2 == 0) evenCount++;

    cout << "Digits: " << d1 << ", " << d2 << ", " << d3 << endl;
    cout << "Count of even digits: " << evenCount << endl;

    return 0;
}
