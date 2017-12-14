#include <stdio.h>
#include <string.h>
#include <math.h>
int v[55][55][55],map[55][55][55],K,A,B,C,T,tt;
int dir[6][3]={0,0,1,0,0,-1,0,1,0,0,-1,0,1,0,0,-1,0,0};
int dfs(int a,int b,int c,int t)
{
	int x0,y0,z0,i;
	if(t>T) return 0;
	if((abs(A-1-a)+abs(B-1-b)+abs(C-1-c))>T-t) return 0;
	if(a==A-1&&b==B-1&&c==C-1)
	{
		tt=t;
		return 0;
	}
	else
	{
		for(i=0;i<6;i++)
		{
			x0=a+dir[i][0];
            y0=b+dir[i][1];
            z0=c+dir[i][2];
            if(x0<0||x0>=A||y0<0||y0>=B||z0<0||z0>=C) continue;
            if(t+1>T) continue;
            if((v[x0][y0][z0]==0||t<v[x0][y0][z0])&&map[x0][y0][z0]!=1)
            {
                v[x0][y0][z0]=t;
                map[x0][y0][z0]=1;
                dfs(x0,y0,z0,t+1);
                map[x0][y0][z0]=0;
		    }    
		}
	}
	return 0;
}
int main()
{
	int i,j,k;
	scanf("%d",&K);
	while(K--)
	{
		memset(v,0,sizeof(v));
		memset(map,0,sizeof(0)); 
		scanf("%d%d%d%d",&A,&B,&C,&T);
        for(i=0;i<A;i++) 
        {
        	for(j=0;j<B;j++)
        	{
        		for(k=0;k<C;k++)
				scanf("%d",&map[i][j][k]);
			}
		}
        v[0][0][0]=1;
		tt=-1;
		if(map[A-1][B-1][C-1]!=1)
		dfs(0,0,0,0);
	    printf("%d\n",tt); 
		
	}
	return 0;
}
