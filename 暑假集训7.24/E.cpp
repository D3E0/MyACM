#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int T,N,p[105];
	string S;
	double ans,b;
	cin>>T;
	while(T--)
	{
		cin>>N>>S;
		if(S=="bit")
		b=2;
		else if(S=="dit")
		b=10;
		else
		b=exp(1.0);
		ans=0;
		for(int i=0;i<N;i++)
		cin>>p[i];
		for(int i=0;i<N;i++)
		{
			if(p[i]==0)
			continue;
			ans+=-(p[i]/100.0)*(log(p[i]/100.0)/log(b));
		}
		printf("%.12lf\n",ans);
	}
	return 0;
}
