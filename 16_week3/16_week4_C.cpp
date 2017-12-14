#include <iostream>
#include <algorithm> 
#include <cmath>
using namespace std;
typedef long long LL;
const LL mod = 1e9 + 7;
const MAXN = 105;
LL sum[MAXN], mul[MAXN];
LL x;

void start()
{
	sum[0] = 0;
	mul[0] = 1;
	for(int i = 1; i <= MAXN; ++i)
	{
		sum[i] += sum[i - 1] + i;
		mul[i] *= mul[i - 1] * i;
	}
}

void solve()
{
	LL p = *(upper_bound(sum, sum + MAXN, x) - 1);
	switch(x - p)
	{
		case 0:
			cout<<
		
	}
}

int main()
{
	LL T;
	cin >> T;
	start();
	while(T--)
	{
		cin>>x;	
		solve();
	}	
	return 0;
}
