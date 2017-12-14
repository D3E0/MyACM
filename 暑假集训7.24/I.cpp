#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	int T,N,M,m[105][105],dp[105][55],n[105],test;
	cin>>T;
	while(T--)
	{
		memset(m,0,sizeof(m));
		memset(n,0,sizeof(n));
		memset(dp,0,sizeof(dp));
	    cin>>N>>M;
	    for(int i=1;i<=M;i++)
	    {
	    	for(int j=1;j<=M;j++)
	    	cin>>m[i][j];
		}
		for(int i=1;i<=N;i++)
		cin>>n[i]; 
		for(int i=2;i<=N;i++)
		{
			if(n[i]>0)
			{
				if(n[i-1]>0)
				dp[i][n[i]]=dp[i-1][n[i-1]]+m[n[i-1]][n[i]];
				else
				{
					for(int k=1;k<=M;k++)
					dp[i][n[i]]=max(dp[i][n[i]],dp[i-1][k]+m[k][n[i]]);
				}
			}
			else
			{
				if(n[i-1]>0)
				{
					for(int k=1;k<=M;k++)
					dp[i][k]=max(dp[i][k],dp[i-1][n[i-1]]+m[n[i-1]][k]);
				}
				else
				{
					for(int j=1;j<=M;j++)
					{
						for(int k=1;k<=M;k++)
						dp[i][j]=max(dp[i][j],dp[i-1][k]+m[k][j]);    
					}					
				}
			}
		}
		if(n[N]>0)
		cout<<dp[N][n[N]]<<endl;
		else
		{
			int Max=-1;	
			for(int i=1;i<=M;i++)
			Max=max(Max,dp[N][i]);
			cout<<Max<<endl;
		}
	}
	return 0;
}
