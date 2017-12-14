#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
	int T,N,t[1005];
	double Max,sum,x[1005],y[1005];
	cin>>T;
	while(T--)
	{
		Max=sum=0;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	    	cin>>t[i]>>x[i]>>y[i];
	    	if(i!=0)
	    	{
	    		sum=sqrt((x[i]-x[i-1])*(x[i]-x[i-1])+(y[i]-y[i-1])*(y[i]-y[i-1]))/(t[i]-t[i-1]);
	    		Max=max(Max,sum);
			}
		}
	    printf("%.10lf\n",Max);
	}
	return 0;
}
