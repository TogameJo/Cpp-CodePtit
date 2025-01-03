#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		sort(m.begin(), m.end());
		cout << m[k - 1] << endl;
	}
}
