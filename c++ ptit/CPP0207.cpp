#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		vector<int> a(n);
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		for(int i = p;i < n;i++)
		{
			cout<<a[i]<<" ";
		}
		for(int i = 0;i < p;i++)
		{
			cout<<a[i]<<" ";
		}	
		cout<<endl;	
	}
}
