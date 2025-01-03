#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string name,em;
	public:
		string msv,lop;
		SinhVien(){
		};
		friend istream& operator>>(istream&,SinhVien&);
		friend ostream& operator<<(ostream&,SinhVien);
};
int z = 0;
istream& operator>>(istream& in,SinhVien& a)
{
	if(z == 0)
	{
		in.ignore();
	}z++;
	getline(in,a.msv);
	getline(in,a.name);
	getline(in,a.lop);
	getline(in,a.em);
	return in;
}
ostream& operator<<(ostream& out,SinhVien a)
{
	cout<<a.msv<<" "<<a.name<<" "<<a.lop<<" "<<a.em<<endl;
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
		string a;
		for(int i = 0;i < s.size();i++)
		{
			a.push_back(toupper(s[i]));
		}
		cout<<"DANH SACH SINH VIEN NGANH "<<a<<":"<<endl;
		for(int i = 0;i < N;i++)
		{
			if(ds[i].msv[5] == s[0])
			{
				if ((s[0] == 'K' || s[0] == 'V' || s[0] == 'D'))
				{
					cout<<ds[i];
				}else if(ds[i].lop[0] != 'E')
				{
					cout<<ds[i];
				}
			}
		}
	}
	return 0;
}

