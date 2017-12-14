#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
const int MAXN = 100005;
int a[MAXN];
int an[MAXN];
LL ans;
void Merge(int begin,int end,int mid)
{
	int num = end - begin + 1;
	for(int i = 0; i < num; ++i)
	an[i] = a[begin + i];
	int n1,n2;
	n1 = mid - begin + 1;
	n2 = end - mid;
	int i = 0;
	int j = n1;
	for(int k = begin; k <= end; ++k)
	{
		if(i >= n1)
		a[k] = an[j++];
		else if(j >= n2 + n1)
		a[k] = an[i++];
		else if(an[i] > an[j])
		{
			a[k] = an[j++];
			ans += n1 - i;
		}		
		else
		a[k] = an[i++];
	}
}
void sort(int begin,int end)
{
	if(begin >= end)
	return;
	int mid = (begin + end) >> 1;
    sort(begin,mid);
    sort(mid + 1, end);	
    Merge(begin,end,mid);	
}

struct node
{
	LL x,y;
}b[MAXN];
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		ans = 0;
		LL ans1 = 0;
		LL x, y;
		int m = n / 2;
		for(int i = 0;i < m; ++i)
		{
			scanf("%lld %lld", &x, &y);
			if(x > y)
			{
				b[i].x = y;
				b[i].y = x;
				++ans1;
			}
			else
			{				
				b[i].x = x;
				b[i].y = y;
			}			
		}		
		for(int i = 0; i < m; ++i)
		a[i] = b[i].x;
		sort(0,m-1);
		printf("%lld\n", ans + ans1);
	}
	return 0;
}
