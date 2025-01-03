#include <bits/stdc++.h>
using namespace std;
void viethoa(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1;i < s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
}
void vietthuong(string &s)
{
	for(int i = 0;i < s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
}
bool daucau(const string &s) {
    return s.find_first_of(".?!") != string::npos;
}
string xoadau(string &s)
{
	string res = "";
	for(int i = 0;i < s.size();i++)
	{
		if(s[i] != '!' && s[i] != '.' && s[i] != '?')
		{
			res += s[i];
		}
	}
	return res;
}
int main()
{
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	vector<string> v;
	while(ss >> token)
	{
		v.push_back(token);
	}
	int n = v.size();
	for(int i = 0;i < n;i++)
	{
	    vietthuong(v[i]);
	}
	viethoa(v[0]);
	for(int i = 0;i < n;i++)
	{	
		cout<<xoadau(v[i])<<" ";
		if(daucau(v[i]))
		{
			cout<<endl;
			viethoa(v[i+1]);
		}
	}
}
