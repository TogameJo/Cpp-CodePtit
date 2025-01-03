#include <bits/stdc++.h>
using namespace std;
struct ThiSinh {
	string name;
	string ngaythang;
	float diem1,diem2,diem3;
};
void nhap(ThiSinh& A)
{
	getline(cin,A.name);
	getline(cin,A.ngaythang);
	cin>>A.diem1>>A.diem2>>A.diem3;
}
void in(ThiSinh& A){
	cout<<A.name<<" "<<A.ngaythang<<" "<<fixed<<setprecision(1)<<A.diem1+A.diem2+A.diem3;
}
int main()
{
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}
