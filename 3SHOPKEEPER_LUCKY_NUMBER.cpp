#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check Even or Odd
    if (num % 2 == 0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;

    // Check Divisible by 5
    if (num % 5 == 0)
        cout << "Divisible by 5" << endl;
    else
        cout << "Not Divisible by 5" << endl;

    return 0;
}

