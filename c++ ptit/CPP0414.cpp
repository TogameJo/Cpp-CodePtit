#include <bits/stdc++.h>
using namespace std;

int my_count[100005] = {0};

vector<int> tach(int n)
{
    vector<int> a;
    while (n > 0)
    {
        a.push_back(n % 10);
        n /= 10;
    }
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            vector<int> digits = tach(a[i]);
            for (int j = 0; j < digits.size(); j++)
            {
                b.push_back(digits[j]);
            }
        }

        for (int j = 0; j < b.size(); j++)
        {
            my_count[b[j]]++;
        }
        sort(b.begin(), b.end());
        for(int j = 0;j < b.size();j++)
        {
        	if(my_count[b[j]] > 0)
        	{
        		cout<<b[j]<<" ";
        		my_count[b[j]] = 0;
			}
		}
		cout<<endl;
    }
    return 0;
}

