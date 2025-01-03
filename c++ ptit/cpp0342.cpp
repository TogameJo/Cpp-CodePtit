#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		vector<char> v1;
		vector<char> v2;
		for(int i = 0;i < s.size();i++)
		{
			if(isdigit(s[i]))
			{
				v1.push_back(s[i]);
			}else{
				v2.push_back(s[i]);
			}
		}
		int sum = 0;
		for(int i = 0;i < v1.size();i++)
		{
			sum += stoi(string(1, v1[i]));
		}
		sort(v2.begin(),v2.end());
		for(const auto& x:v2)
		{
			cout<<x;
		}
		cout<<sum<<endl;
    }
}
