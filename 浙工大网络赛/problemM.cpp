#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	int T,count;
	while(~scanf("%d",&T))
	{
		count=0;
		while(T/5!=0)
		{
			count+=T/5;
			T/=5;
		}
		printf("%d\n",count);
	}
	return 0;
}
