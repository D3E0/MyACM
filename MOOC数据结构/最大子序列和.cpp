#include <cstdio>
using namespace std;
typedef long long LL; 
int main()
{
	int n;
	scanf("%d",&n);	
	LL sum = 0,Max = 0,x;
	for(int i = 0; i < n; i++)
	{
		scanf("%lld",&x); 
	    sum += x;
		if(sum > Max)
		Max = sum;
		else if(sum < 0)
		sum = 0;				
	}
	printf("%lld\n",Max);
	return 0;
 } 
