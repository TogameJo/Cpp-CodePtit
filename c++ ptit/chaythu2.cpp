#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    	string s;
    	getline(cin,s);
    	string res = "";
		for(int i = 0;i < s.size();i++)
		{
			if(s[i] == '.')
			{
				res += " ";
			}else{
				res+= s[i];
			}
		}
		stringstream ss(res);
		string token;
		vector<string> v;
		while(ss >> token)
		{
			v.push_back(token);
		}
		reverse(v.begin(),v.end());
		for(int i = 0;i < v.size()-1;i++)
		{
			cout<<v[i]<<".";
		}
		cout<<v[v.size()-1];
		cout<<endl;
	}
}

