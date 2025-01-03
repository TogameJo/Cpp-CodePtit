#include <iostream>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int x = 0;
        int a[105];
		int n;
		std::cin>>n;
	    while(n > 0)
	{
		a[x] = n % 10;
		x++;
		n /= 10;
	}
		if(a[0] == 6 && a[1] == 8)
		{
			std::cout<<"1"<<std::endl;
		}else std::cout<<"0"<<std::endl;
	}
	
}
