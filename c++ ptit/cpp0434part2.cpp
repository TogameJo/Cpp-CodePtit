#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>> n;
		vector<int> a(n);
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		vector<int> m(n);
		m[0] = a[0] * a[1];
		m[n-1] = a[n-1]*a[n-2];
		for(int i = 1;i < n-1;i++)
		{
			m[i] = a[i+1]*a[i-1];
		}
		for(const auto&x : m)
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
