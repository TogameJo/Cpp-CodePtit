#include <iostream>
#include <math.h>
int check(int n)
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
	int n;
	std::cin>>n;
	if(check(n))
	{
		std::cout<<"YES";
	}else std::cout<<"NO";
}
