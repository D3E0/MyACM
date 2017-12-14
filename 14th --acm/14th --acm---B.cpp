#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void* a,const void* b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
	int T,n,i,a[105],flag;
	scanf("%d",&T);
	while(T--)
	{
	   memset(a,0,sizeof(a));
	   flag=1;
       scanf("%d",&n);
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       if(n<10||n>13)
       printf("No\n");
       else 
       {
       	    qsort(a,n,sizeof(int),cmp);
       	    if(a[0]!=1||a[1]!=1) flag=0;
       	    if(flag)
       	    {
       	    	for(i=1;i<n-1;i++)
       	        {
       	  	        if((a[i]-a[i-1])>2) 
				    {
					    flag=0;
					    break;
				    }		  
			    }
			}
			if(flag==0) printf("No\n");
			else printf("Yes\n");    
	   }
	}
	return 0;
}
