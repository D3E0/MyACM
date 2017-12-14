#include <iostream>
#include <string>
#include <cmath>
#include <limits.h>
#include <algorithm>
using namespace std;

int main()
{
	long long n, m, t1, t2, t3, t4;
	while(cin >> n >> m >> t1 >> t2 >> t3 >> t4)
	{
		long long ans1, ans2;
		if (n > m)
		ans1 = t1 * (n - m  + n - 1) + t2 * 2 + t3;
		else
		ans1 = t1 * (m - 1) + t2 * 2 + t3;
		
		ans2 = t4 * (n - 1);
			
		if(ans1 < ans2 ) cout << ans1 <<endl;
		else cout <<ans2 <<endl;
	}
	return 0;
 } 
