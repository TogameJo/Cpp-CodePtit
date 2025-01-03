#include <iostream>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int sum = 0;
		int n;
		std::cin>>n;
		for(int i = 1;i <=n;i++)
		{
			sum += i;
		}
		std::cout<<sum<<std::endl;
	}
	return 0;
}
