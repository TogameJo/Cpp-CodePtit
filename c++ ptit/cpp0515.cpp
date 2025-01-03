#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name,code,date,ma;
	float gpa;
};
void chuanhoa(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1;i<s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
}
void input(SinhVien &a)
{
	getline(cin,a.name);
	stringstream ss(a.name);
	vector<string> v;
	string token;
	while(ss >> token)
	{
		v.push_back(token);
	}
	string res = "";
	for(int i = 0;i < v.size();i++){
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
void nhap(SinhVien ds[],int N)
{
	cin.ignore();
	for(int i = 0;i < N;i++)
	{
		input(ds[i]);
	}
	for(int i = 0;i < N;i++)
	{
		string s;
		if(i < 9)
		{
			s = "B20DCCN00"+to_string(i+1);
			ds[i].ma += s;
		}else{
			s = "B20DCCN0"+to_string(i+1);
			ds[i].ma += s;
		}
	}
}
bool sosanh(SinhVien A, SinhVien B)
{
	if(A.gpa > B.gpa)
	{
		return true;
	}
	return false;
}
void sapxep(SinhVien *M,int N)
{
	sort(M,M+N,sosanh);
}
void in(SinhVien ds[],int N)
{
	for(int i = 0;i < N;i++)
	{
		if(ds[i].date[1]=='/')
		{
			ds[i].date.insert(0,"0");
		}if(ds[i].date[4]=='/')
		{
			ds[i].date.insert(3,"0");
		}
		cout<<ds[i].ma<<" "<<ds[i].name<<ds[i].code<<" "<<ds[i].date<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
