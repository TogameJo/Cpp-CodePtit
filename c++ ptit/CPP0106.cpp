#include <iostream>
long long isreverse(long long n){
	int temp;
	long long old = n;
	long long news = 0;
	while(n > 0)
	{
	   temp = n % 10;
	   news = news*10 + temp;
		n /= 10; 
	}
	if(news == old)
	{
		return 1;
	}else 
	return 0;
}
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		long long n;
		std::cin>>n;
		if(isreverse(n))
		{
			std::cout<<"YES"<<std::endl;
		}else 
		{
			std::cout<<"NO"<<std::endl;
		}
	}
}
