#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long x,y,z,n;
	cin>>x>>y>>z>>n;
	vector<int> v;
	for(long long i = pow(10,n-1);i<pow(10,n);i++)
	{
		if(i%x==0 && i%y==0 && i%z==0)
		{
			v.push_back(i);
		}
	}
	if(v.size() == 0)
	{
		cout<<"-1"<<endl;
	}else cout<<v[0]<<endl;
	}
}
