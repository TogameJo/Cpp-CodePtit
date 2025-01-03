#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n;
		cin>>x;
		vector<int> a(n);
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		cout<<a[x-1]<<endl;
	}
}
