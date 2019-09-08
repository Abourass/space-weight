#include <iostream>
using namespace std;

int main() {
    int earthWeight;
    int planetSelection;

    cout << "What is your weight: ";
    cin >> earthWeight;
    cout << "What plant do you wish to fight on: (What number out of 6) ";
    cin >> planetSelection;
    switch (planetSelection) {
        case 1:
            cout << "Your weight on Venus would be " << earthWeight * 0.78 << "\n";
            break;
        case 2:
            cout << "Your weight on Mars would be " << earthWeight * 0.39 << "\n";
            break;
        case 3:
            cout << "Your weight on Jupiter would be " << earthWeight * 2.65 << "\n";
            break;
        case 4:
            cout << "Your weight on Saturn would be " << earthWeight * 1.17 << "\n";
            break;
        case 5:
            cout << "Your weight on Uranus would be " << earthWeight * 1.05 << "\n";
            break;
        case 6:
            cout << "Your weight on Neptune would be " << earthWeight * 1.23 << "\n";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    return 0;
}