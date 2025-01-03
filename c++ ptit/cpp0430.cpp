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
		map<int,bool> mp;
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
			mp[a[i]] = true;
		}
		int count = 0;
		for(int i = *min_element(a.begin(), a.end());i<*max_element(a.begin(), a.end());i++)
		{
			if(mp[i] == false)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}
