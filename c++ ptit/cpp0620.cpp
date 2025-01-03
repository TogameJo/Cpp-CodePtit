#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,name,lop,em;
};
void nhap(SinhVien &a)
{
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.name);
	getline(cin,a.lop);
	getline(cin,a.em);
}
void input(SinhVien ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		nhap(ds[i]);
	}
}
bool cmp(SinhVien a,SinhVien b)
{
	if(a.lop < b.lop) return true;
	if(a.lop == b.lop && a.msv < b.msv) return true;
	return false;
}
void in(SinhVien ds[],int N)
{
	sort(ds,ds+N,cmp);
	for(int i = 0;i < N;i++)
	{
		cout<<ds[i].msv<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<ds[i].em<<endl;
	}
}
int main(){
    SinhVien ds[1000];
	int n;
    cin>>n;
    input(ds,n);
    in(ds,n);
    return 0;
}

