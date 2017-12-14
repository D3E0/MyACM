#include <stdio.h>
#define N 100
int main()
{
	int n[N],m,deno,x=0,i,t,j;
	float sum[N];
	scanf("%d",&m);
	for(i=0;i<=m-1;i++)
	{
		scanf("%d",&n[i]);
	    sum[i]=0;
	}	
	for(i=0;i<=m-1;i++)
	{
	    t=-1;
	    for(deno=1;deno<=n[i];deno++)
        {   
		    t=t*-1;
		    sum[i]=sum[i]+t*(1.0/deno);
	    }
	}
	for(i=0;i<=m-1;i++)
	printf("%.2f\n",sum[i]);
	return 0;
		
}