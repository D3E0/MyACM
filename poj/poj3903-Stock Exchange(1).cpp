//============================================================================
//Name：最大上升子序列 LIS 动态规划 二分 nlogn poj3903
//9 2 1 5 3 6 4 8 9 7
//============================================================================
#include<iostream>
#include<cstring>
#define INF 0x3f3f3f3f
using namespace std;
int dp[100005];

int BinSearch(int x, int low, int high) 
{
	int mid = 0;
	while (low < high) 
	{
		mid = (low + high) >> 1;
		if (dp[mid] >= x) high = mid;
		else low = mid + 1;
	}
	return low;
}

int main() {
	ios::sync_with_stdio(false);
	int n, x;
	while (cin >> n) 
	{
		memset(dp, INF, sizeof(dp));
		for (int i = 0; i < n; ++i) {
			cin >> x;
			dp[BinSearch(x, 0, n)] = x;
//			for(int j = 0; j < n; ++j)
//			cout << dp[j] << ' ';
//			cout << endl;
		}
		cout << BinSearch(INF, 0, n) << endl;
	}
	return 0;

}
