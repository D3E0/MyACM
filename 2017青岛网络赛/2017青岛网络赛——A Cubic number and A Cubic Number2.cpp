#include<iostream> 
#include<stdio.h> 
#include<algorithm>
using namespace std;
int main()
{
	int t;
	long long n,m,i,j,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		k=0;
		for(i=1;i<1000000;i++)
		{
			m=3*i*i+3*i+1;
			if(m==n)
			{
				k=1;
				break;
			}
			else if(m > n)
			break;
		}
		if(k == 1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
