#include <iostream>
using namespace std;

int main() {
    cout << "Hallo Ryan jangan sok asik yah " << endl;
    cout << "Apa bah apa bah " << endl;
    int n;
    cout << "Enter the size (n): ";
    cin >> n;
    
    // Upper part of the heart
    for(int i = n/2; i <= n; i += 2) {
        // Print spaces before first curve
        for(int j = 1; j < n-i; j += 2) {
            cout << " ";
        }
        // Print stars for first curve
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces between curves
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        // Print stars for second curve
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower part of the heart
    for(int i = n; i >= 1; i--) {
        // Print spaces before stars
        for(int j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars
        for(int j = 1; j <= (i*2)-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
