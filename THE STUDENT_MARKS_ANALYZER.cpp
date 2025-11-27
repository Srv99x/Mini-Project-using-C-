#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int total = 0;  // to store total marks

    cout << "Enter marks of " << n << " students:\n";

    for (int i = 1; i <= n; i++) {
        int mark;
        cout << "Student " << i << ": ";
        cin >> mark;
        total += mark;
    }

    double average = (double)total / n;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

 
    return 0;
}
