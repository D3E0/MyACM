#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long a[1000005];
int main()
{
	
	int len = 0;
	for (int i = 0; i < 1000000; i++) 
	a[len++] = 3 * i * i + 3 * i + 1;
	int t;
	cin >> t;
	while (t--) 
	{
		long long n;
		cin >> n;
		long long ans = *lower_bound(a,a+len,n);
		if (ans == n)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
