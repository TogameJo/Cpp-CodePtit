#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int code;
		cin>>code;
		string s,x;
		getline(cin,s);
		if(code == 101)
		{
			x=("A,B,B,A,D,C,C,A,B,D,C,C,A,B,D");
		}else if(code == 102)
		{
			x=("A,C,C,A,B,C,D,D,B,B,C,D,D,B,B");
		}
		float diem = 0;
		for(int i = 0;i < s.size()-1;i++)
		{
			if(s[i+1] == x[i])
			{
				diem += 10*1.0/15;
			}
		}	
		cout<<setprecision(2)<<fixed<<diem<<endl;
	}
}
