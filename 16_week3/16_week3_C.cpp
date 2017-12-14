#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
const int MAXN = 100005;
typedef long long LL;
LL a[MAXN],n,k;
bool check(int t)
{
	LL sum = 0;
	for(int i = 0; i< n; ++i)
	{
		if(a[i] > t)
		sum += ceil((a[i] - t)*1.0/(k - 1));
	}
	if(sum > t)
	return false;
	else
	return true;
}

int main()
{	   
    scanf("%lld",&n);
    for(int i = 0; i < n; ++i)
    scanf("%lld",&a[i]);
	sort(a,a+n);
	scanf("%lld",&k);
	if(k == 1)
	printf("%lld\n",a[n-1]);
	else
	{
		LL left = a[n-1]/(k*1.0);
        LL right = a[n-1];
        LL mid;
        while(right > left)
        {
    	    mid=(left + right)/2;
    	    if(check(mid))
    	    right=mid;
    	    else
    	    left=mid+1;
	    }
	    mid = (left + right)/2;
	    printf("%lld\n",mid);
	}    
	return 0;
 } 
