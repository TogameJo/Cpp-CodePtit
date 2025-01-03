#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,sex,date,adr,tex,hopdong;
};
int check = 0;
void nhap(NhanVien& a)
{
	if(check == 0) cin.ignore();
	check++;
	getline(cin,a.name);
	getline(cin,a.sex);
	getline(cin,a.date);
	getline(cin,a.adr);
	getline(cin,a.tex);
	getline(cin,a.hopdong);
}
void inds(NhanVien ds[],int n)
{
	for(int i = 0;i < n;i++){
		string s;
		if(i < 9)
		{
			s = "0000";
		}else s = "000";
		cout<<s<<i+1<<" "<<ds[i].name<<" "<<ds[i].sex<<" "<<ds[i].date<<" "<<ds[i].adr<<" "<<ds[i].tex<<" "<<ds[i].hopdong<<endl;
	}
}
int main()
{
	NhanVien ds[50];
	int N,i;
	cin>>N;
	for(i = 0;i < N;i++)
	{
		nhap(ds[i]);
	}
	inds(ds,N);
	return 0;
}
