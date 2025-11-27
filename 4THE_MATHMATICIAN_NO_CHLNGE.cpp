#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // --- Check if prime ---
    bool isPrime = true;

    if (n <= 1)
        isPrime = false;
    else {
        for (int i = 2; i < n; i++) { // faster check
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // --- Output results ---
    cout << "\nNumber: " << n << endl;

    if (isPrime)
        cout << "It is a Prime Number" << endl;
    else
        cout << "It is NOT a Prime Number" << endl;

    if (n % 2 == 0)
        cout << "It is an Even Number" << endl;
    else
        cout << "It is an Odd Number" << endl;

    return 0;
}

