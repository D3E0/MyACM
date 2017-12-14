#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	char b[100],g[100],x[50];
	scanf("%d",&T);
	while(T--)
	{
		memset(b,0,sizeof(b));
		memset(g,0,sizeof(g));
		memset(x,0,sizeof(x));
		scanf("%s %s %s",b,g,x);
		printf("%s will survive\n",g);
	}
	return 0;
}
