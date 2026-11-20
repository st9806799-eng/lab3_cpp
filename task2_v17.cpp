#include <iostream>

using namespace std;

int main() {
    int code;
    cout << "Enter group code (1-7): ";
    cin >> code;

    switch (code) {
        case 1:
            cout << "Group: IST-21 | Students: 25" << endl;
            break;
        case 2:
            cout << "Group: IST-22 | Students: 24" << endl;
            break;
        case 3:
            cout << "Group: KN-21 | Students: 28" << endl;
            break;
        case 4:
            cout << "Group: KN-22 | Students: 27" << endl;
            break;
        case 5:
            cout << "Group: IPZ-21 | Students: 30" << endl;
            break;
        case 6:
            cout << "Group: KB-21 | Students: 22" << endl;
            break;
        case 7:
            cout << "Group: KI-21 | Students: 26" << endl;
            break;
        default:
            cout << "Unknown group code!" << endl;
            break;
    }

    return 0;
}
