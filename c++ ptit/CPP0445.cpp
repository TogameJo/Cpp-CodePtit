#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0;i < n;i++)
		{
			cin>>a[i];
		}
		map<int,int> count;
		for(int i = 0;i < n;i++)
		{
			count[a[i]]++;
		}
		int dem = count.size();
		vector<int> v;
		if(dem <= 1)
		{
			cout<<"-1"<<endl;
		}else{
			sort(a,a+n);
			for(int i = 0;i < n;i++)
			{
				if(count[a[i]] >= 1)
				{
					v.push_back(a[i]);
					count[a[i]] = 0;
				}
			}
			cout<<v[0]<<" "<<v[1]<<endl;
		}
	}
}
