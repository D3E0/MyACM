#include <cstdio>
#include <algorithm>
#include <cmath>
#define Pi acos(-1.0)
using namespace std;
const int MAXN = 10005;
int N,F;
double r[MAXN];
bool check(double t)
{
	int sum = 0;
	for(int i = 0; i< N; ++i)
	{
		sum+=r[i]/t;
		if(sum>=F)
		return true;
	}
	return false;
}

int main()
{	   
    int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&N,&F);
		F++;
	    for(int i = 0; i < N; ++i)
	    {
	    	scanf("%lf",&r[i]);
	    	r[i]=r[i]*r[i]*Pi;
		}	    
	    sort(r,r+N);
		double left = 0;
	    double right = r[N-1];
	    double mid;
	    while(right - left > 1e-5)
	    {
	    	mid=(left + right)/2;
	    	if(check(mid))
	    	left=mid;
	    	else
	    	right=mid;
		}
		mid = (left + right)/2;
		printf("%.4lf\n",mid);
	}        
	return 0;
 } 
