#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,x;
	getline(cin,s);
	getline(cin,x);
	int pos =s.find(x);// tim kiem vi tri x torng xau s
	s.erase(pos,x.size()+1);//xoa n ki tu tu vi tri pos
	cout<<s<<endl;
}
