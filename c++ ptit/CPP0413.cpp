#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a;
		for (int i = 0;i < n;i++)
		{
			int value;
			cin>>value;
			a.push_back(value);
		}
		sort(a.begin(),a.end());
		for(int i = 0;i < n;i++)
		{
			if(i % 2 == 0)
			{
				cout<<a[n-i/2-1]<<" ";
			}else
			{
				cout<<a[i/2]<<" ";
			}
		}
		cout<<endl;
	}
}

