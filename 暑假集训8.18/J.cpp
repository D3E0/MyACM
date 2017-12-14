#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
struct per
{
	int l,u;
}p[205];

bool cmp(const per &a,const per &b)
{
	if(a.l!=b.l)
	return a.l<b.l;
	else
	return a.u>b.u;
}
int main()
{
	int n;
	while(cin>>n)
	{
		memset(p,0,sizeof(p));
	    for(int i=0;i<n;i++)
	    {
	    	cin>>p[i].l>>p[i].u;
		}
		sort(p,p+n,cmp);
		int sum = 1;
		for(int i=0;i<n-1;i++)
		{
			if(p[i].u<p[i+1].l)
			sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
