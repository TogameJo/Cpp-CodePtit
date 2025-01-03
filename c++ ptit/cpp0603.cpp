#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string id,name,cla,date;
		float gpa;
	public:
		SinhVien(){
		} // khoi tao ham ban dau tat ca = 0
		friend istream& operator >>(istream&, SinhVien&);
		friend ostream& operator <<(ostream&, SinhVien);
};
void chuanhoa(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1;i<s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
}
istream& operator>>(istream& in,SinhVien &a)
{
	a.id = "B20DCCN001";
	getline(in,a.name);
	stringstream ss(a.name);
	vector<string> v;
	string token;
	while(ss >> token)
	{
		v.push_back(token);
	}
	string res = "";
	for(int i = 0;i < v.size();i++)
	{
		chuanhoa(v[i]);
		res += v[i];
		res += " ";
	}
	a.name = res;
	getline(in,a.cla);
	getline(in,a.date);
	if(a.date[1] == '/') a.date.insert(0,"0");
	if(a.date[4] == '/') a.date.insert(3,"0");
	in>>a.gpa;
	return in;
}
ostream& operator<<(ostream& out,SinhVien a)
{
	out<<a.id<<" "<<a.name<<a.cla<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
