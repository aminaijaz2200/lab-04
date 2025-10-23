#include <iostream>
using namespace std;

int main() {
    int studentIDs[10], searchID, start = 0, end = 9, mid;
    bool found = false;

    cout << "Enter 10 student IDs in sorted order: ";
    for (int i = 0; i < 10; i++) {
        cin >> studentIDs[i];
    }

    cout << "Enter student ID to search: ";
    cin >> searchID;

    while (start <= end) {
        mid = (start + end) / 2;

        if (studentIDs[mid] == searchID) {
            cout << "Student record found at position " << mid + 1 << endl;
            found = true;
            break;
        }
        else if (studentIDs[mid] < searchID)
            start = mid + 1;
        else
            end = mid - 1;
    }

    if (!found)
        cout << "Student ID not found in the list." << endl;

    return 0;
}
