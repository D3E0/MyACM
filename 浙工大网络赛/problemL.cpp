#include <iostream>
#include <cstdio> 
#include <algorithm> 
using namespace std;
int jiechen(int n)
{
	int sum=1;
	for(i=1;i<=n;i++)
	sum*=i;
	return sum;
}
int main()
{
	int a,b,n,ans,j,o;
	while(~scanf("%d%d%d",&a,&b,&n))
	{
		j=o=ans=0;
		for(int i=a;i<=b;i++)
		{
			if(!i%2) o++;
			else j++;
		}
		if(n<o)
		{
			if(!n%2) 
			{
				if(n<j) ans=(j*(jiechen(o)/(jiechen(o-n))*jiechen(n)))+(jiechen(j)/(jiechen(j-n)))
			}
			
		}
		
	}
	return 0;
}
