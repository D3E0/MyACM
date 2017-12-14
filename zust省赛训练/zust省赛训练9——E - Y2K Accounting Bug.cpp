#include <stdio.h>
int main()
{
	int s,d,ans,t;
	while(~scanf("%d%d",&s,&d))
	{
		ans=t=0;
		if(s>=4*d) t=1;
		else if(s<4*d&&2*s>=3*d) ans=3*s-9*d;
		else if(2*s<3*d&&3*s>=2*d) ans=6*s-6*d;
		else if(3*s<2*d&&4*s>=d) ans=8*s-4*d;
		else if(4*s<d) ans=10*s-2*d;
		if(ans<0) t=1;
		if(t) printf("Deficit\n");
		else printf("%d\n",ans);
	}
	return 0;
}
