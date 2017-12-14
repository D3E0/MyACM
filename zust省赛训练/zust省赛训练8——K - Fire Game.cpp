//it is wrong!!!
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[15][15];
int m,n,t,max;
void dfs(int x,int y)
{
	if(a[x][y]!='#'||x<0||x>=m||y<0||y>=n)
	return;
	t++;
	max=max>t?max:t;
	a[x][y]='.';
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x+1,y);
	dfs(x,y-1);
	return;
}
int main()
{
	int T,i,j,number,count=0;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d%d",&m,&n);
	    if(m==0&&n==0) break;
		number=max=t=0;
		memset(a,0,sizeof(a));
		for(i=0;i<m;i++)
		scanf("%s",a[i]);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='#')
				{
					dfs(i,j);
					number++;
				}
			}
		}
		if(number>2) printf("Case %d: -1",++count);
		else printf("Case %d: %d\n",++count,max);
	}
	return 0;
}
