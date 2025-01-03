#include<bits/stdc++.h>
using namespace std;
int n, k, sum, X[100], a[100];
int ok=1;
int ch=0;
void ktao() {
	for(int i=1; i<=n; i++) {
		X[i] = 0;	// cau hinh dau tien
	}
}
void sinh() {
	int i=n; // bat dau tu vi tri cuoi
	while(i>=1 && X[i]==1) {
		X[i]=0;
		i--;
	}
	if(i==0) {
		ok = 0;
		cout<<"Tong so cau hinh la: "<<ch<<endl; // cau hinh cuoi
	} else X[i] = 1;
}

int main() {
	cin >> n >> k >> sum;
	ktao;
	for(int i=1; i<=n; i++) cin >> a[i];
	while(ok==1) {
		vector<int> v;
		long long tong=0;
		int dem=0;
		for(int i=1; i<=n; i++) {
			if(X[i]==1) {
				dem++;
				tong += a[i];
				v.push_back(a[i]); // chen a[i] vao vector v
			}
		}
		if(tong==sum && dem==k) {
			for(auto x:v) cout << x << " ";
			ch++;
			cout << endl;
		}
		sinh();
	}
}

