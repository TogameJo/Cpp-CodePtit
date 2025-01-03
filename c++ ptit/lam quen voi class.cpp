#include <bits/stdc++.h>
using namespace std;

//class : lop 
//bao gom 2 phan:
//attribute:thuoc tinh (chieu cao, can nang, ngoai hinh...)
//method:phuong phap(di lai, an uong, hoc bai ...)
//constructor: ham khoi tao 
//tinh dong goi trong OOP(huong doi tuong)
//encapsulation: dong goi
//tuc la chi duoc su dung cac du lieu trong pham vi class
//private
//public
//protected

class SinhVien{
	private: //thuoc tinh
		string msv,name,ns;
		float gpa;
	public: //phuong thuc
	    SinhVien();
	    void xinchao();
	    void dihoc();
};
//Implementaton
void SinhVien::xinchao(){
	cout<<"HELLO!\n";
}
void SinhVien::dihoc()
{
	cout<<"Di hoc!\n";
}
int main()
{
	SinhVien x;
	x.xinchao();
	x.dihoc();
	return 0;
}
