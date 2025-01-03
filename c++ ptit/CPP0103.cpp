#include <iostream>
#include <iomanip>
int main()
{
	int n;
	std::cin>>n;
    double sum = 0;
	for(int i = 1;i <= n;i++)
	{
		sum += (double)1/i;
	}
	std::cout<<std::fixed<<std::setprecision(4)<<sum;
}
