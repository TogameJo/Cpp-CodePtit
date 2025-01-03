#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sapxep(vector<long long>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ) {
        if (arr[i] >= 0 && arr[i] != i) {
            swap(arr[i], arr[arr[i]]);
        } else {
            i++;
        }
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sapxep(arr);
        for (int i = 0; i < n; i++) {
            if(arr[i] != i)
            {
            	arr[i] = -1;
			}
        }
        for(auto const& x:arr)
        {
        	cout<<x<<" ";
		}
        cout << endl;
    }
    return 0;
}

