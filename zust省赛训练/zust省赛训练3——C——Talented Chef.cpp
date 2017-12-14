#include <stdio.h>
#include <math.h>
int main()
{
	int T,N,M,i,max,sum,ave,x;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&N,&M);
		sum=ave=max=0;
		for(i=0;i<N;i++)
		{
			scanf("%d",&x);
			max=x>max?x:max;
			sum+=x;
		}
		ave=sum/M;
		if(sum%M) ave++;
		if(M>=N)  
        printf("%d\n",max);  
        else  
		printf("%d\n",ave>max?ave:max); 
	}
	return 0;
 } 
