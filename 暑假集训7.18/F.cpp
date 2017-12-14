#include <cstdio>
#include <iostream>
using namespace std;
typedef long long LL;


LL mo(LL a,LL n,LL mod)
{
	if(!n) return 1;
	if(n==1)
	return a%mod;
    LL ans=mo(a,n>>1,mod);
    ans=ans*ans%mod;
    if(n&1) ans=ans*a%mod;
    return ans;
	 
}

int main()
{
	LL n;
	while(cin>>n)
	{
		cout<<mo(1378,n,10)<<endl;
	}
	return 0;
}
