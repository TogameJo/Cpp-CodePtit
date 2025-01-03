#include <bits/stdc++.h>
using namespace std;
void sub(string a, string b)
{
	int n1 = a.size(), n2 = b.size();
	int n = 0;
	int x[n1],y[n1],z[n1];
	for(int i = 0;i < n1;i++)
	{
		x[i] = a[i] - '0';
	}
	for(int i =0;i < n2;i++)
	{
		y[i] = b[i] -'0';
	}
	reverse(x,x+n1); reverse(y,y+n2);
	int nho = 0;
	for(int i = n2;i < n1;i++)
	{
		y[i] = 0;
	}
	for(int i = 0;i < n1;i++)
	{
		int res = x[i] - y[i] - nho;
		if(res < 0)
		{
			nho = 1;
			z[n++] = 10+res;
		}else{
			z[n++] = res;
			nho = 0;
		}
	}
	int ok = 0;
	for(int i = n-1;i >= 0;i--)
	{
		if(ok == 0 && z[i] != 0)
		{
			ok = 1;
		}
		if(ok)
		{
			cout<<z[i];
		}
	}
	if(ok == 0) cout<<"0";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		if(a.size() > b.size() || (a.size()==b.size()) && a[0] > b[0])
		{
			sub(a,b);
		}else sub(b,a);
		cout<<endl;
	}
}
