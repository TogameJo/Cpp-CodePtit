#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        for (int i = 0; i < n.length(); i++) {
            if (i + 2 < n.length() && n[i] == '0' && n[i + 1] == '8' && n[i + 2] == '4') {
                i += 2; // B? qua 2 ch? s? ti?p theo
                continue;
            }
            cout << n[i];
        }
        cout << endl;
    }
}
