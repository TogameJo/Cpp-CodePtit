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
		vector<int> m(n);
		for(int i = 0;i < n;i++)
		{
			cin>>m[i];
		}
		int max = -2e9-1;
		for(int i = n-1;i >= 0;i--)
		{
			for(int j = i;j >= 0;j--)
			{
				if(m[i] - m[j] > max)
				{
					max = m[i]-m[j];
				}
			}
		}
		if(max <= 0)
		{
			cout<<"-1"<<endl;
		}else cout<<max<<endl;
	}
}
