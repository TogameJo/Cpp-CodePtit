#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string name,code,date;
	float gpa;
};
void chuanhoa(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1;i < s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
}
void input(SinhVien& a)
{
	getline(cin,a.name);
	stringstream ss(a.name);
	string token;
	vector<string> v;
	while(ss >> token)
	{
		v.push_back(token);
	}
	string res = "";
	for (int i = 0; i < v.size(); i++) {
		chuanhoa(v[i]);
        res += v[i];
        res += " ";
    }
    a.name = res;
	getline(cin,a.code);
	getline(cin,a.date);
	cin>>a.gpa;
	cin.ignore();
}
void nhap(SinhVien ds[],int n)
{
	cin.ignore();
	for(int i = 0;i < n;i++)
	{
		input(ds[i]);
	}
}
void in(SinhVien ds[], int n)
{
	for(int i = 0;i < n;i++)
	{
		if(ds[i].date[1] == '/')
		{
			ds[i].date.insert(0,"0");
		}if(ds[i].date[4] == '/')
		{
			ds[i].date.insert(3,"0");
		}
		string s;
		if(i < 9) s = "B20DCCN00";
		else s = "B20DCCN0";
		cout<<s<<i+1<<" "<<ds[i].name<<""<<ds[i].code<<" "<<ds[i].date<<" "<<fixed<<setprecision(2)<<ds[i].gpa;
	    cout<<endl;
	}
}
int main()
{
	SinhVien ds[50];
	int N;
	cin>>N;
	nhap(ds, N);
	in(ds, N);
	return 0;
}
