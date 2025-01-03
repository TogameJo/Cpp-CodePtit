#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check(ll n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	else return check(n-2)+check(n-1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<long long> a(n);
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		for(int i = 0;i < n;i++)
		{
			if(check(a[i]))
			{
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
