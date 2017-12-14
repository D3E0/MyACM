#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define maxn 100005
typedef struct
{
	int tb;
	int te;
}time;
time t[maxn];
int cmp(const void* a,const void* b)
{
	time* c=(time*)a;
	time* d=(time*)b;
	if(c->te>d->te) return 1;
	else if(c->te<d->te) return -1;
	else 
	{
		if(c->tb<d->tb) return -1;
		else return 1;
	}
}
int main()
{
	int T,n,r,i,ax,ay,az,dx,dy,dz,ans,num,first,count=0;
	double a,b,c;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&r);
		for(i=0;i<n;i++)
		{
			scanf("%d%d%d%d%d%d",&ax,&ay,&az,&dx,&dy,&dz);
			a=dx*dx+dy*dy+dz*dz;
			b=2*(dx+dy+dz);
			c=ax*ax+ay*ay+az*az-r*r;
			double delta=b*b-4*a*c;
			if(delta>0)
			{
				t[i].tb=(-b-sqrt(delta))/(2*a);
				t[i].te=(-b+sqrt(delta))/(2*a);
				if(t[i].tb<0) t[i].tb=0;
				if(t[i].te<0) t[i].te=0;
			}
		}
		qsort(t,n,sizeof(time),cmp);
		ans=num=1;
		first=0;
		for(i=1;i<n;i++)
		{
			if(t[first].te>=t[i].tb)
			ans++;
			else
			{
				first=i;
				num++;
			}
		}
		printf("Case %d: %d %d\n",++count,ans,num);
	}
	return 0;
}
