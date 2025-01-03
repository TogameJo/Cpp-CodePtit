#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x[n];
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        next_permutation(x, x + n);

        for (int i = 0; i < n; i++) {
            cout << x[i] << " ";
        }
        
        cout << endl;
    }

    return 0;
}

