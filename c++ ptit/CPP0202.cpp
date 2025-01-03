#include <iostream>
#include <cmath>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n;
		std::cin>>n;
		int a[n];
		for(int i = 0;i < n;i++)
		{
			std::cin>>a[i];
		}
		int min = 2e9+1;
		for(int i = 0;i < n-1;i++)
		{
			for(int j = i+1;j <n;j++)
			{
				if(abs(a[i] - a[j]) <= min)
				{
					min = abs(a[i] - a[j]);
				}
			}
		}
		std::cout<<min<<std::endl;
	}
}
