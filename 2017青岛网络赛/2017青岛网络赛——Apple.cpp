#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		LL x1,x2,x3,y1,y2,y3,x4,y4,a,b,c,d,e,f,r,r1;
		long double x,y;
		cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		a=2*(x2-x1);
        b=2*(y2-y1);
        c=x2*x2+y2*y2-x1*x1-y1*y1;
        d=2*(x3-x2);
        e=2*(y3-y2);
        f=x3*x3+y3*y3-x2*x2-y2*y2;
        x=(b*f-e*c)/(b*d-e*a);
        y=(d*c-a*f)/(b*d-e*a);
        r=(x-x1)*(x-x1)+(y-y1)*(y-y1);
        r1 = (x4-x)*(x4-x)+(y4-y)*(y4-y);
        cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<e<<" f="<<f<<" x="<<x<<" y="<<y<<" r="<<r<<" r1="<<r1<<endl;
		
		if(r<r1)
		cout<<"Accepted"<<endl;
		else
		cout<<"Rejected"<<endl;
	}
	return 0;
}
