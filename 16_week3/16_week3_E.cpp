#include <iostream>
#include <queue>
using namespace std;
int dir[4][2]={1,0,-1,0,0,1,0,-1};
int map[5][5],mark[5][5][2];
typedef struct Pnode
{
	int x,y;
}Pos;
queue<Pos> s;
Pos pi; 
void bfs()
{
	pi.x=-1;
    pi.y=-1;
    while(!s.empty())
    {
    	Pos p = s.front();
    	s.pop();
    	for(int i = 0; i < 4; ++i)
    	{				
    		if((p.x + dir[i][0]) >= 0&&(p.y + dir[i][1]) >= 0
			&&(p.x + dir[i][0]) < 5&&(p.y + dir[i][1]) < 5&&
			map[p.x+dir[i][0]][p.y+dir[i][1]] != 1)
			{
		        pi.x=p.x+dir[i][0];
		        pi.y=p.y+dir[i][1];
		        map[p.x][p.y]=1;
		        mark[pi.x][pi.y][0]=p.x;
		        mark[pi.x][pi.y][1]=p.y;
		        s.push(pi);
			}	
			if(pi.x == 0&&pi.y == 0)
			{				
				s=queue<Pos>();
				break;
			}	
		}
	}
}

int main()
{	
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
		cin>>map[i][j];
	}
	Pos pe;
	pe.x=4;
	pe.y=4;
	mark[4][4][0]=-1;
	mark[4][4][1]=-1;
	s.push(pe);
	bfs();
	while(pi.x != -1 || pi.y != -1)
	{
		cout<<"("<<pi.x<<", "<<pi.y<<")"<<endl;
		Pos temp = pi;
		pi.x=mark[temp.x][temp.y][0];
		pi.y=mark[temp.x][temp.y][1];
	}	
	return 0;
 } 
