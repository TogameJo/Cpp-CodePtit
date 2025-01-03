#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name;
	string lop;
	string date;
	string msv = "B20DCCN001";
	float gpa;
};
void nhap(SinhVien &a)
{
	getline(cin,a.name);
	getline(cin,a.lop);
	getline(cin,a.date);
	cin>>a.gpa;
}
void in(SinhVien &a)
{
	if(a.date[1] == '/')
	{
		a.date.insert(0,"0"); // neu ngay khong dung dinh dang chen so 0 vao trc
	}if(a.date[4]=='/')
	{
		a.date.insert(3,"0");
	}
	cout<<a.msv<<" "<<a.name<<" "<<a.lop<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main()
{
	SinhVien a;
	nhap(a);
	in(a);
	return 0;
}
