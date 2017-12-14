#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 100005
int day[maxn],N,M;
int good(int mid)
{
	int d=1,i,sum=0;
	for(i=0;i<N;i++)
	{
		if((sum+day[i])<=mid)
		{
			sum+=day[i];
		}
		else
		{
			sum=day[i];
			d++;
			
		}	
	}
	if(d>M) return 0;
    return 1; 
}
int main()
{
	int begin,end,mid,sum,max;
	int i;
	while(scanf("%d%d",&N,&M)!=EOF)
	{
		max=sum=0;
		memset(day,0,sizeof(day));
		for(i=0;i<N;i++)
		{
			scanf("%d",&day[i]);
			sum+=day[i];
			if(day[i]>max) max=day[i];
		}
		//printf("max=%ld\n",max);
		begin=max;
		end=sum;
		mid=(begin+end)/2;
		while(begin-end<0)
		{	
			//printf("1.%ld %ld %ld\n",begin,end,mid);
			if(good(mid)) end=mid-1;
			else begin=mid+1;
			mid=(begin+end)/2;
			//printf("2.%ld %ld %ld\n",begin,end,mid);
		}
		//printf("%ld %ld %ld\n",begin,end,mid);
		printf("%d\n",mid);
	}
}
