#include <stdio.h>
int main()
{
	int N,M,P,C,SUM;
	while(scanf("%d %d %d %d",&N,&M,&P,&C)!=EOF)
	{
		if(N==0&&M==0&&P==0&&C==0)
	    break;
	    else
	    {
		SUM=N+P-M;
	    printf("%d\n",SUM);
	    }	
	}
	return 0;	
}