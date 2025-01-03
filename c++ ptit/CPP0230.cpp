#include <bits/stdc++.h>
using namespace std;
const int n = 3;
int main(){
	int m;
	cin>>m;
	int a[m][n];
	for(int i = 0;i < m;i++)
	{
	    for(int j = 0;j < n;j++)
	    {
	    	cin>>a[i][j];
		}
	}
	int count = 0;
	for(int i = 0;i < m;i++)
	{
		int count1 = 0;
	    int count0 = 0;
		for(int j = 0;j < n;j++)
		{
			if(a[i][j] == 1)
			{
				count1++;
			}else count0++;
		}
		if(count1 > count0)
		{
			count++;
		}
	}
	cout<<count;
}
