#include <iostream>
#include <cmath>
using namespace std;
long long isprime(long long n)
{
	if(n < 2)
	{
		return 0;
	}
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n % i == 0)
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
		long long n;
		cin>>n;
		for(int i = 2;i <= n/2;i++)
		{
			if(n % i == 0 && isprime(i))
			{
				while(n % i == 0)
				{
					cout<<i<<" ";
					n /= i;
				}
			}
		}
		if(n > 1)
			{
				cout<<n;
			}
		cout<<endl;
	}
}
