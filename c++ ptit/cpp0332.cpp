#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin ,s);
	for(int i = 0;i < s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string token;
	vector<string> v;
	while(ss >> token)
	{
		v.push_back(token);
	}
	int n = v.size();
	cout<<v[n-1];
	for(int i = 0;i < n-1;i++)
	{
		cout<<v[i][0];
	}
	cout<<"@ptit.edu.vn";
}
