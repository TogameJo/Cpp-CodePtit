#include <bits/stdc++.h>
using namespace std;
bool check1(string a)
{
	for(int i = 6;i < 8;i++)
	{
		if(a[i] <= a[i-1]) return false;
	}
	if(a[9] <= a[7]) return false;
	if(a[9] >= a[10]) return false;
	return true;
}
bool check2(string a)
{
	for(int i = 6;i < 8;i++)
	{
		if(a[i] != a[i-1])
		{
			return false;
		}
	}
	if(a[9] != a[10]) return false;
	return true;
}
bool check3(string a)
{
	for(int i = 5;i < 8;i++)
	{
		if(a[i] != '6' && a[i] != '8')
		{
			return false;
		}
	}
	for(int i = 9;i < a.size();i++)
	{
		if(a[i] != '6' && a[i] != '8')
		{
			return false;
		}
	}
	return true;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    	string s;
    	getline(cin,s);
    	if(check1(s) || check2(s) || check3(s))
    	{
    		cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
}

//7
//29T1–123.45
//29T1–555.55
//29T1–222.33
//29T1–686.88
//29T1–123.33
//29T1–555.54
//29T1–606.88
