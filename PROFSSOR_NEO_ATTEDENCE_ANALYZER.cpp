#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int attendance[n];
    cout << "Enter attendance record (0 for absent, 1 for present): ";
    for (int i = 0; i < n; i++) {
        cin >> attendance[i];
    }

    int present = 0, absent = 0;

    for (int i = 0; i < n; i++) {
        if (attendance[i] == 1)
            present++;
        else if (attendance[i] == 0)
            absent++;
    }

    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;

    return 0;
}
