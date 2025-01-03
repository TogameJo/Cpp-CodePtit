#include <bits/stdc++.h>
using namespace std;
int songuyento(int n)
{
	if(n < 2)
	{
		return 0;
	}
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int tongso(int n)
{
	int tong = 0;
	while(n > 0)
	{
		tong += n%10;
		n /= 10;
	}
	return tong;
}
int uocso(int n)
{
	int tong = 0;
	for(int i = 2;i <= sqrt(n);i++)
	{
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				tong+=tongso(i);
				n/=i;
			}
		}
	}
	if(n > 1)
	{
		tong += tongso(n);
	}
	return tong;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		if((tongso(n) == uocso(n)) && !songuyento(n))
		{
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
}
