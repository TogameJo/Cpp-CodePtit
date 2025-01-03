#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string id,name,sex,date,add,mst,day;
	public:
		NhanVien(){
		}
		friend istream& operator >> (istream&,NhanVien&);
		friend ostream& operator << (ostream&,NhanVien);
};
istream& operator >> (istream& in,NhanVien& a){
	a.id = "00001";
	getline(in,a.name);
	getline(in,a.sex);
	getline(in,a.date);
	getline(in,a.add);
	in>>a.mst;
	cin.ignore();
	getline(in,a.day);
	return in;
}
ostream& operator << (ostream& out,NhanVien a)
{
	out<<a.id<<" "<<a.name<<" "<<a.sex<<" "<<a.date<<" "<<a.add<<" "<<a.mst<<" "<<a.day;
	return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
