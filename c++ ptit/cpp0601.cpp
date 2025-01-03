#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string id,name,birth,lop;
		float gpa;
	public:
	    SinhVien(){
		}
		friend void nhap(SinhVien&);
		friend void xuat(SinhVien);
};
void nhap(SinhVien &a)
{
	a.id = "B20DCCN001";
	getline(cin,a.name);
	getline(cin,a.lop);
	getline(cin,a.birth);
	cin>>a.gpa;
	if(a.birth[1]=='/') a.birth.insert(0,"0");
	if(a.birth[4]=='/') a.birth.insert(3,"0");
}
void xuat(SinhVien a){
	cout<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.birth<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    SinhVien a;
    nhap(a);
    xuat(a);
    return 0;
}
