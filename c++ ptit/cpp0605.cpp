#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(){
		}
		PhanSo(ll tu, ll mau);
		friend istream& operator>>(istream&, PhanSo&);
		friend ostream& operator<<(ostream&, PhanSo);
		void rutgon();		
};
PhanSo::PhanSo(ll tu, ll mau)
{
	this -> tu = tu;
	this -> mau = mau;
}
istream& operator>>(istream& in, PhanSo& a){
	in>>a.tu>>a.mau;
	return in;
}
void PhanSo::rutgon()
{
	ll uc = __gcd(tu,mau);
	tu /= uc;
	mau /= uc;
}
ostream& operator<<(ostream& out, PhanSo a){
	out<<a.tu<<"/"<<a.mau;
	return out;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
