#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i = 0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		reverse(a.begin(),a.end());
		for(int i = 0;i < k;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
