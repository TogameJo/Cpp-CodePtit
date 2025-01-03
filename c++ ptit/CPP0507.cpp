#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long t,m;
};
void nhap(PhanSo &a)
{
	cin>>a.t>>a.m;
}
void rutgon(PhanSo &a)
{
	long long mc = __gcd(a.t,a.m);
	a.t /= mc;
	a.m /= mc;
}
PhanSo tong(PhanSo &a, PhanSo &b)
{
	long long mauchung = (a.m*b.m)/__gcd(a.m,b.m);
	a.t = (mauchung/a.m) * a.t;
	b.t = (mauchung/b.m) * b.t;
	a.t += b.t;
	a.m = mauchung;
	rutgon(a);
	return a;
}
void in(PhanSo &a)
{
	cout<<a.t<<"/"<<a.m;
}
int main()
{
	PhanSo p,q;
	nhap(p);
	nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

