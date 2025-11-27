#include <iostream>
using namespace std;

int main() {
    int length, width;
    
    cout<<"Enter Length and Width:";
    cin >> length >> width;
    
    // Calculations
    int area = length * width;
    int perimeter = 2 * (length + width);
    
    // Output
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    
    return 0;
}
