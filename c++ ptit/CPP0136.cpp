#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if (n == 2) return true;
    if (n < 2 || n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int k = 0;
        for (long long i = 2; i <= sqrt(n); i++) {
            if (isPrime(i) && i * i <= n) {
                k++;
            }
        }
        cout << k << endl;
    }
    return 0;
}

