#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int a[m][n];
		int b[m][n];
		for(int i = 0;i < m;i++)
		{
			for(int j = 0;j < n;j++)
			{
				cin>>a[i][j];
				b[i][j]=a[i][j];
			}
		}
		for(int i = 0;i < m;i++)
		{
			for(int j = 0;j < n;j++)
			{
				if(a[i][j] == 1)
				{
					for(int x = 0;x < m;x++)
					{
						b[x][j] = 1;
					}
					for(int y = 0;y < n;y++)
					{
						b[i][y] = 1;
					}
				}
			}
		}
		for(int i = 0;i < m;i++)
		{
			for(int j = 0;j < n;j++)
			{
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
