#include <bits/stdc++.h>
using namespace std;
string vietthuong(string s)
{
	for(int i = 0;i < s.size();i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}
string viethoa(string s)
{
	s[0] = toupper(s[0]);
	return s;
}
int main()
{
	string s;
	vector<string> res;
	while(cin>>s){
		s = vietthuong(s);
		res.push_back(s);
	}
	int ok = 1;
	for(auto x:res)
	{
		//neu day la phan tu dau tien cua cau thi in hoa
		if(ok){
			x = viethoa(x);
			ok = 0;
		}
		char lastchar = x[x.size()-1];
		//lay ki tu cuoi cung cua tu hien tai
		if(lastchar == '.' || lastchar == '?' ||lastchar == '!')
		{
			x.pop_back();
			//neu ki tu cuoi cung la dau cau xoa no in tu va xuong dong
			cout<<x<<endl;
			ok = 1;
		}else cout<<x<<" "; // neu khong phai dau cau thi in ra tu do
	}
	return 0;
}
