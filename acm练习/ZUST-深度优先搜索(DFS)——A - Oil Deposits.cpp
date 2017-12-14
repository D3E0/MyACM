#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[105][105];
int m,n;
void dfs(int x,int y)
{
	if(a[x][y]!='@'||x<0||x>=m||y<0||y>=n)
	return;
	a[x][y]='*';
	dfs(x-1,y);
	dfs(x-1,y+1);
	dfs(x,y+1);
	dfs(x+1,y+1);
	dfs(x+1,y);
	dfs(x+1,y-1);
	dfs(x,y-1);
	dfs(x-1,y-1);
	return;
}
int main()
{
	int i,j,number;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		getchar();
	    if(m==0&&n==0) break;
		number=0;
		memset(a,0,sizeof(a));
		for(i=0;i<m;i++)
		{
			scanf("%s",a[i]);
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@')
				{
					dfs(i,j);
					number++;
				}
			}
		}
		printf("%d\n",number);
	}
}
