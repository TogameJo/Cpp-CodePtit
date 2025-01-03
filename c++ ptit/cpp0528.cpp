#include <bits/stdc++.h>
using namespace std;
struct Sinhvien{
	string code,name,lop,em,cty;
	int ma;
};
void nhap(Sinhvien &a)
{
	getline(cin,a.code);
	getline(cin,a.name);
	getline(cin,a.lop);
	getline(cin,a.em);
	getline(cin,a.cty);
}
void input(Sinhvien ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		nhap(ds[i]);
		ds[i].ma = i+1;
	}
}
bool cmp(Sinhvien a, Sinhvien b)
{
	return a.name < b.name;
}
void in(Sinhvien ds[],int N,string k)
{
	sort(ds,ds+N,cmp);
	for(int i = 0;i < N;i++)
	{
		if(ds[i].cty == k)
		{
			cout<<ds[i].ma<<" "<<ds[i].code<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<ds[i].em<<" "<<ds[i].cty<<endl;
		}
	}
}
int main(){
    Sinhvien ds[100];
    int n;
    cin>>n;
    cin.ignore();
    input(ds,n);
    int q;
    cin>>q;
    cin.ignore();
    while(q--)
    {
    	string s;
    	cin>>s;
    	in(ds,n,s);
	}
	return 0;
}

