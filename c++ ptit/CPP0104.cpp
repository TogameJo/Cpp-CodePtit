#include <iostream>
long long giaithua(int n)
{
	long long factorial = 1;
	for(int i = 1;i <= n;i++)
	{
		factorial *= i;
	}
	return factorial;
}
int main()
{
	int n;
	std::cin>>n;
	long long fact = 0;
	for (int i = 1;i <=n ;i++)
	{
		fact += giaithua(i);
	}
	std::cout<<fact;
}
