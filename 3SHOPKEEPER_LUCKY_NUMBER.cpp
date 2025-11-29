// 🧮 Question 2: The Shopkeeper’s Lucky Number

// Problem Story:
// A shopkeeper named Ramesh has a lucky number. He believes that if the number is even, he will have a lucky day, and if it is odd, he will have to work harder. He also wants to check if the number is divisible by 5, as that brings him extra luck!
// Can you help Ramesh write a program to check his number?
// Task:
// Write a program that takes an integer as input and:

// Checks whether it is even or odd.

// Checks whether it is divisible by 5 or not.

// Input Format:
// The first line contains one integer — the lucky number.

// Output Format:
// Print two lines:
// First line: "Even Number" or "Odd Number"
// Second line: "Divisible by 5" or "Not Divisible by 5"
// Example 1:
// Input: 25
// Output:
// Odd Number
// Divisible by 5

// Example 2:
// Input: 12
// Output:
// Even Number
// Not Divisible by 5


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


