#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a = 1;
		long long b = 1;
		long long fi;
		for(int i = 1;i < n;i++)
		{
			fi = a;
			a += b;
			b = fi;
		}
		cout<<b<<endl;
	}
}
