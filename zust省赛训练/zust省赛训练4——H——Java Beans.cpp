#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int T,N,M,a[300],i,j,sum,max;
	scanf("%d",&T);
	while(T--)
	{
		max=0;
		memset(a,0,sizeof(a));
		scanf("%d%d",&N,&M);
		for(i=0;i<N;i++)
        scanf("%d",&a[i]);
        for(j=0;j<N;j++)
        {
        	sum=0;
        	for(i=0;i<M;i++)
            sum+=a[(j+i)%N];
            max=max>sum?max:sum;
		}
        printf("%d\n",max);
	}
	return 0;
}
