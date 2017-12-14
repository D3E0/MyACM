#include <stdio.h>
#include <string.h>
int main()
{
	int n,sum;
	while(~scanf("%d",&n))
	{
		if(n==0) break;
		sum=0;
		while(n>=3)
		{
			sum+=n/3;
			n=n/3+n%3;
		}
		if(n==2) sum++;
		printf("%d\n",sum);
	}
	return 0;
}
