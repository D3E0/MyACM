#include <stdio.h>
int main()
{
	int n,m,x,y,z,a,b,i,t,c;
	long long money;
	while(scanf("%d%d%d%d%d%d%d",&n,&m,&x,&y,&z,&a,&b)!=EOF)
	{
		money=n;
		c=0;
        if(x<z&&y<=z)
        {
        	for(i=0;i<m;i++)
            {
			    if(money>=a&&a<((y-x)*(m-i))&&(c==0||c==1))
                {
                	if(c==0)
                	{
                		money-=a;
        	            c=1;
                	}
        	       if(money>=b&&b<(z-y)*(m-i)&&c==1)
    	   	       {
		                money-=b;
 	   	                money+=(m-i)*z;
     	   	            break;
      	   	       }
          	   	   else
          	   	   money+=y;
                }
                else
                money+=x;
            }
        }
        else if(x<y&&z<=y)
        {
            for(i=0;i<m;i++)
            {
			    if(money>=a&&a<(y-x)*(m-i))
                {
                	money-=a;
        	        money+=y*(m-i);
        	        break;
                }
                else
                money+=x;
            }
        }
        else if((x>=z&&x>=y)||(x==y&&y==z))
        money+=m*x;
        if(n>money)
        money=n;
        printf("%lld\n",money);
	}
	return 0;
}
