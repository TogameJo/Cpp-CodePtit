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
		cout<<res;
	}
}

