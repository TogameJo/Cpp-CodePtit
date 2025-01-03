#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
    	long long n;
    	cin>>n;
    	long long a = 0;
    	for(int i = 0;i < s.size();i++)
    	{
    		a = a*10+s[i] - '0';
    		a %= n;
		}
		cout<<a<<endl;
	}
}

