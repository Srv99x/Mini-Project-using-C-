#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Input
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;
}
