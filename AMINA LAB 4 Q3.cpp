#include <iostream>
using namespace std;

int main() {
    int scores[15];

    cout << "Enter scores of 15 students: ";
    for (int i = 0; i < 15; i++) {
        cin >> scores[i];
    }

    // Bubble Sort
    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 14 - i; j++) {
            if (scores[j] > scores[j + 1]) {
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    cout << "Scores in ascending order: ";
    for (int i = 0; i < 15; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
