#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long x,y;
};
void nhap(PhanSo &a){
	cin>>a.x>>a.y;
}
void rutgon(PhanSo &a)
{
	long long t = __gcd(a.x, a.y);
	a.x /= t;
	a.y /= t;
}
void in(PhanSo& a)
{
	cout<<a.x<<"/"<<a.y;
}
int main()
{
	PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
