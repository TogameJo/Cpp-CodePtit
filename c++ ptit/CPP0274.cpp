#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long countt[100005] = {0}; 

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            countt[a[i]]++;
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (countt[a[i]] >= 2) {
                sum += countt[a[i]];
                countt[a[i]] = 0;
            }
        }

        cout << sum << endl;
    }

    return 0;
}

