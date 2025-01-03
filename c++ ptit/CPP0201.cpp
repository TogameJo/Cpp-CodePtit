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
        
        int minDiff = a[1] - a[0]; // Gi? s? kho?ng cách nh? nh?t là gi?a ph?n t? d?u tiên và th? hai
        for (int i = 2; i < n; i++) {
            minDiff = min(minDiff, a[i] - a[i - 1]); // C?p nh?t minDiff n?u tìm th?y kho?ng cách nh? hon
        }
        
        cout << minDiff << endl;
    }
    
    return 0;
}

