#include <iostream>

long long GCD(long long a, long long b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}

long long LCM(long long a, long long b) {
    return (a * b) / GCD(a, b);
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        long long result = 1;
        for (int i = 1; i <= n; i++) {
            result = LCM(result, i);
        }

        std::cout << result << std::endl;
    }

    return 0;
}

