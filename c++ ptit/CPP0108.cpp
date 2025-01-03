#include <bits/stdc++.h>
using namespace std;
int tang(int n)
{
	while(n > 9)
	{
		if((n % 10) <= ((n/10)%10))
		{
			return 0;
		}else
		n /= 10;	
	}
	return 1;
}
int giam(int n )
{
	while(n > 9)
	{
		if((n%10) >= ((n/10)%10))
		{
			return 0;
		}else
		n /= 10; 
	}
	return 1;
}
int checksnt(int n)
{
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return n > 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		int x = pow(10,a-1);
		int y = pow(10,a);
		int dem = 0;
		for(int i = x;i < y;i++)
		{
			if((tang(i) || giam(i))&& checksnt(i))
			{
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
