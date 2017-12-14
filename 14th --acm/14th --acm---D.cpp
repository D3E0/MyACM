#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
	int a;
	int b;
}point;
point p[105],q[105];
int cmp(const void* a,const void* b)
{
	point* c=(point*)a;
	point* d=(point*)b;
	if(c->a>d->b) return 1;
	else return 0;
}
int main()
{
	int T,n,m,x,y,i,j,f;
	scanf("%d",&T);
	while(T--)
	{
		f=0;
        scanf("%d%d%d%d",&n,&m,&x,&y);
        for(i=0;i<x;i++)
        {
        	scanf("%d%d",&p[i].a,&p[i].b);
		}
		for(i=0;i<y;i++)
		scanf("%d%d",&q[i].a,&q[i].b);
        qsort(p,x,sizeof(point),cmp);
        qsort(q,y,sizeof(point),cmp);
        for(i=0;i<x;i++)
        {
        	for(j=0;j<y;j++)
        	{
        		if(q[j].b<=n)
        		{
        			if(q[j].a<=p[i].a&&q[j].b>=p[i].a&&q[j].b<=p[i].b)
        		  {
        			if((q[j].b-p[i].a+1)>=m)
					f=f+1+(q[j].b-p[i].a+1)%m+((q[j].b-p[i].a+1)/m-1)*m;
				  }
				  else if(q[j].a>=p[i].a&&q[j].b<=p[i].b)
        		  {
        			if((q[j].b-q[j].a+1)>=m)
					f=f+1+(q[j].b-q[j].a+1)%m+((q[j].b-q[j].a+1)/m-1)*m;
				  }
				}
				else
				{
				   if(p[i].a<=n)
				   {
				   		if(q[j].a<=p[i].a&&n<=p[i].b)
        		      {
        			     if((n-p[i].a+1)>=m)
					      f=f+1+(n-p[i].a+1)%m+((n-p[i].a+1)/m-1)*m;
				     }
				     else if(q[j].a<=p[i].a&&n>p[i].b)
				     {
        			     if((p[i].b-p[i].a+1)>=m)
					      f=f+1+(p[i].b-p[i].a+1)%m+((p[i].b-p[i].a+1)/m-1)*m;
				     }
				   }
				   else if(q[j].a>=p[i].a&&q[j].a<=n)
        		  {
        			if((n-q[j].a+1)>=m)
					f=f+1+(n-q[j].a+1)%m+((n-q[j].a+1)/m-1)*m;
				  }
				}
        		if(p[i].b<=n)
        		{
        		   if(p[i].a>=q[j].a&&p[i].b<=q[j].b)
        		  {
        			if((p[i].b-p[i].a+1)>=m)
        			f=1+(p[i].b-p[i].a+1)%m+((p[i].b-p[i].a+1)/m-1)*m;
				  }
				  else if(q[j].a>=p[i].a&&q[j].a<=p[i].b&&q[j].b>=p[i].b)
        		  {
        			if((p[i].b-q[j].a+1)>=m)
        			f=f+1+(p[i].b-q[j].a+1)%m+((p[i].b-q[j].a+1)/m-1)*m;
				  }
				}
        		else
        		{
        			if(p[i].a>=q[j].a&&p[i].a<=n)
        		  {
        			if((n-p[i].a+1)>=m)
        			f=1+(n-p[i].a+1)%m+((n-p[i].a+1)/m-1)*m;
				  }
				  else if(q[j].a>=p[i].a&&q[j].a<=n)
        		  {
        			if((n-q[j].a+1)>=m)
        			f=f+1+(n-q[j].a+1)%m+((n-q[j].a+1)/m-1)*m;
				  }
				}
        		
        		 if(q[j].b<p[i].a||q[j].a>p[i].b) break;
			}
		}
		printf("%d\n",f);
	}
	return 0;
}
