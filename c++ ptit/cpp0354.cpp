#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		int n = s.size();
		map<char,int> mp;
		for(int i = 0;i < n;i++)
		{
			mp[s[i]]++;
		}
		for(int i = 0;i < n;i++)
		{
			if(mp[s[i]] >= 1)
			{
				cout<<s[i]<<mp[s[i]];
				mp[s[i]] = 0;
			}
		}
		cout<<endl;
	}
}
