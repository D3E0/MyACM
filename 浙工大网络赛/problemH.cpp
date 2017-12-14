#include <iostream>
#include <cstdio> 
#include <algorithm> 
using namespace std;
int main()
{
	int M,N,mi[505];
	while(~scanf("%d%d",&M,&N))
	{
		if(!M) break;
		int sum=0;
        for(int i=0;i<M;i++)
        {
        	scanf("%d",&mi[i]);
        	sum+=mi[i];
		}
		sort(mi,mi+M);
		if(M>N)
		{	
			for(int i=0;i<M-N;i++)
			sum-=mi[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
