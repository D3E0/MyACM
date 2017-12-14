#include <iostream>
#include <algorithm>
using namespace std;
int dp[400][400];
int main()
{
	int N;
	cin>>N;
	for(int i = 1; i <= N; ++i)
	{
		for(int j = 0; j <= i; ++j)
		{
			int x;
			cin>>x;			
			if(j == 0)
			{
				if(i == 0)
				dp[i][j] = 0;
				else
				dp[i][j] = dp[i - 1][j];
			}
			else if(j == i)
			dp[i][j] = dp[i - 1][j - 1];
			else
			dp[i][j] = max(dp[i-1][j],dp[i -1][j - 1]);
			dp[i][j] += x;
		}
	}
	int Max = 0;
	for(int i = 0; i < N; ++i)
	Max = max(Max,dp[N][i]);
	cout<<Max<<endl;
	return 0;
}
