#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a, a + n); // S?p x?p m?ng
        
        int minDiff = a[1] - a[0]; // Gi? s? kho?ng c�ch nh? nh?t l� gi?a ph?n t? d?u ti�n v� th? hai
        for (int i = 2; i < n; i++) {
            minDiff = min(minDiff, a[i] - a[i - 1]); // C?p nh?t minDiff n?u t�m th?y kho?ng c�ch nh? hon
        }
        
        cout << minDiff << endl;
    }
    
    return 0;
}

