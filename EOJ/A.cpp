#include <iostream>
#include <map>
using namespace std;

int main()
{
	int p;
	map<int, int> m;
	int a[6], b[6];
	cin >> p;
	for(int i = 0; i < 6; ++i) cin >> a[i];
	
	for(int i = 0; i < 6; ++i) cin >> b[i];
	
	
	for(int i = 0; i < 6; ++i)
	{
		for(int j = 0; j < 6; ++j)
		{
			m[(a[i] + b[j]) % p]++;
		}
	}
	
	int flag = 0, ans = m[0];
	
	for(int i = 1; i < p; ++i)
	{
		if(ans != m[i])
		flag = 1;
		if(flag) break;
	}
	
	cout << (flag ? "NO" : "YES") << endl;
	
	return 0;
}

