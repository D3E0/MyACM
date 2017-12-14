#include <stdio.h>
#include <math.h>
int main()
{
	int T,n,i;
	double x,y;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		if(n<4) printf("No\n");
		else 
		{
			printf("Yes\n");
			printf("0.000000 %.6lf\n",sqrt(0.75));
			printf("-0.500000 0.000000\n");
			printf("0.500000 0.000000\n");
			printf("0.000000 %lf\n",sqrt(0.75)-1);
			for(i=4;i<n;i++)
			{
				x=i*0.001;
				y=sqrt(1-pow(x+0.5,2));
				printf("%.6lf %.6lf\n",x,y);
			}
		}
	}
	return 0;
}
