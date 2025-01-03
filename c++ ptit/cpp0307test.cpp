#include <iostream>
#include <sstream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Clear the newline character from the buffer

    while (t--) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        stringstream ss1(s1);
        stringstream ss2(s2);

        set<string> setS1;

        string token;
        while (ss1 >> token) {
            setS1.insert(token);
        }

        while (ss2 >> token) {
            setS1.erase(token);
        }

        // Print the remaining words in setS1
        for (const auto& word : setS1) {
            cout << word << " ";
        }

        cout << endl;
    }

    return 0;
}

