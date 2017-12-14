#include <stdio.h>
int main()
{
	int T,cnt,count=0;
	long long a,b,x;
	scanf("%d",&T);
	while(T--)
	{
		cnt=0;
		scanf("%lld%lld",&a,&b);
		while(a>b)
		{
			x=a/2+1;
			a=a-(a%x);
			cnt++;
		}
		printf("Case %d: %d\n",++count,cnt);
	}
	return 0;
}
