#include <iostream>
#include <queue> 
#include <limits.h>
#include <string.h>
using namespace std;
const int MAXN = 30005;
int a[MAXN];
int visit[MAXN];
typedef struct
{
	int index;
	int step;
}node;
int main()
{
	int N; 
	while(cin >> N)
	{
		memset(a, 0 , sizeof(a));
		memset(visit, 0 , sizeof(visit));
		for(int i = 0; i < N; ++i) cin >> a[i];
		int Min = INT_MAX;
		queue<node> q;
		node n = {0, 0};
		q.push(n);
		while(!q.empty())
		{
			node m = q.front();
			q.pop();
			if(a[m.index] + m.index >= N)
			{
				Min = Min > (m.step + 1) ? m.step + 1 : Min;
			}
			else
			{
				for(int i = m.index + 1; i <= m.index + a[m.index]; ++i)
				{
					if(visit[i] == 0)
					{
						node t = {i, m.step + 1};
						q.push(t);
						visit[i] = 1;
					}
				}
			}
		} 
		cout << Min << endl;
	}	
	return 0;
 } 
