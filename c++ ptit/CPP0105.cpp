#include <iostream>
int solocphat(int n)
{
	int temp;
	while(n != 0)
	{
		temp = n % 10;
		if(temp != 0 && temp != 6 && temp != 8)
		{
			return 0;
		}
		n /= 10;
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
		if(solocphat(n))
		{
			std::cout<<"YES"<<std::endl;
		}else std::cout<<"NO"<<std::endl;
	}
}
