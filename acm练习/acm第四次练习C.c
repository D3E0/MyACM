#include <stdio.h>
int main()
{
	int r,e,c,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&r,&e,&c);
		if((e-c)>r)
		printf("advertise\n");
		else if((e-c)==r)
		printf("does not matter\n");
		else
		printf("do not advertise\n");
	}
	return 0;
}
