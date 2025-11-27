#include <iostream>
using namespace std;

int main() {
    int A[10][7];
    int totalPresent[10] = {0};
    int totalDay[7] = {0};

    cout << "Enter attendance of 10 students for 7 days (1 for Present, 0 for Absent):" << endl;

    // Taking input
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> A[i][j];
        }
    }

    // Calculating totals
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            totalPresent[i] += A[i][j]; // Total present days for each student
            totalDay[j] += A[i][j];     // Total present students on each day
        }
    }

    cout << "\nWeekly Attendance Summary" << endl;
    cout << "--------------------------" << endl;

    cout << "\nTotal Present Days per Student:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << totalPresent[i] << endl;
    }

    // Finding student with highest attendance
    int maxAttendance = totalPresent[0];
    int topStudent = 1;
    for (int i = 1; i < 10; i++) {
        if (totalPresent[i] > maxAttendance) {
            maxAttendance = totalPresent[i];
            topStudent = i + 1;
        }
    }

    // Finding day with lowest attendance
    int minDayAttendance = totalDay[0];
    int lowDay = 1;
    for (int j = 1; j < 7; j++) {
        if (totalDay[j] < minDayAttendance) {
            minDayAttendance = totalDay[j];
            lowDay = j + 1;
        }
    }

    cout << "\nStudent with Highest Attendance: Student " << topStudent
         << " (" << maxAttendance << " Days)" << endl;
    cout << "Day with Lowest Overall Attendance: Day " << lowDay << endl;

    return 0;
}
