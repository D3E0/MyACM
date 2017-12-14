#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
	int count=0,m;
	while(~scanf("%d",&m))
	{
		int ans=0;
		ans=m*(log(2)/log(10));
		printf("Case #%d: %d\n",++count,ans);
	}
	return 0; 
}
