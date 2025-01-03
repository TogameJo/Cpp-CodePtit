#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,name,lop;
	float x,b,c;
};
void nhap(SinhVien &a)
{	
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.name);
	getline(cin,a.lop);
	cin>>a.x>>a.b>>a.c;
}
bool cmp(SinhVien A,SinhVien B)
{
	return A.msv < B.msv;
}
void sap_xep(SinhVien *ds,int N)
{
	sort(ds,ds+N,cmp);
}
void in_ds(SinhVien ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<fixed<<setprecision(1)<<ds[i].x<<" "<<ds[i].b<<" "<<ds[i].c<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	SinhVien ds[50];
	for(int i = 0;i < n;i++)
	{
		nhap(ds[i]);
	}
	sap_xep(ds,n);
	in_ds(ds,n);
	return 0;
}
