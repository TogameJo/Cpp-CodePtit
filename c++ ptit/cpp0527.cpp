#include <bits/stdc++.h>
using namespace std;
struct Time{
	int h,m,s;
};
void nhap(Time &a)
{
	cin>>a.h>>a.m>>a.s;
}
void input(Time ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		nhap(ds[i]);
	}
}
bool cmp(Time a,Time b)
{
	if(a.h < b.h) return true;
	if(a.h == b.h && a.m < b.m) return true;
	if(a.h == b.h && a.m == b.m && a.s < b.s) return true;
	return false;
}
void sapxep(Time *ds,int N)
{
	sort(ds,ds+N,cmp);
}
void in(Time ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		cout<<ds[i].h<<" "<<ds[i].m<<" "<<ds[i].s<<endl;
	}
}
int main(){
    Time ds[100];
    int n;
    cin>>n;
    input(ds,n);
    sapxep(ds,n);
    in(ds,n);
    return 0;
}

