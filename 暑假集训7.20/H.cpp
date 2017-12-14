#include <iostream>
#include <algorithm>
using namespace std;

typedef long long LL;
int main()
{
	LL n,m,k,x,y;
	while(cin>>n>>m>>k>>x>>y)
	{
		LL max=(LL)(k/(double)(n*m)+0.5);
		LL min=(LL)k/(double)(n*m);
		if(min%2==0)
		{
			
		}
        cout<<max<<" "<<min<<" ";
        
	}
	return 0;
}
