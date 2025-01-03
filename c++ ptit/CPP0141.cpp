#include <bits/stdc++.h>
using namespace std;
int Fibo(long long n)
{
	if(n < 2)
	{
		return 1;
	}
	long long a = 1;
	long long b = 1;
    long long fi = 0;
	while(fi < n)
	{
		fi = a+b;
		a = b;
		b = fi;
	}
	if(fi == n)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		if(Fibo(n))
		{
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
}
