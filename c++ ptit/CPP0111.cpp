#include <iostream>
#include <math.h>
long long check(long long n)
{
	int x = 0;
	int a[1005];
	while(n > 0)
	{
		a[x] = n%10;
		x++;
		n /= 10;
	}
	for(int i = 0;i < x-1;i++)
	{
		if(abs(a[i] - a[i+1]) != 1)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		long long n;
		std::cin>>n;
		if(check(n))
		{
			std::cout<<"YES"<<std::endl;
		}else 
		{
			std::cout<<"NO"<<std::endl;
		}
	}
}
