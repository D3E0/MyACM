#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int p[505],p1[505];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int F,H,W;
		cin>>F>>H>>W;
		memset(p,0,sizeof(p));
		for(int i=1;i<=F;i++)
	    {
             cin>>p1[i];
		}
		sort(p1+1,p1+F+1);
	    for(int i=1;i<=F;i++)
	    {
	    	p[i]=p1[i]-p1[i-1];
		}
		p[F+1]=W-p1[F];
		sort(p+1,p+F+2);
		cout<<p[1]*H<<endl;
	}
	return 0;
}
