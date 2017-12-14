#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	double a[40],b[40],sum,p,s;
	while(scanf("%d",&n),n)
	{
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
			
		}
		sort(a,a+n);
		sum=0;
		for(i=n-1;i>1;i--)
		{
			if(a[i-1]+a[i-2]>a[i])
			{
				p=(a[i-2]+a[i-1]+a[i])/2;
				s=sqrt(p*(p-a[i])*(p-a[i-1])*(p-a[i-2]));
				sum=sum+s;
				i=i-2;
			}
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}
