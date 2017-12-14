#include <stdio.h>
int main()
{
	int n,i,j,sum1,sum2,a,b;
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{
		sum1=0;
		sum2=0;
		scanf("%d%d",&a,&b);
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			sum1+=j;
		}
		for(j=1;j<b;j++)
		{
			if(b%j==0)
			sum2=sum2+j;
		}
		if(sum1==b&&sum2==a)
		printf("YES\n");
		else
		printf("NO\n");
	
	}
	return 0;
	
}
