#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		int max = -2e9-1;
		for(int i = 0;i < n;i++)
		{
			if(a[i] >= max)
			{
				max = a[i];
			}
		}
		cout<<max<<endl;
	}
}
