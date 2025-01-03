#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long int tu,mau;
};
void rutgon(PhanSo &a)
{
	long long int bc = __gcd(a.tu,a.mau);
	a.tu /= bc;
	a.mau /= bc;
}
void process(PhanSo a, PhanSo b)
{
	PhanSo x;
	x.tu = a.tu;
	x.mau = a.mau;
	PhanSo y;
	y.tu = b.tu;
	y.mau = b.mau;
	long long int mc = (a.mau*b.mau)/__gcd(a.mau,b.mau);
	a.tu = (mc/a.mau)*a.tu;
	b.tu = (mc/b.mau)*b.tu;
	a.tu+=b.tu;
	a.mau = mc;
	PhanSo c;
	c.tu = a.tu*a.tu;
	c.mau = mc*mc;
	rutgon(c);
	cout<<c.tu<<"/"<<c.mau<<" ";
	PhanSo d;
	d.tu = x.tu*y.tu*c.tu;
	d.mau = x.mau*y.mau*c.mau;
	rutgon(d);
	cout<<d.tu<<"/"<<d.mau<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
