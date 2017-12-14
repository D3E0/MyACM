#include <cstdio>
int map[105][105];
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n))
	{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			scanf("%d",&map[i][j]);
		}
		for(int i=0;i<n;i++)
		{
		    int x=0;
			for(int j=0;j<m;j++)
			x+=map[j][i];
			if(i!=(n-1))
			printf("%d ",x);
			else
			printf("%d\n",x);
		}
	}
	return 0;
}
