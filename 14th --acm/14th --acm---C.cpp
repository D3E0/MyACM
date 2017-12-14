#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct
{
	int g1[205];
	char g2[30];
}g[205];
int main()
{
	int T,n,q,c,i,m[205],a[105][30];
	char kf[205][30],s[205][205][30];
	scanf("%d",&T);
	while(T--)
	{
		memset(g,0,sizeof(g));
        scanf("%d%d",&n,&q);
        scanf("%d",&c);
        for(i=0;i<c;i++) 
		{
			scanf("%s",kf[i]);
			strcpy(g[i],kf[i]);
		}
        for(i=0;i<c;i++) 
		{
			scanf("%d",&m[i]);
			for(j=0;j<m[i];j++)
			{
				scanf("%s",s[i][j]);
			}
			
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
			scanf("%d",a[i][j]);
			a[i][j]='\0';
			for(j=0;j<c;j++)
			{
				if(strcmp(a[i],g[j].g1)) 
				{
					printf("%s\n",g[j].g2);
					break;
				}
				else
				printf("")
			}
		}
	}
	return 0;
}
