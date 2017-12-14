#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxn 20005
typedef struct
{
	int t;
	int number;
}time;
time t1[maxn];
int cmp(const void* a,const void* b)
{
    return *(int*)a-*(int*)b;
}
int cmp1(const void* a,const void* b)
{
	time* c=(time*)a;
	time* d=(time*)b;
	if(c->t<d->t) return -1;
	else return 1;
}
int main()
{
	int T,N,L,i,a,b,c,x[20000],begin;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&N,&L);
		for(i=0;i<N;i++)
		{
			scanf("%d:%d:%d",&a,&b,&c);
			t1[i].t=a*60*60+b*60+c;
			t1[i].number=i+1;
		}
		qsort(t1,N,sizeof(time),cmp1);
		begin=t1[0].t;
		int p=1;
		x[0]=t1[0].number;
		for(i=1;i<N;i++)
		{
			if(begin+L<=t1[i].t)
			{
				x[p]=t1[i].number;
				p++;
				begin=t1[i].t;
			}
		}
		qsort(x,p,sizeof(int),cmp);
		printf("%d\n",p);
		for(i=0;i<p;i++)
		{
			if(i==p-1) printf("%d\n",x[i]);
			else printf("%d ",x[i]);
		}
	}
	return 0;
}
