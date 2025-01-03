#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1;i < s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		stringstream ss(s);
		string token;
		vector<string> v;
		while(ss >> token)
		{
			v.push_back(token);
		}
		int a = v.size();
		for(int i = 0;i < a;i++)
		{
			chuanhoa(v[i]);
		}
		if(n == 1)
		{
			cout<<v[a-1]<<" ";
			for(int i = 0;i < a-1;i++)
			{
				cout<<v[i]<<" ";
			}
		}else if(n == 2)
		{
			for(int i = 1;i < a;i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<v[0]<<" ";
		}
		cout<<endl;
	}
}
