#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		sum += i%k;
	}
	if(k == sum)
	{
		cout<<"1"<<endl;
	}else cout<<"0"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
