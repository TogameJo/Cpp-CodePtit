#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		int a[m][m];
		for(int i = 0;i < m;i++)
		{
			for(int j = 0;j < m;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i = 0;i < m;i++)
		{
			for(int j = 0;j < m;j++)
			{
			    if(i == 0 || i == m-1 || j == 0 || j == m-1)
			    {
			    	cout<<a[i][j]<<" ";				
				}else cout<<" ";
			}
			cout<<endl;
		}
	}
}
