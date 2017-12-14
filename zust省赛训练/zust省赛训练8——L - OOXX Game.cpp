#include <stdio.h>
int main()
{
	int T,count=0,n,m,i,sum,j;
	char s[105][105];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&m);
		sum=0;
		for(i=0;i<n;i++)
		scanf("%s",s[i]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(s[i][j]=='O')
				sum++;
			}
		}
		printf("Case %d: ",++count);
		if(sum%2==0)
		printf("Fat brother\n");
		else
		printf("Maze\n");
	}
	return 0;
}
