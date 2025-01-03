#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(){
		};
		PhanSo(ll tu,ll mau){
			this->tu = tu;
			this->mau = mau;
		}
		friend istream& operator >> (istream& in,PhanSo&a)
		{
			in>>a.tu;
			in>>a.mau;
			return in;
		}
		friend PhanSo operator+(PhanSo p, PhanSo q)
		{
			PhanSo a(1,1);
			a.tu = p.tu*q.mau + q.tu*p.mau;
			a.mau = p.mau*q.mau;
			long long x = __gcd(a.tu,a.mau);
			a.tu /= x; a.mau /= x;
			return a;
		}
		friend ostream& operator << (ostream& out,PhanSo a)
		{
			out<<a.tu<<"/"<<a.mau<<endl;
			return out;
		}
};
int main(){
    PhanSo p(1,1), q(1,1);
    cin>>p>>q;
    cout<< p + q;
    return 0;
}

