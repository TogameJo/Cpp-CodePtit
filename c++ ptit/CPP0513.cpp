#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name,lop,date;
	float gpa;
};
void input(SinhVien& A) {
    getline(cin, A.name);
    getline(cin, A.lop);
    getline(cin, A.date);
    cin >> A.gpa;
    getchar();
}
void nhap(SinhVien ds[], int n) {
    getchar();
    for (int i = 0; i < n; i++) {
        input(ds[i]);
    }
}
void in(SinhVien ds[],int n)
{
	for(int i = 0;i < n;i++){
		string msv;
		if(i < 9) msv = "B20DCCN00";
		else msv = "B22DCCN0";
		if(ds[i].date[1]=='/')
		{
			ds[i].date.insert(0,"0");
		}
		if(ds[i].date[4] == '/')
		{
			ds[i].date.insert(3,"0");
		}
		cout<<msv<<i+1<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<ds[i].date<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
	}
}
int main()
{
	SinhVien ds[50];
	int N;
	cin>>N;
	nhap(ds,N);
	in(ds,N);
	return 0;
}
