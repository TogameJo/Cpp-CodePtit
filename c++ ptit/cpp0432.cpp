#include <bits/stdc++.h>
using namespace std;
bool cmp(string x, string y)
{
	string xy = x.append(y); // noi chuoi x vao y
	string yx = y.append(x); // noi chuoi y vao x
	if(xy > yx) return true; //vd 30 33 xy = 3033  -> yx = 3330
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> m(n);
		for(int i = 0;i < n;i++)
		{
			cin>>m[i];
		}
		sort(m.begin(),m.end(),cmp);
		for(const auto&x:m)
		{
			cout<<x;
		}
		cout<<endl;
	}
}
