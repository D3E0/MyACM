#include <stdio.h>
int main()
{
	int T,N,x,num;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		num=0;
		while(N--)
		{
			scanf("%d",&x);
			if(x>6000) num++;
		}
		printf("%d\n",num);
	}
	return 0;
}
