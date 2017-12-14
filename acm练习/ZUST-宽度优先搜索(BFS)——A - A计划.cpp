#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <queue>
char map[5][15][15];
int v[5][15][15],C,N,M,T,right;
int dir[4][2]={0,1,0,-1,1,0,-1,0};
int dfs(int a,int b,int c,int t)
{
	int x0,y0,z0,i;
	if(map[a][b][c]=='P')
	{
		right=1;
		return 0;
	}
	else if(map[a][b][c]=='#') 
	{
		x0=(a==0)?1:0;
		y0=b;
		z0=c;
		if(map[x0][y0][z0]!='*'&&v[x0][y0][z0]==0)
		{
			v[x0][y0][z0]=1;
			dfs(x0,y0,z0,t);
			v[x0][y0][z0]=0;
		}
	}
	else
	{
		for(i=0;i<4;i++)
		{
			x0=a;
             y0=b+dir[i][0];
            z0=c+dir[i][1];
            if(y0<0||y0>=N||z0<0||z0>=M) continue;
            if(t+1>T) continue;
            if(v[x0][y0][z0]==0&&map[x0][y0][z0]!='*')
            {
                v[x0][y0][z0]=1;
                dfs(x0,y0,z0,t+1);
                v[x0][y0][z0]=0;
		    }    
		}
	}
	return 0;
}
int main()
{
	int i,j;
	scanf("%d",&C);
	while(C--)
	{
		scanf("%d%d%d",&N,&M,&T);
        for(i=0;i<N;i++) scanf("%s",map[0][i]);
        for(i=0;i<N;i++) scanf("%s",map[1][i]);
		for(i=0;i<N;i++)  
        {  
            for(j=0;j<M;j++)  
            {  
                if(map[0][i][j]=='#')  
                    if(map[1][i][j]=='*'||map[1][i][j]=='#')  
                        map[0][i][j]=map[1][i][j]='*';  
                if(map[1][i][j]=='#')  
                    if(map[0][i][j]=='*'||map[0][i][j]=='#')  
                        map[0][i][j]=map[1][i][j]='*';  
            }  
        }
		map[0][0][0]='.';
        memset(v,0,sizeof(v));
        v[0][0][0]=1;
		right=0;
		dfs(0,0,0,0);
		if(right) printf("YES\n");
		else printf("NO\n"); 
	}
	return 0;
}
