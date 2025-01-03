#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string name,em;
	public:
		string lop,msv;
		SinhVien(){
		};
		friend istream& operator>>(istream&,SinhVien&);
		friend ostream& operator<<(ostream&,SinhVien);
};
int z = 0;
istream& operator>>(istream& in,SinhVien &a)
{
	if(z == 0) in.ignore();
	z++;
	getline(in,a.msv);
	getline(in,a.name);
	getline(in,a.lop);
	getline(in,a.em);
	return in;
}
bool cmp(SinhVien a,SinhVien b)
{
	if(a.lop < b.lop) return true;
	if(a.lop == b.lop && a.msv < b.msv) return true;
	return false;
}
void sapxep(SinhVien *ds,int N)
{
	sort(ds,ds+N,cmp);
}
ostream& operator<<(ostream& out,SinhVien a)
{
	out<<a.msv<<" "<<a.name<<" "<<a.lop<<" "<<a.em<<endl;
	return out;
}
int main(){
    SinhVien ds[1000];
    int N;
    cin>>N;
    for(int i = 0 ;i < N;i++)
    {
    	cin>>ds[i];
	}
	sapxep(ds,N);
	for(int i = 0;i < N;i++)
	{
		cout<<ds[i];
	}
	return 0;
}

