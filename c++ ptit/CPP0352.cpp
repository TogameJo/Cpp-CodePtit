#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	map <string, int> mp;
	while(t--)
	{
		string s;
		getline(cin,s);
		for(int i = 0;i < s.size();i++)
		{
			s[i] = tolower(s[i]);
		}
		stringstream ss(s);
		vector<string> v;
		string token;
		string res = "";
		while(ss >> token)
		{
			v.push_back(token);
		}
		int n = v.size();
		res += v[n-1];
		for(int i = 0;i < n-1;i++)
		{
			res += v[i][0];
		}
		if(mp[res] == 0)
		{
			cout<<res<<"@ptit.edu.vn"<<endl;
		}else
		{
			cout<<res<<mp[res]+1<<"@ptit.edu.vn"<<endl;
		}
		mp[res]++;
	}
}
