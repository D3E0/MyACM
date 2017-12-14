#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 50005
long L,D[maxn],N,M;
int comp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int good(long x)
{
	long i,before=0,rock=0;  
    for (i=1;i<=N+1;)  
    {  
        if (D[i]-D[before]>=x)//这块用于判断是否去掉石头  
        {  
            i++;  
            before=i-1;  
        }  
        else  
        {  
            i++;  
            rock++;  
        }  
    }  
    if (rock<=M)  return 1;   
    else  return 0;   
}
int main()
{
	int i;
	long begin,end,mid;
	while(scanf("%ld%ld%ld",&L,&N,&M)!=EOF)
	{
		memset(D,0,sizeof(D));
		for(i=1;i<=N;i++)
		scanf("%ld",&D[i]);
		D[0]=0;
		D[N+1]=L;
		qsort(D,N+2,sizeof(long),comp);
		begin=0;
		end=2*L;
		while(begin-end<1)
		{
			mid=(begin+end)/2;
			//printf("1.%ld %ld %ld\n",begin,end,mid);
			if(good(mid)) begin=mid+1;
			else end=mid-1;
			//printf("2.%ld %ld %ld\n",begin,end,mid);	
		}
		//printf("\n%ld %ld %ld\n",begin,end,mid);
		printf("%ld\n",begin-1);
	}
}
