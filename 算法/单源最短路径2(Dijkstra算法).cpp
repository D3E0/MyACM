#include <iostream>
#include <algorithm>
#include <cstring>
#define INF 0x3f3f3f3f 

using namespace std;

const int MAX_V = 10000;
int cost[MAX_V][MAX_V];                       //cost[u][v]表示边e=(u,v)的权值(不存在这条边时设为INF) 
int d[MAX_V];                                 //顶点s出发的最短距离
bool used[MAX_V];                             //已经使用过的图
int V;                                        //顶点数
    
//求从起点s出发到各个顶点的最短距离    
void dijkstra(int s)
{
	fill(d,d+V,INF);
	fill(used,used+V,false);
	d[s] = 0;
	while(true)
	{
		int v = -1;
		//从尚未使用过的顶点中选择一个距离最小的顶点
		for(int u = 0; u < V; u++)
		{
			if(!used[u] && (v == -1 || d[u] < d[v]))
			v = u;
		} 
		if(v == -1)
		{
			break;
		}
		used[v] = true;
		
		for(int u = 0; u < V; u++)
		{
			d[u] = min(d[u], d[v] + cost[v][u]);
		}
	}
}                           
int main()
{
	memset(cost,INF,sizeof(cost));
	cost[0][1] = 2;
	cost[0][2] = 5;
	cost[1][2] = 4;
	cost[1][3] = 6;
	cost[1][4] = 10;
	cost[2][3] = 2;
	cost[3][5] = 1;
	cost[4][5] = 3;
	cost[4][6] = 5;
	cost[5][6] = 9;
	
	cost[1][0] = 2;
	cost[2][0] = 5;
	cost[2][1] = 4;
	cost[3][1] = 6;
	cost[4][1] = 10;
	cost[3][2] = 2;
	cost[5][3] = 1;
	cost[5][4] = 3;
	cost[6][4] = 5;
	cost[6][5] = 9;
	V = 7;
	dijkstra(0);
	for(int i = 0; i < V; i++)
	cout<<d[i]<<endl;
	return 0;
}
