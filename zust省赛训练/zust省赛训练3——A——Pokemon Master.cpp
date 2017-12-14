#include <stdio.h>
#include <string.h>
int main()
{
	int i,T,N,M,a1[7],a2[7],sum1,sum2;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&N,&M);
		sum1=sum2=0;
		memset(a1,0,sizeof(a1));
		memset(a2,0,sizeof(a2));
		for(i=0;i<N;i++)
		{
			scanf("%d",&a1[i]);
			sum1+=a1[i];
		}
		for(i=0;i<M;i++)
		{
			scanf("%d",&a2[i]);
			sum2+=a2[i];
		}
		if(sum1>sum2) printf("Calem\n");
		else if(sum1<sum2) printf("Serena\n");
		else printf("Draw\n");
	}
	return 0;
}
