#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;

    string students[SIZE];
    float grades[SIZE];
    float total = 0;
    float highest, lowest;

    
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        cin >> students[i];

        cout << "Enter " << students[i] << "'s grade: ";
        cin >> grades[i];

        total += grades[i];
    }

    highest = grades[0];
    lowest = grades[0];

    
    for (int i = 1; i < SIZE; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }

        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }

    float average = total / SIZE;

    
    cout << "\n===== Student Report =====\n";

    for (int i = 0; i < SIZE; i++) {
        cout << students[i] << " : " << grades[i];

        if (grades[i] >= 90)
            cout << " (A)";
        else if (grades[i] >= 80)
            cout << " (B)";
        else if (grades[i] >= 70)
            cout << " (C)";
        else if (grades[i] >= 60)
            cout << " (D)";
        else
            cout << " (F)";

        cout << endl;
    }

    cout << "\nAverage Grade: " << average << endl;
    cout << "Highest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;

    return 0;
}
