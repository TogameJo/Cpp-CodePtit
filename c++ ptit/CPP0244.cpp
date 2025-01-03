#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int countt[100005] = {0};
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i < n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i = 0;i < n;i++)
	{
		countt[a[i]]++;
	}
	for(int i = 0;i < n;i++)
	{
		if(countt[a[i]] >= 1)
		{
			cout<<a[i]<<" ";
			countt[a[i]] = 0;
		}
	}
}
