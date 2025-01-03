#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int a[n];
    	int m = n/2;
    	map<int,int> mp;
    	for(int i = 0;i < n;i++)
    	{
    		cin>>a[i];
    		mp[a[i]]++;
		}	
		vector<int> v;
		for(int i = 0;i < n;i++)
		{
			if(mp[a[i]] > m)
			{
				v.push_back(a[i]);
				mp[a[i]] = 0;
			}
		}
		if(v.size() == 0)
		{
			cout<<"-1"<<endl;
		}else{
		for(int i = 0;i < v.size();i++)
		{
			cout<<v[i]<<" ";
		}
	}
		cout<<endl;
	}
}

