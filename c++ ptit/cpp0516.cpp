#include <bits/stdc++.h>
using namespace std;
struct MatHang{
	string name,hang;
	float mua,ban;
	int code;
};
void nhap(MatHang &a)
{
	getline(cin,a.name);
	getline(cin,a.hang);
	cin>>a.mua>>a.ban;
	cin.ignore();
}
void input(MatHang ds[],int N)
{
	cin.ignore();
	for(int i = 0;i < N;i++)
	{
		nhap(ds[i]);
	}
	for(int i = 0;i < N;i++)
	{
		ds[i].code = i+1;
	}
}
bool cmp(MatHang A, MatHang B)
{
	float loinhuanA = A.ban-A.mua;
	float loinhuanB = B.ban-B.mua;
	return loinhuanA > loinhuanB;
}
void sapxep(MatHang *M,int N)
{
	sort(M,M+N,cmp);
}
void xuat(MatHang ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		cout<<ds[i].code<<" "<<ds[i].name<<" "<<ds[i].hang<<" "<<fixed<<setprecision(2)<<ds[i].ban-ds[i].mua<<endl;
	}
}
int main()
{
	MatHang ds[50];
	int N;
	cin>>N;
	input(ds,N);
	sapxep(ds,N);
	xuat(ds,N);
	return 0;
}
