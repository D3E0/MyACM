#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long gcd(long long x, long long y)
{
	long long Rem;
    while(y > 0)
    {
        Rem = x % y;
        x = y;
        y = Rem;
    }
    return x;
}

int main()
{
    long long m, n, k;
	while(cin >> m >> n >> k)
	{
		long long x, y, t;
		x = m;
		y = pow(2, k);
		y = y * n + m;
		//cout << y << endl;
		t = gcd(x, y);
		cout << x / t << '/' << y / t << endl;
	} 
 } 
