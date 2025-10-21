#include <iostream>
using namespace std;

int main() {
    int n, serialNumber, found = 0;

    cout << "Enter total number of antique items: ";
    cin >> n;

    int items[n];
    cout << "Enter serial numbers of items: ";
    for (int i = 0; i < n; i++) {
        cin >> items[i];
    }

    cout << "Enter serial number of pocket watch to search: ";
    cin >> serialNumber;

    for (int i = 0; i < n; i++) {
        if (items[i] == serialNumber) {
            cout << "Pocket watch found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Pocket watch with serial number " << serialNumber << " not found." << endl;

    return 0;
}
