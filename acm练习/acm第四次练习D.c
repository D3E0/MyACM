#include <stdio.h>
#include <math.h>
#define N 100
int main()
{
	int m,n,i,j,h,l,x,y,t;
	int a[N][N];
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		h=0;
		l=0;
		 for(i=0;i<m;i++)
	     {
		     for(j=0;j<n;j++)
		     scanf("%d",&a[i][j]);
	     }
      	 t=fabs(a[0][0]);
	     for(i=0;i<m;i++)
	     {
		     for(j=0;j<n;j++)
		     {
			     if(t<fabs(a[i][j]))
			     {
				     t=fabs(a[i][j]);
			         h=i;
				     l=j;
			     }
			     else if(t==fabs(a[i][j]))
	             ;		
		     }
	     }
	     printf("%d %d %d\n",h+1,l+1,a[h][l]);
	}	
	return 0;
}
