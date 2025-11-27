#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of days: ";
    cin >> n;

    int times[n];
  
    cout << "Enter exercise times: ";
    for (int i = 0; i < n; i++) {
        cin >> times[i];
    }

    cout << "Reversed exercise times: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << times[i] << " ";
    }

    cout << endl;
    return 0;
}
