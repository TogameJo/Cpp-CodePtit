#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int checkchan(int n)
{
	int countchan = 0;
	int countle = 0;
	while(n > 0)
	{
		int temp = n % 10;
		if (temp % 2 != 0)
		{
			countle++;
		}else 
		{
			countchan++;
		}
		n /= 10;
	}
	if(countchan <= countle)
	{
		return 0;
	}else
	return 1;
}
int checkle(int n)
{
	int countchan = 0;
	int countle = 0;
	while(n > 0)
	{
		int temp = n % 10;
		if (temp % 2 != 0)
		{
			countle++;
		}else 
		{
			countchan++;
		}
		n /= 10;
	}
	if(countchan >= countle)
	{
		return 0;
	}else
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		int check = 1;
		while(cin>>num)
		{
			if ((num % 2 == 0 && checkchan(num)) || (num % 2 != 0 && checkle(num))) {
                check = 1;
            } else {
                check = 0;
            }	
		}
		if(check == 1)
		{
			cout<<"YES"<<endl;
		}else
		{
			cout<<"NO"<<endl;
		}
            
    }
}


