#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, m;
        cin >> a >> m;
        int x ; 
        int check = 0;

        for (int i = 0; i < m; i++) {
            if ((a * i) % m == 1) {
                x = i;
                check = 1;
                break; 
            }
        }

        if (check) {
            cout << x << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}

