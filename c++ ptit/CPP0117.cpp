#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		while(n > 9)
		{
			int sum = 0;
			while(n > 0)
			{
				sum += n % 10;
				n /= 10;
			}
			n = sum;
		}
		 cout<<n<<endl;
	}
}
