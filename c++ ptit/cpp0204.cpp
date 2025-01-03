#include <bits/stdc++.h>
using namespace std;
int isprime(int n)
{
	if(n<2)
	{
		return 0;
	}
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int count=0;
		for(int i = x;i<=y;i++)
		{
			if(isprime(i))
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}