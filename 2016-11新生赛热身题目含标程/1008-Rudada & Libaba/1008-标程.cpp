#include <iostream>
#include <cmath>
using namespace std;
const int MAXN = 1000100;
int vis[MAXN], prime[MAXN], pos = 0;

void init ()
{
	vis[1] = 1;
	for (int i = 1; i < MAXN; ++i)
	{
		if (vis[i]) continue;
		prime[pos++] = i;
		for (int j = i + i; j < MAXN; j += i)
			vis[j] = 1;
	}
}

int main ()
{
	ios_base::sync_with_stdio (0);
	long long i, n;
	init ();
	bool ok = 1;
	while (cin >> n)
	{
	    for (i = 0; i < pos; ++i)
		{
			if (n%prime[i] == 0)
			{
				cout << n / prime[i] << endl;
				break;
			}
		}
	}
	return 0;
}
