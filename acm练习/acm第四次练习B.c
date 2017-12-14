#include <stdio.h>
#include <math.h>
int main()
{
	int n,r,t,i,j,x;
	char a[100];
	char c[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		t=(int)fabs(n);
		for(i=0;;i++)
		{
			x=t%r;
			if(x>=10)
			a[i]=c[x-10];
			else
			a[i]=x+'0';
			t=t/r;
			if(t==0)
			break;
		}
		if(n<0)
		printf("-");
		for(;i>=0;i--)
		printf("%c",a[i]);
		printf("\n");
	}
	return 0;

}
