#include <bits/stdc++.h>
using namespace std;
class GiangVien{
	private:
	public:
		string a,b,c,ten,nganh;
		GiangVien(){
		};
		friend istream& operator>>(istream&, GiangVien&);
		friend ostream& operator<<(ostream&, GiangVien);
};
int z = 0;
istream& operator>>(istream& in,GiangVien& x)
{
	if(z == 0)
	{
		in.ignore();
	}z++;
	//ten giang vien
	getline(in,x.a);
	stringstream ss(x.a);
	string token;
	vector<string> v;
	while(ss>>token){
		v.push_back(token);
	}	
	string res = v[v.size()-1];	
	x.ten = res[0];
	//nganh giang vien
	getline(in,x.b);
	stringstream ss1(x.b);
	string token1;
	string res1 = "";
	while(ss1>>token1)
	{
		res1 += toupper(token1[0]);
	}
	x.b = res1;
	//ma giang vien
	x.c = "GV"+string(2-to_string(z).size(),'0')+to_string(z);
	return in;
}
bool cmp(GiangVien A,GiangVien B){
	if(A.ten < B.ten) return true;
	if(A.ten == B.ten && A.c < B.c) return true;
	return false;
}
void sapxep(GiangVien *ds, int N)
{
	sort(ds,ds+N,cmp);
}
ostream& operator<<(ostream& out,GiangVien x)
{
	out<<x.c<<" "<<x.a<<" "<<x.b<<endl;
	return out;
}
int main(){
    GiangVien ds[100];
    int N;
    cin>>N;
    for(int i = 0;i < N;i++)
    {
    	cin>>ds[i];
	}
	sapxep(ds,N);
	for(int i = 0;i < N;i++)
	{
		cout<<ds[i];
	}
	return 0;
}

