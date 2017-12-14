#include <iostream>
#include <algorithm>
using namespace std;
int dp[1005][33];
int main()
{
	int T,W,x;
	cin>>T>>W;
	for(int i = 1; i <= T; i++)
	{
		cin>>x;
		if(i == 1)
		{
			if(x%2==1)
			dp[1][0] = 1;
			else
			dp[1][1] = 1;
		}
		int m = i > W ? W : i;
		for(int j = 0; j <= m; j++)
		{
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]);
			if(j % 2 == 0 && x == 1)
			dp[i][j]++;
			else if(j % 2 ==1 && x == 2)
			dp[i][j]++;			
		}
	}
	cout<<dp[T][W]<<endl;
	return 0; 
}
