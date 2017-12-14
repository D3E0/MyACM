#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <stack>
#define eps 1e-8 
using namespace std;
struct Pos
{
	double x,y;
}pos[105];

bool cmp(const Pos &a,const Pos &b)
{
	if(a.y>b.y)
	return false;
	else if(a.y == b.y)
	{
		if(a.x>b.x)
		return false;
	}
	return true;
}
bool equal(double n)
{
	return fabs(n-0)<eps;  
}
 
double compare(Pos p1,Pos p2,Pos p3)
{
	return (p3.x-p1.x)*(p2.y-p1.y)-(p3.y-p1.y)*(p2.x-p1.x);  
}

double dist(Pos a,Pos b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)); 
}
 
bool cmp1(const Pos &a,const Pos &b)
{
	double ans=compare(pos[0],a,b);  
    if(equal(ans))  
    return dist(pos[0],a)-dist(pos[0],b)<=0;  
    else   
    return ans>0;   
}
int main()
{
	int N;
	while(cin>>N&&N)
	{
		
		stack<Pos> ps;
		memset(pos,0,sizeof(pos));
		for(int i = 0; i < N; ++i)
		cin>>pos[i].x>>pos[i].y;
		if(N == 1)
		{
			cout<<0.00<<endl;
			continue;
		}
		if( N == 2)
		{
			printf("%.2lf\n",dist(pos[0],pos[1]));
			continue;
		}
		
		
		sort(pos,pos+N,cmp);
		sort(pos+1,pos+N,cmp1);		
		double S = 0;
		ps.push(pos[0]);
		ps.push(pos[1]);   
        for(int i=2;i<N;++i)
		{  
		    Pos p = ps.top(); 
		    ps.pop();
            while(compare(ps.top(),p,pos[i]) < 0)
            {
            	p = ps.top();
            	ps.pop();
			} 
			ps.push(p);
            ps.push(pos[i]);
        } 
		Pos p ,q;
		p = q = ps.top();
		ps.pop(); 
        while(!ps.empty())
        {
        	S+=dist(p,ps.top()); 
        	p = ps.top();
        	ps.pop();
		} 
		S+=dist(p,q);
        printf("%.2lf\n",S); 
	}
	return 0;
}
