//============================================================================
//Name：最大上升子序列 LIS 动态规划 二分 nlogn poj3903
//9 2 1 5 3 6 4 8 9 7
//============================================================================
#include<cstdio>
#include<cstring>
#define INF 0x3f3f3f3f
using namespace std;
int dp[100005];

int BinSearch(int x, int low, int high) 
{
	int mid = 0;
	while (low <= high) 
	{
		mid = (low + high) >> 1;
		if (dp[mid] >= x) high = mid - 1;
		else low = mid + 1;
	}
	if(high == 0 || dp[high] < x)
	return high;
	else
	return mid;
}

int main() {
	int n, x;
	while (~scanf("%d", &n)) 
	{
		memset(dp, INF, sizeof(dp));
		for (int i = 0; i < n; ++i) {
			scanf("%d", &x);
			dp[BinSearch(x, 1, n) + 1] = x;
//			for(int j = 1; j <= n; ++j)
//			cout << dp[j] << ' ';
//			cout << endl;
		}
		printf("%d\n", BinSearch(INF, 1, n + 1));
	}
	return 0;

}
