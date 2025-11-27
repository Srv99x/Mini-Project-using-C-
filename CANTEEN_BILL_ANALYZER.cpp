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