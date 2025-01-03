#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,name,em;
	public:
		string lop;
		SinhVien(){
		};
		friend istream& operator>>(istream&,SinhVien&);
		friend ostream& operator<<(ostream&,SinhVien);
};
int z = 0;
istream& operator>>(istream& in,SinhVien& a)
{
	if(z==0)
	{
		in.ignore();
	}
	z++;
	getline(in,a.msv);
	getline(in,a.name);
	getline(in,a.lop);
	getline(in,a.em);
	return in;
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
    for(int i = 0;i < N;i++)
    {
    	cin>>ds[i];
	}
	int q;
	cin>>q;
	cin.ignore();
	while(q--)
	{
		string s;
		getline(cin,s);
		cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
		for(int i = 0;i < N;i++)
		{
			if(ds[i].lop == s)
			{
				cout<<ds[i];
			}
		}
	}
	return 0;
}

