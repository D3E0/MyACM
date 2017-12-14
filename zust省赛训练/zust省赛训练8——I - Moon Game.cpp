#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
const double eps = 1e-8;
typedef struct
{
	int x,y;
}point;
point p[35];
double area(point a,point b,point c)  
{  
    return fabs(1.0*(a.x*b.y+b.x*c.y+c.x*a.y-a.x*c.y-b.x*a.y-c.x*b.y))/2;  
}  
int check(point a,point b,point c,point d)  
{  
    if ( fabs(area(b,c,d)-(area(a,b,c)+area(a,b,d)+area(a,c,d)))<eps)  
        return 0;  
    else  
        return 1;  
}  
int main()
{
	int T,N,i,j,k,l,cnt,count=0;
	scanf("%d",&T);
	while(T--)
	{
		cnt=0;
		scanf("%d",&N);
		if(N<4) printf("Case %d: 0\n",++count);
		else
		{
			for(i=0;i<N;i++)
            scanf("%d%d",&p[i].x,&p[i].y);
            for(i=0;i<N;i++)
            {
            	for(j=i+1;j<N;j++)
            	{
            		for(k=j+1;k<N;k++)
            		{
            			for(l=k+1;l<N;l++)
            			{
            				if(check(p[i],p[j],p[k],p[l])&&check(p[j],p[k],p[l],p[i])&&check(p[k],p[l],p[i],p[j])&&check(p[l],p[i],p[j],p[k]))
							cnt++;
						}
					}
				}   	
		    }
		    printf("Case %d: %d\n",++count,cnt);
		}   
	}
	return 0;
}
