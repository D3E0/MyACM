#include <stdio.h>
#include <math.h>
int main()
{
	int T,P,Pa,Pb;
	scanf("%d",&T);
	while(T--)
	{
         scanf("%d%d%d",&P,&Pa,&Pb);
         if(abs(Pa-P)>abs(Pb-P)) printf("B\n");
         else printf("A\n");
	}
	return 0;
}
