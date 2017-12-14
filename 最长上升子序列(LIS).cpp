#include <iostream>
#include <algorithm>
#define INF 0x3f3f3f3f
using namespace std;
const int MAX_N = 100005;
int dp[MAX_N], n, x, i;
int main(){
	ios::sync_with_stdio(false);
    while(cin >> n)
    {
		memset(dp, INF, sizeof(dp));
    	for (int i = 0; i < n; ++i) 
		{
        	cin >> x;
			*lower_bound(dp, dp + n, x) = x;
    	}
    	cout << lower_bound(dp, dp + n, INF) - dp << endl;
	}   
    return 0;
}
