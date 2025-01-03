#include<bits/stdc++.h>
using namespace std;
int n, k, a[1001], matran[101][101];
bool check;
vector<string> v;

void ktao(){
	for(int i=1;i<=n;i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n-1;
	while(i>=1 && a[i]>a[i+1]){
		i--;
	}
	if(i==0) check = false;
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a+i+1, a+n+1);
	}
}

void xuat(){
	cout << "So cach chon: " << v.size() << endl; 
	cout << "Vi tri cac so chon theo hang: " << endl; 
	for(string x:v) cout << x << endl; 
}

int main(){
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin >> matran[i][j];
	}
	ktao();
	check = true;
	while(check){
		int tong = 0;
		for(int i=1;i<=n;i++){
			tong += matran[i][a[i]];
		}
		if(tong==k){
			string ok = "";
			for(int i=1;i<=n;i++){
				ok += to_string(a[i]);
				ok += " ";
			}
			v.push_back(ok);
		}
		sinh();
	}
	xuat();
}

