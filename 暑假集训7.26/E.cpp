#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
using namespace std;

struct pos
{
	double t;
	double x;
}p[100005];

int cmp(const void *a,const void *b)
{
	pos *c=(pos*)a;
	pos *d=(pos*)b;
	if(c->t>d->t)
	return 1;
	else
	return -1;
}
int main()
{
	int T,N,count=0;
	cin>>T;
	while(T--)
	{
		memset(p,0,sizeof(p));
        cin>>N;
        for(int i=0;i<N;i++)
        {
        	cin>>p[i].t>>p[i].x;
		}
		qsort(p,N,sizeof(pos),cmp);
		double speed=0;
		for(int i=1;i<N;i++)
		{
			speed=max(speed,abs((p[i].x-p[i-1].x)/(p[i].t-p[i-1].t)));
		}
		cout<<"Case #"<<++count<<": ";
		printf("%.2lf\n",speed);
	}
	return 0;
}
