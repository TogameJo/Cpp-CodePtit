#include <bits/stdc++.h>
using namespace std;
int coun = 0;
class SinhVien{
	private:
		string msv,name,lop,date;
		float gpa;
	public:
		SinhVien(){
		};
		friend istream& operator >>(istream&,SinhVien&);
		friend ostream& operator <<(ostream&,SinhVien);
};
istream& operator>>(istream& in,SinhVien &a)
{
	coun++;
	a.msv = "B20DCCN"+string(3-to_string(coun).size(),'0')+to_string(coun);
	cin.ignore();
	getline(in,a.name);
	getline(in,a.lop);
	getline(in,a.date);
	if(a.date[1] == '/') a.date.insert(0,"0");
	if(a.date[4] == '/')a.date.insert(3,"0");
	in>>a.gpa;
	return in;
}
ostream& operator <<(ostream& out,SinhVien a)
{
	out<<a.msv<<" "<<a.name<<" "<<a.lop<<" "<<a.date<<fixed<<setprecision(2)<<" "<<a.gpa<<endl;
	return out;
}
int main(){
SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

