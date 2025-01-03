#include <bits/stdc++.h>
using namespace std;
int X[100],n,used[100];
void inkq(){
	for(int i = 1;i <= n;i++)
	{
		cout<<X[i];
	}
	cout<<" ";
}
void Try(int i)
{
	for(int j = 1;j <= n;j++)
	{
		if(used[j] == 0)
		{
			X[i] = j;
			used[j] = 1;
			if(i == n)
			{
				inkq();
			}else{
				Try(i+1);
			}
				used[j] = 0;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		Try(1);
		cout<<endl;
	}
}
