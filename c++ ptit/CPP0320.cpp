#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
    string s;
    cin >> s;
    if (s[0] == '0') {
        cout << "INVALID\n";
        return 0;
    }
    bool dd[10] = {0};
    for (auto x : s) {
        if (x >= '0' && x <= '9')
            dd[x - '0'] = 1;
        else {
            cout << "INVALID\n";
            return;
        }
    }
    for (auto x : dd) {
        if (x == 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
    return 0;
}
