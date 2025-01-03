#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string name,lop,em;
	public:
		string msv;
		int nam;
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
	}z++;
	getline(in,a.msv);
	getline(in,a.name);
	getline(in,a.lop);
	a.nam = (a.lop[1]-'0')*10+(a.lop[2]-'0');
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
		int s;
		cin>>s;
		cin.ignore();
		cout<<"DANH SACH SINH VIEN KHOA "<<s<<" :"<<endl;
		for(int i = 0;i < N;i++)
		{
			if(ds[i].nam == s%100)
			{
				cout<<ds[i];
			}
		}
	}
	return 0;
}

