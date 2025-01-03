#include <bits/stdc++.h>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
    	int n;
    	std::cin>>n;
    	for(int i = 2;i <= sqrt(n);i++)
    	{    
    	    if(n % i == 0)
    	    {
    	    	int count = 0;
    	    	while(n % i == 0)
    		{
    			count++;
    			n /= i;
			}
			std::cout<<i<<" "<<count<<" ";
			}
		}
		if (n > 1)
		{
			std::cout<<""<<n<<" "<<"1";
		}
		std::cout<<std::endl;
	}
}
