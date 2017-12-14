#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#define INF 0x3f3f3f3f
using namespace std;
const int MAX = 1005;
int map[MAX][MAX],n,map2[MAX][MAX];
int solve()
{
	for(int k = 1; k <= n;++k)
	{
		for(int i = 1; i <= n;++i)
		{
			for(int j = 1; j <= n;++j)
			{
				map[i][j] = min(map[i][j],map[i][k]+map[k][j]);
			}
		}
	}
	int t = 0;
	for(int i = 1; i <= n;++i)
	{
		for(int j = 1; j <= n;++j)
		t=max(t,map[i][j]);	
	}
	return t;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		queue<pair<int,int> > q;
		int u,v;
		cin>>n;
		memset(map,INF,sizeof(map));
		for(int i = 1; i < n; i++)
		{
			cin>>u>>v;
			map[u][v]=1;
			map[v][u]=1;
			map[i][i]=0;
		}
		map[n][n] = 0;		 
		int Min = INF;
		memcpy(&map2[0][0],&map[0][0],sizeof(map));
		for(int i = 1; i <= n;++i)
	    {
		    for(int j = 1; j <= n;++j)
		    {
		    	if(map[i][j] == INF)
		    	q.push(make_pair(i,j));
			}		    	
	    }	    
	    while(!q.empty())
	    {
	    	pair<int,int> p = q.front();
	    	q.pop();
	    	map[p.first][p.second]=1;
	    	map[p.second][p.first]=1;
	    	Min=min(Min,solve());
	    	map[p.first][p.second]=INF;
	    	map[p.second][p.first]=INF;
	    	memcpy(&map[0][0],&map2[0][0],sizeof(map2));
		}
		cout<<Min<<endl;
	}
	return 0;
}
