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
		int count = s.size();
		for(int i = 0;i < n-1;i++)
		{
			for(int j = i+1;j < n;j++)
			{
				if(s[i] == s[j])
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}
