#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxn 100005
int x[maxn];
int N,C;
int comp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int good(int d)
{
	int cn=0,p=x[0];   
    for (int i=1;i<N;i++)
	{
		if (x[i]>=p+d)   
        {    
            cn++;   
            p=x[i];   
        }   
        if (cn>=C-1)   return 1; 
	}   
    return 0;    
}
int main()
{
	int i,begin,end,mid;
	while(scanf("%d %d",&N,&C)==2)
	{
		memset(x,0,sizeof(x));
		for(i=0;i<N;i++)
		scanf("%d",&x[i]);
		qsort(x,N,sizeof(int),comp);
		begin=0;
		end=(x[N-1]-x[0])/(C-1);
		while(begin-end<1)
		{
			mid=(begin+end)/2;
			printf("%d %d %d\n",begin,end,mid);
			if(good(mid)) begin=mid+1;
			else end=mid-1;
		}
		printf("%d %d %d\n",begin,end,mid);
		printf("%d\n",begin-1);
	}
 } 
