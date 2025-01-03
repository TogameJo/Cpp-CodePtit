#include <iostream>
#include <math.h>
int check(int n)
{
	int countchan = 0;
	int countle = 0;
	while(n > 0)
	{
		int temp = n % 10;
		if(temp % 2 == 0)
		{
			countchan++;
		}else countle++;
		n /= 10;
	}
	if(countchan == countle)
	{
		return 1;
	}else
	return 0;
}
int main()
{
	int n;
	std::cin>>n;
	if(n % 2 != 0)
	{
		return 0;
	}
	else
	{
		int a = pow(10,n-1);
	    int b = pow(10,n);
	    int count = 0;
	    for(int i = a;i < b;i++)
	    {
	    	if(check(i))
	    	{
	    		std::cout<<i<<" ";
	    		count++;
	    		if (count == 10)
	    		{
	    			std::cout<<std::endl;
	    			count = 0;
				}
			}
		}
	}
	
}
