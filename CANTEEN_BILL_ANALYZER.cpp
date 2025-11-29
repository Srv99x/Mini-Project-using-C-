// Problem 2: Count Positive and Negative Numbers (Weather Sensor Data)
// 🧩 Problem Story:

// A weather station records temperature readings during the day.
// Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

// Your job is to analyze the data and find how many readings are positive, negative, and zero.

// Input Format:

// The first line contains an integer n — the number of readings.

// The second line contains n space-separated integers representing the readings.

// 🖥 Output Format:

// Print three lines as shown:
// Positive = x
// Negative = y
// Zero = z

// Example 1:

// Input
// 6
// 3 -2 0 7 -5 8

// Output
// Positive = 3
// Negative = 2
// Zero = 1

#include <iostream>
using namespace std;

int main() {
    cout << "Enter No. of student and days: " ;
    int n, m;
    cin >> n >> m;

    int bill[n][m];
	cout << "Enter bill ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> bill[i][j];
        }
    }

    int studentTotal[n] = {0};
    int dayTotal[m] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }

    // Print student totals
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " total: Rs" << studentTotal[i] << endl;
    }

    // Find day with highest collection
    int maxCollection = dayTotal[0];
    int bestDay = 1;

    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > maxCollection) {
            maxCollection = dayTotal[j];
            bestDay = j + 1;
        }
    }

    cout << "\nHighest collection on Day " << bestDay << endl;

    // Find highest spender(s)
    int highestSpend = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > highestSpend)
            highestSpend = studentTotal[i];
    }

    cout << "Highest spender: ";

    bool firstPrinted = false;
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == highestSpend) {
            if (firstPrinted)
                cout << " and ";
            cout << "Student " << i + 1;
            firstPrinted = true;
        }
    }

    return 0;

}
