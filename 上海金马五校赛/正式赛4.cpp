#include <cstdio>
#include <iostream>
using namespace std;
typedef long long LL;

const LL c=1e9+7;

LL mo(LL a,LL n,LL mod)
{
	if(!n) return 1;
	if(n==1)
	return a%c;
    LL ans=mo(a,n>>1,mod);
    ans=ans*ans%mod;
    if(n&1) ans=ans*a%mod;
    return ans;
	 
}

int main()
{
	LL n;
	while(~scanf("%lld",&n))
	{
		printf("%lld\n",(mo(2,n,c)-1%c)%c);
	}
	return 0;
}
