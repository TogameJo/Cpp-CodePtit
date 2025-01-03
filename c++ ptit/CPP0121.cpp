#include <iostream>
long long GCD(long long a,long long b)
{
	if(a == 0 || b == 0)
	{
		return a+b;
	}
    while(a != b)
    {
    	if(a > b)
    	{
    		a -= b;
		}else if (b > a)
		{
			b -= a;
		}
	}
	return a;
}
long long LCM(long long a,long long b)
{
	return (a*b)/GCD(a,b);
}
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		long long a,b;
		std::cin>>a>>b;
		std::cout<<LCM(a,b)<<" "<<GCD(a,b)<<std::endl;
	}
}
