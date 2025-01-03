#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>n>>m;
		int a[n];
		int b[m];
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		for(int j = 0;j < m;j++)
		{
			cin>>b[j];
		}
		for(int i = 0;i < n-1;i++)
		{
			for(int j = i+1;j < n;j++)
			{
				if(a[i] < a[j])
				{
					int temp = a[j];
					a[j] = a[i];
					a[i] = temp;
				}
			}
		}
		for(int j = 0;j < m-1;j++)
		{
			for(int k = j+1;k < m;k++)
			{
				if(b[j] > b[k])
				{
					int temp = b[k];
					b[k] = b[j];
					b[j] = temp;
				}
			}
		}
		int tich = 1;
		tich = a[0]*b[0];
		cout<<tich<<endl;
		
	}
}
