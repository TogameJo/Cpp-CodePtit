#include <iostream>
#include <cmath>
int checksnt(int n)
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
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		for (int i = 2;i <= n;i++)
		{
			if(checksnt(i))
			{
				std::cout<<i<<" ";
			}
		}
		std::cout<<std::endl;
	}
}
