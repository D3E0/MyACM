#include <stdio.h>
int main()
{
	int m,n,i,t;
	long x,y;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(m>n)
		{
			t=m;
			m=n;
			n=t;
		}
		x=y=0;
		for(i=m;i<=n;i++)
		{
			if(i%2==0)
			x+=i*i;
			else 
			y+=i*i*i;
		}
		printf("%ld %ld",x,y);
		printf("\n");
	}
	return 0;
}