#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv,name,sex,birth,add,mst,date;
	public:
		int ngay,thang,nam;
		NhanVien(){
		};
		friend istream& operator>>(istream&,NhanVien&);
		friend ostream& operator<<(ostream&,NhanVien);
};
int c = 0;
istream& operator>>(istream& in,NhanVien& a)
{
	if(c == 0)
	{
		in.ignore();
	}c++;
	a.mnv = string(5-to_string(c).size(),'0')+to_string(c);
	getline(in,a.name);
	getline(in,a.sex);
	getline(in,a.birth);
	a.ngay = (a.birth[3]-'0')*10 + (a.birth[4]-'0');
	a.thang = (a.birth[0]-'0')*10 + (a.birth[1]-'0');
	a.nam = (a.birth[6]-'0')*1000 + (a.birth[7]-'0')*100+(a.birth[8]-'0')*10 + (a.birth[9]-'0');
	getline(in,a.add);
	getline(in,a.mst);
	getline(in,a.date);
	return in;
}
bool cmp(NhanVien a,NhanVien b)
{
	if(a.nam < b.nam) return true;
	if(a.nam==b.nam && a.thang<b.thang) return true;
	if(a.nam==b.nam && a.thang==b.thang && a.ngay<b.ngay) return true;
	return false;
}
void sapxep(NhanVien *ds,int N)
{
	sort(ds,ds+N,cmp);
}
ostream& operator<<(ostream& out,NhanVien a)
{
	out<<a.mnv<<" "<<a.name<<" "<<a.sex<<" "<<a.birth<<" "<<a.add<<" "<<a.mst<<" "<<a.date<<endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

