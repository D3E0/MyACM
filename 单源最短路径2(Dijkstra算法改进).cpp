#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector> 
#include <queue>
#define INF 0x3f3f3f3f 

using namespace std;
const int MAX_V = 10000;
  
struct edge
{
	int to;
	int cost;
};
typedef pair<int,int> P;  //first是最短距离，second是顶点的编号 
int V;   
vector<edge> G[MAX_V];
int d[MAX_V]; 

//求从起点s出发到各个顶点的最短距离    
void dijkstra(int s)
{
	//通过指定greater<P>参数，堆按照first从小到大的顺序取出值
	priority_queue<P, vector<P>, greater<P> > que; 
	fill(d,d+V,INF);
	d[s] = 0;
	que.push(P(0,s));
	
	while(!que.empty())
	{
		P p = que.top();
		que.pop();
		int v = p.second;
		if(d[v] < p.first)
		continue;
		for(int i = 0; i < G[v].size(); ++i)
		{
			edge e = G[v][i];
			if(d[e.to] > d[v] + e.cost)
			{
				d[e.to] = d[v] + e.cost;
				que.push(p(d[e.to], e.to));
			}
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
