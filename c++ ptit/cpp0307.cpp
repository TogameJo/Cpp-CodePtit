#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s1,s2;
		getline(cin,s1);
		stringstream ss1(s1);
		string token1;
		vector<string> v1;
		while(ss1 >> token1)
		{
			v1.push_back(token1);
		}
		getline(cin,s2);
		stringstream ss2(s2);
		string token2;
		vector<string> v2;
		while(ss2 >> token2)
		{
			v2.push_back(token2);
		}
		map<string,bool> mp;
		for(int i = 0;i < v2.size();i++)
		{
			mp[v2[i]] = true;
			mp[v2[i]]++;
		}
		vector<string> temp;
		for(int i = 0;i < v1.size();i++)
		{
			if(mp[v1[i]] == false )
			{
				temp.push_back(v1[i]);
			}
		}
		map<string,int> mp2;
		for(int i = 0;i < temp.size();i++)
		{
			mp2[temp[i]]++;
		}
		vector<string> res;
		for(int i = 0;i < temp.size();i++)
		{
			if(mp2[temp[i]] >= 1)
			{
				res.push_back(temp[i]);
				mp2[temp[i]] = 0;
			}
		}
		sort(res.begin(),res.end());
		for(const auto&x : res)
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
