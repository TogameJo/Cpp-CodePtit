#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,name,lop,date;
	public:
		float gpa;
		SinhVien(){
		};
		friend istream& operator >>(istream&,SinhVien&);
		friend ostream& operator<<(ostream&,SinhVien);
};
void chuanhoa(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1;i < s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
}
int coun = 0;
bool cmp(SinhVien a,SinhVien b)
{
	return a.gpa > b.gpa;
}
void sapxep(SinhVien *ds,int N){
	sort(ds,ds+N,cmp);
}
istream& operator>>(istream& in,SinhVien &a)
{
	coun++;
	a.msv = "B20DCCN"+string(3-to_string(coun).size(),'0')+to_string(coun);
	cin.ignore();
	getline(in,a.name);
	stringstream ss(a.name);
	string token;
	string res = "";
	while(ss >> token)
	{
		chuanhoa(token);
		res += token;
		res += " ";
	}
	a.name = res;
	getline(in,a.lop);
	getline(in,a.date);
	if(a.date[1] == '/') a.date.insert(0,"0");
	if(a.date[4] == '/')a.date.insert(3,"0");
	in>>a.gpa;
	return in;
}
ostream& operator<<(ostream& out,SinhVien a)
{
	out<<a.msv<<" "<<a.name<<a.lop<<" "<<a.date<<fixed<<setprecision(2)<<" "<<a.gpa<<endl;
    return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;  
}

