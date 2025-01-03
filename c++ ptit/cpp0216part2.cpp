#include <bits/stdc++.h>
using namespace std;
int a[10005];
bool check(int l, int r)
{
	for(int i = l;i < r;i++)
	{
		if(a[i] > a[i+1])
		{
			for(int j = i;j < r;j++)
			{
				if(a[j] <= a[j+1])
				{
					return false;
				}
			}
		}
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		int l,r;
		cin>>l>>r;
		if(check(l,r))
		{
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
}
