#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
typedef long long LL;
int main()
{
	int count=0;
	LL m,k,k1,k2;
	while(~scanf("%lld %lld",&m,&k))
	{
		printf("Case #%d: ",++count);
		if(k<=m)
		printf("%lld\n",k);
		else
		{
			k1=(k-m)/(m-1);
			k2=(k-m)%(m-1);
			if(k1*(m-1)==k-m)
			{
				if(k1%2==1)
				printf("%lld\n",m-1);
				else
				printf("%lld\n",m);
			}
			else
			printf("%lld\n",k2);
		}		
	}
	return 0; 
}
