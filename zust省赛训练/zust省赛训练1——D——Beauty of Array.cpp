#include <stdio.h>
#include <string.h>
#define maxn 100005
int a[maxn];
int main()
{
	int T,N,i,x;
	long sum,ans;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		sum=0;
		ans=0;
		memset(a,0,sizeof(a));
		for(i=1;i<=N;i++)
		{
			scanf("%d",&x);
            ans+=(i-a[x])*x;
			sum+=ans;
            a[x]=i;
		}
		printf("%ld\n",sum);
	}
	return 0;
}
