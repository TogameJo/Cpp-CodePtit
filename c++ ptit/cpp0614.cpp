#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv,name,sex,birth,add,mst,date;
	public:
		NhanVien(){
		};
		friend istream& operator >> (istream&,NhanVien&);
		friend ostream& operator << (ostream&,NhanVien);
};
int coun = 0;
istream& operator >> (istream& in,NhanVien& a)
{
	coun++;
	a.mnv=string(5-to_string(coun).size(),'0')+to_string(coun);
	in.ignore();
	getline(in,a.name);
	getline(in,a.sex);
	getline(in,a.birth);
	getline(in,a.add);
	getline(in,a.mst);
	getline(in,a.date);
	return in;
}
ostream& operator << (ostream& out,NhanVien a)
{
	out<<a.mnv<<" "<<a.name<<" "<<a.sex<<" "<<a.birth<<" "<<a.add<<" "<<a.mst<<" "<<a.date<<endl;
    return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

