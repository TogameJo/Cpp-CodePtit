#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,date,diachi,masothue,gioitinh,hopdong;
	string code = "00001";
};
void nhap(NhanVien &a)
{
	getline(cin,a.name);
	getline(cin,a.gioitinh);
	getline(cin,a.date);
	getline(cin,a.diachi);
	getline(cin,a.masothue);
	getline(cin,a.hopdong);
}
void in(NhanVien &a)
{
	cout<<a.code<<" "<<a.name<<" "<<a.gioitinh<<" "<<a.date<<" "<<a.diachi<<" "<<a.masothue<<" "<<a.hopdong;
}
int main()
{
	NhanVien a;
	nhap(a);
	in(a);
	return 0;
}
