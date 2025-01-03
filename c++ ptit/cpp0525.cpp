#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,name,lop;
	float x,y,z;
};
void nhap(SinhVien &a)
{
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.name);
	getline(cin,a.lop);
	cin>>a.x>>a.y>>a.z;
}
void input(SinhVien ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		nhap(ds[i]);
	}
}
bool cmp(SinhVien A,SinhVien B)
{
	return A.name < B.name;
}
void sapxep(SinhVien *ds,int N)
{
	sort(ds,ds+N,cmp);
}
void in(SinhVien ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<fixed<<setprecision(1)<<ds[i].x<<" "<<ds[i].y<<" "<<ds[i].z<<endl;
	}
}
int main(){
	SinhVien ds[50];
	int n;
	cin>>n;
	input(ds,n);
	sapxep(ds,n);
	in(ds,n);
}
