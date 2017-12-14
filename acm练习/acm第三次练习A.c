#include <stdio.h>
#define N 100
int main()
{
	char a[N];
	int i,m=0,n,x,t[N];
	scanf("%d",&x);
    while (m<=x)
    {
    	n=0;
    	gets(a);
	    for(i=0;a[i]!='\0';i++)
	    {
		    if(a[i]>='0'&&a[i]<='9')
		    n++;
	    }
	    t[m]=n;
		m++;		
    }
    for(i=1;i<=x;i++)
	printf("%d\n",t[i]);	
	return 0;
}