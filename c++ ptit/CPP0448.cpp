#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		map<int,int> count;
		for(int i =0;i < n;i++)
		{
			cin>>a[i];
		}
		for(int i = 0;i < n;i++)
		{
			count[a[i]]++;
		}
		int ok =0;
		int dem = 0;
		for(int i = 0;i < n;i++)
		{
			if(a[i] == x)
			{
				dem = count[a[i]];
				ok = 1;
				break;
			}else ok = 0;
		}
		if(ok)
		{
			cout<<dem<<endl;
		}else cout<<"-1"<<endl;
	}
}
