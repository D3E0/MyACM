#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <map>
#include <utility>
using namespace std;
typedef long long LL;
const LL MAXN = 1000005;
LL f[MAXN];
map<pair<LL,LL>,LL> dp;
LL gcd(LL a, LL b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

LL fs(LL n)
{
	if(f[n]!=-1)
	return f[n];
	if(n==1)
	return 1;
	LL sum = 0;
	for(LL j=1;j<=n;j++)
	{
		if(dp[(n,j)]!=0)
		sum+=dp[(n,j)];
		else
		{			
			dp[(n,j)]=ceil(n/j)+gcd(n,j);
			sum+=dp[(n,j)];
		}
		
	}
	f[n]=fs(n-1)+sum;
	return f[n];
}
int main()
{
    memset(f,-1,sizeof(-1));
	LL n;
	while(cin>>n)
	{		
		cout<<fs(n)<<endl;
	}
	return 0;
}
