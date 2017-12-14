#include <stdio.h>
int main()
{
	int n,m,sum,y,a;
	while(scanf("%d",&n)!=EOF)
	{
		int i;	
		a=1;
		sum=1;
		m=0;
	    for(i=1;;i++)
		{ 
			a*=2;
			if(sum+a>n)
			break; 
			sum+=a;      
		}
		y=n-sum;
		m+=i;
		int g,j;		
		while(i--&&i!=-1)
		{
		    g=1;
			for(j=0;j<i;j++)
			g*=2;
			if(g<=y)
			{
				m++;
				y=y-g;
			}
		}
		if(n==0) printf("-1\n");
		else
		printf("%d\n",m);
	}
	return 0;
}

