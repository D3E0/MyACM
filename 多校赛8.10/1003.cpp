#include <iostream> 
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXN = 100005;
typedef long long LL;
struct ab
{
	LL v;
	int j;
}a[MAXN];
LL b[MAXN];
bool cmp(const ab &a,const ab &b)
{
	if(a.v>b.v)
	return true;
	else
	return false;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i].v);
			a[i].j=i+1;
		}
		sort (a,a+n,cmp);
		int len=2;
		for(int i=0;i<n;i++)
		{
			if(a[i].j%len!=0)
			{
				b[len++]=a[i].v;
				i=-1;
			}
			if(len>n)
			break;
		}
		for(int i=2;i<len;i++)
		{
			if(i==len-1)
			printf("%lld\n",b[i]);
			else
			printf("%lld ",b[i]);
		}
	}
	return 0;
}
