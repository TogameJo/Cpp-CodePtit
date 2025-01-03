#include <bits/stdc++.h>
using namespace std;
//quy dinh a > b
void add(string a, string b)
{
	int n1 = a.size(), n2=b.size();
	int n = 0;
	int x[n1],y[n1],z[n1];
	for(int i = 0;i < n1;i++)
	{
		x[i] = a[i] - '0';
	}
	for(int i = 0;i < n2;i++)
	{
		y[i] = b[i] - '0';
	}
	reverse(x,x+n1);
	reverse(y,y+n2);
	for(int i = n2;i < n1;i++)
	{
		y[i] = 0;
	}
	int nho = 0;
	for(int i = 0;i <n1;i++)
	{
		int res = x[i] + y[i] + nho;
		z[n++] = res%10; //z[n] la mang de luu ket qua
		nho = res/10;
	}
	if(nho)
	{
		z[n++] = nho;
	}
	for(int i = n-1;i >= 0;i--)
	{
		cout<<z[i];
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		if (a.size() > b.size())
		{
			add(a,b);
		}else add(b,a);
		cout<<endl;
	}
}
