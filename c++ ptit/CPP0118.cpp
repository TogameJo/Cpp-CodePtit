#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

bool isSphenic(int n) {
    vector<int> primes; // Luu tr? các s? nguyên t?
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && n % i == 0) {
            primes.push_back(i);
            if (primes.size() >= 3) break; // Ng?ng sau khi dã tìm th?y 3 u?c s?
        }
    }

    if (primes.size() != 3) return false; // Ph?i có dúng 3 u?c s?
    if (n != primes[0] * primes[1] * primes[2]) return false; // Tích c?a 3 u?c s? ph?i b?ng n

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isSphenic(n)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}

