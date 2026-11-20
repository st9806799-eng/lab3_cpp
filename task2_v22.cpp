#include <iostream>

using namespace std;

int main() {
    int code;
    cout << "Enter constellation code (1-7): ";
    cin >> code;

    switch (code) {
        case 1:
            cout << "Constellation: Orion | Stars: 204" << endl;
            break;
        case 2:
            cout << "Constellation: Ursa Major | Stars: 125" << endl;
            break;
        case 3:
            cout << "Constellation: Ursa Minor | Stars: 20" << endl;
            break;
        case 4:
            cout << "Constellation: Cassiopeia | Stars: 90" << endl;
            break;
        case 5:
            cout << "Constellation: Leo | Stars: 70" << endl;
            break;
        case 6:
            cout << "Constellation: Scorpius | Stars: 100" << endl;
            break;
        case 7:
            cout << "Constellation: Lyra | Stars: 45" << endl;
            break;
        default:
            cout << "Unknown constellation code!" << endl;
            break;
    }

    return 0;
}
