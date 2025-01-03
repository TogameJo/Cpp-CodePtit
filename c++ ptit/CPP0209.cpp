#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int a[n];
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		while(q--)
		{
			int L,R;
			cin>>L>>R;
			int sum = 0;
			for(int i = L-1;i < R;i++)
			{
				sum += a[i];
			}
			cout<<sum<<endl;
		}
		
	}
}
