#include <iostream>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		char n;
		std::cin>>n;
		if(n >= 'A' && n <= 'Z')
		{
			char upper = n+('a'-'A');
			std::cout<<upper<<std::endl;
		}
		else
		{
			char lower = n-('a'-'A');
			std::cout<<lower<<std::endl;
		}
	}
	return 0;
}
