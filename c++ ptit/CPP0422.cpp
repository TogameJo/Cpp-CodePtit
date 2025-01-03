#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::vector<long long> arr;

        for (int i = 0; i < n; i++) {
            long long num;
            std::cin >> num;
            arr.push_back(num);
        }

        std::vector<long long> nonZeroElements;
        int zeroCount = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                zeroCount++;
            } else {
                nonZeroElements.push_back(arr[i]);
            }
        }

        for (int i = 0; i < zeroCount; i++) {
            nonZeroElements.push_back(0);
        }

        for (int i = 0; i < n; i++) {
            std::cout << nonZeroElements[i] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}

