#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int m = n-1;
		int a[m];
		for(int i = 0;i < m;i++)
		{
			cin>>a[i];
		}
		int res = 1;
		for(int i = 0;i < m;i++)
		{
			if(a[i] > 0)
			{
				if(a[i] <= res)
				{
					res += 1;
				}
			}else break;
		}
		cout<<res<<endl;
	}
}
