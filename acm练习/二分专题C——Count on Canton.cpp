#include <stdio.h>
int main()
{
    long i,n,m;
    while(scanf("%ld",&m)!=EOF)
    {
    	i=0; 
    	n=m;
    	while (i<n)
	    {
            n-=i;
            i++;
        }
        if (i%2==0) printf("TERM %ld IS %ld/%ld\n",m,n,i+1-n);
        else printf("TERM %ld IS %ld/%ld\n",m,i+1-n,n);
	}
    return 0;
}
