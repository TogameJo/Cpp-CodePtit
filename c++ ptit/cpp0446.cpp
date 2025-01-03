#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		int res = INT_MAX;
		for(int i = 0;i < n-1;i++)
		{
			for(int j = i+1;j < n;j++)
			{
				int check = a[i]+a[j];
				if(abs(check) < abs(res))
				{
					res = check;
				}
			}
		}
		cout<<res<<endl;
	}
}
