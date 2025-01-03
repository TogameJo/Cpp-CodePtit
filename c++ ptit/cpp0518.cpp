#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,sex,add,thue,date,sinh,code;
	int n,t,nam;
};
int z = 0;
void nhap(NhanVien& a)
{
	if(z == 0)
	{
		cin.ignore();
	}z++;
	getline(cin,a.name);
	getline(cin,a.sex);
	getline(cin,a.sinh);
	getline(cin,a.add);
	getline(cin,a.thue);
	getline(cin,a.date);
	a.t = (a.sinh[0]-'0')*10 + (a.sinh[1]-'0');
	a.n = (a.sinh[3]-'0')*10 + (a.sinh[4]-'0');
	a.nam = (a.sinh[6]-'0')*1000+(a.sinh[7]-'0')*100+(a.sinh[8]-'0')*10+a.sinh[9]-'0';
}
bool cmp(NhanVien a, NhanVien b)
{
	if(a.nam < b.nam) return true;
	if(a.nam == b.nam && a.t < b.t) return true;
	if(a.nam == b.nam && a.t == b.t && a.n < b.n) return true;
	return false;
}
void sapxep(NhanVien *ds,int N)
{	
    for(int i = 0;i < N;i++)
    {
    	string s;
    	if(i < 9)
    	{
    		s = "0000"+to_string(i+1);
    		ds[i].code += s;
		}else{
			s = "000"+to_string(i+1);
			ds[i].code += s;
		}
	}
	sort(ds,ds+N,cmp);
}
void inds(NhanVien ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		cout<<ds[i].code<<" "<<ds[i].name<<" "<<ds[i].sex<<" "<<ds[i].sinh<<" "<<ds[i].add<<" "<<ds[i].thue<<" "<<ds[i].date<<endl;
	}
}
int main()
{
	struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
