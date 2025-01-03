#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string code = "N20DCCN001";
	string name,lop,date;
	float gpa;
};
void nhapThongTinSV(SinhVien& a)
{
	getline(cin,a.name);
	cin>>a.lop>>a.date;
	cin>>a.gpa;
}
void inThongTinSV(SinhVien &a)
{
	if(a.date[1] == '/')
	{
		a.date.insert(0,"0");
	}
	if(a.date[4] == '/')
	{
		a.date.insert(3,"0");
	}
	cout<<a.code<<" "<<a.name<<" "<<a.lop<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main()
{
	SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
