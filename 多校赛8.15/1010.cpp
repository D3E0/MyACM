#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long LL;
const int MAXN = 200005;
LL a[MAXN],b[MAXN];
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		LL n,m;
		scanf("%lld%lld",&n,&m);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
			b[i]=a[i];
		}
		
		if(m%2==0)
		{
			for(int i=1;i<=n;i++)
		    {
			    if(i!=n)
			    printf("%lld ",a[i]);
			    else
			    printf("%lld\n",a[i]);
		    }
		}
		else
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<i;j++)
				{
					if((i-j)%2!=0)
					{
						if(((i-j)*m)%2!=0)
					    b[i]^=a[j];
					}	
				}
			}
		    for(int i=1;i<=n;i++)
		    {
			    if(i!=n)
			    printf("%lld ",b[i]);
			    else
			    printf("%lld\n",b[i]);
		    }
		}	    
	}
	return 0;
 } 
