#include <stdio.h> 
int main()
{
	int T,d,t,ans;
	double sum1,sum2;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&d,&t);
		sum1=2*t/5.0;
		sum2=2.5*t/4.0;
		if(d>10) 
		{
			sum1+=7*2+3*(d-10);
			sum2+=7*2.5+3.75*(d-10);
		}
		else if(d<=10&&d>3) 
		{
			sum1+=(d-3)*2;
			sum2+=(d-3)*2.5;
		}
		sum1=(int)(sum1+0.5);
		sum2=(int)(sum2+0.5);
		ans=sum2-sum1;
		printf("%d\n",ans);
	}
	return 0;
}
