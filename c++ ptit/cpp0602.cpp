#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string id,name,lop,date;
		float gpa;
	public:
		SinhVien(){
		}
		//nap chong toan tu cin va cout
		friend ostream& operator <<(ostream&, SinhVien);//nap chong toan tu cout
		friend istream& operator >>(istream&, SinhVien&);
};
istream& operator>>(istream& in, SinhVien& a)
{
	a.id = "B20DCCN001";
	getline(in,a.name);
	getline(in,a.lop);
	getline(in,a.date);
	in>>a.gpa;
	if(a.date[1] == '/') a.date.insert(0,"0");
	if(a.date[4] == '/') a.date.insert(3,"0");
	return in;/* nhat dinh phai co return vi no cho phep nap chong
	toan tu lien tuc vi du
	return se tra ve nhu nay 
	cin>>a>>b
	thay vi
	cin>>a
	cin>>b
	se bi tle */
}
ostream& operator<<(ostream& out, SinhVien a)
{
	out<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
    return out;
}
int main()
{
	SinhVien a;
	cin>>a;
	cout<<a;
	return 0;
}
