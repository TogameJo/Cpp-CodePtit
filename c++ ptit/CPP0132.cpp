#include <iostream>
#include <cmath>
using namespace std;
void primeDivisors(long long n) {
	int x = 0;
	int a[1005];
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                a[x] = i;
                x++;
                n /= i;
            }
        }
    }
    if (n > 2) {
        a[x] = n;
        x++;
    }
    int max = 0;
    for(long long i = 0;i < x;i++)
    {
    	if(a[i] >= max)
    	{
    		max = a[i];
		}
	}
	cout<<max<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        primeDivisors(n);
    }
    return 0;
}
