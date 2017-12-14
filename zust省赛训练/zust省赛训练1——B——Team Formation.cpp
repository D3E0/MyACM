#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxn 1000005
int a[maxn],bit[50];
void solve(int x)
{
	int l=31;
	while(l>=0)
	{
		if(x&(1<<l))
		{
			bit[l]++;
			return;
		}
		l--;
	}
}
int main()
{
	int T,N,i,sum;
    scanf("%d",&T);
	while(T--)
	{
		sum=0;
		memset(a,0,sizeof(a));
		memset(bit,0,sizeof(bit));
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
			solve(a[i]);
		}
		for(i=0;i<N;i++)
		{
             int l=31;
             while(l>=0)
             {
             	if(a[i]&(1<<l)) break;
             	l--;
			 }
			 while(l>=0)
			 {
			 	if(!(a[i]&(1<<l))) sum+=bit[l];
			 	l--;
			 }
		}
		printf("%d\n",sum);
	}
	return 0;
}

