#include <iostream>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (countDivisors(i) == 3) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}

