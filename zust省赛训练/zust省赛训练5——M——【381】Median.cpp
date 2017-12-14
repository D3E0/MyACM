#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void* a,const void* b)
{
	return *(double*)a-*(double*)b;
}
double a[505];
int main()
{
	int T,n,i;
	scanf("%d",&T);
	while(T--)
	{
		memset(a,0,sizeof(a));
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%lf",&a[i]);
		qsort(a,n,sizeof(double),cmp);
		if(n%2) printf("%.3lf\n",a[(n-1)/2]);
		else printf("%.3lf\n",(a[n/2]+a[(n-2)/2])/2);
	}
	return 0;
}
