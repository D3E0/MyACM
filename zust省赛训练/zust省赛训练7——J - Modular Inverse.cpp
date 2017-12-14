#include <stdio.h>
int main()
{
	int T,a,m,max,min,i;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&a,&m);
		max=m>a?m:a;
		min=m<a?m:a;
		if(!(max%min)) printf("Not Exist\n");
		else
		{
			i=1;
			while(i)
			{
				if(!((a*i-1)%m))
				{
					printf("%d\n",i);
					break;
				}
				i++;	
			}
		}
	}
	return 0;
}
