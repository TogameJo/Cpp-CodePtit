#include <bits/stdc++.h>
using namespace std;
struct Tuoi{
	string name,date;
	int ngay,thang,nam;
};
void nhap(Tuoi &a)
{
	cin>>a.name;
	cin>>a.date;
	a.ngay = (a.date[0] - '0')*10 + (a.date[1]-'0');
	a.thang = (a.date[3] - '0')*10 + (a.date[4] - '0');
	a.nam = (a.date[6]-'0')*1000+(a.date[7]-'0')*100+(a.date[8] - '0')*10+(a.date[9]-'0');
}
void input(Tuoi ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		nhap(ds[i]);
	}
}
bool cmp(Tuoi a, Tuoi b)
{
	if(a.nam < b.nam) return true;
	if((a.nam == b.nam) && (a.thang < b.thang)) return true;
	if((a.nam == b.nam) && (a.thang == b.thang) && (a.ngay < b.ngay)) return true;
	return false;
}
void sapxep(Tuoi *ds,int N)
{
	sort(ds,ds+N,cmp);
}
void in(Tuoi ds[],int N)
{
	sapxep(ds,N);
	cout << ds[N-1].name << endl;
    cout << ds[0].name << endl;
}
int main(){
    Tuoi ds[50];
    int n;
    cin>>n;
    input(ds,n);
    in(ds,n);
    return 0;
}

