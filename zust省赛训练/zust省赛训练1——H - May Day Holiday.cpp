#include <stdio.h>
#include <math.h>
int main()
{
	int T,N,w,y,c,m,d;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
        m=5;
        d=1;
        c=N/100;
        y=N%100;
        w=y+floor(y/4.0)+floor(c/4.0)-2*c+floor(26*(m+1)/10.0)+d-1;
        w=w%7;
        while(w<0)
        w+=7;
        w=w%7;
        switch(w)
        {
        	case 0:
        	case 2:printf("6\n");break;
			case 1:printf("9\n");break;
			default:printf("5\n");break;	
		}
	}
	return 0;
}
