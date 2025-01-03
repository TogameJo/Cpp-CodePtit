#include <iostream>
#include <algorithm>
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
			cin>>a[n];
		}
		sort(a,a+n);	
		int check = 1;
		for(int i = 0;i < n;i++)
		{
			if(a[i] > 0)
			{
				if(a[i] <= check)
				{
					check = a[i]+1;
					
				}else break;
			}
		}
		cout<<check<<endl;
	}
}
