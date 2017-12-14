#include <iostream>
#include <algorithm>
#include <cstring>
#define INF 0x3f3f3f3f
using namespace std;
const int MAX_V = 10005;
int vis[MAX_V];
int d[MAX_V];
bool flag = false;
int N,nod;
void solve(int n)
{
	if(nod == N && d[n] == 1)
	{
		flag = true;
		return;
	}
	if(nod != N && d[n]==1)
	return;
	if(n == INF)
	return ;
	if(!vis[d[n]])
	{
	   	vis[d[n]] = 1;
	   	++nod;
	    solve(d[n]);
	    vis[d[n]] = 0;
	    --nod;
	}
}
int main()
{
	int M;
	while(cin>>N>>M)
	{
		flag = false;
		memset(d,INF,sizeof(d));
		memset(vis,0,sizeof(vis));
		if(N == 0 && M == 0)
		break;
		for(int i = 0; i < M; ++i)
		{
			int u, v;
			cin >> u>> v;
			d[u] = v;
		}			
		vis[1] = 1;
		nod = 1;
		solve(1);
		if(flag)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}
